class Solution {
public:
    
    bool isPossible(vector<int> arr,int mid,int h){
        
        int n = arr.size();
        
        for(int i=0;i<n;i++) h -= ceil(1.0 * arr[i] / mid); 
            
        return h >= 0;
        
    }
    
    int minEatingSpeed(vector<int>& arr, int h){
        
        int n = arr.size();
        
        int lo = 1;
        int hi = INT_MIN;
        int ans = -1;
        
        for(int i=0;i<n;i++) hi = max(hi,arr[i]);
            
        while(lo <= hi){
            
            int mid = (lo + hi) >> 1;
            
            if(isPossible(arr,mid,h)){
                
                hi = mid - 1;
                ans = mid;
                
            }
            else lo = mid + 1;
            
        }
        
        return ans;
        
        
    }
};