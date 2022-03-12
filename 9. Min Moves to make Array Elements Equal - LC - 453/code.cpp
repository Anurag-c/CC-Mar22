class Solution {
public:
    int minMoves(vector<int>& arr){
        
        int n=arr.size();
        int sum=0;
        
        for(int i=0;i<n;i++) sum+=arr[i];
        
        int mi=*min_element(arr.begin(),arr.end());
        
        //sum + moves*(n-1) = finalElement * n
        //finalElement = minElement + moves
        //so, moves = sum - minElement * n  
        
        return sum-mi*n;
    
    }
};