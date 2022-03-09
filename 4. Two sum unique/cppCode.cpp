vector<vector<int>> twoSumUnique(vector<int>& arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    
    vector<vector<int>>ans;
    while(low < high)
    {
        if(arr[low] + arr[high] == target)
        {
            ans.push_back({arr[low], arr[high]});
            low++;
            high--;
            while(low < high && arr[low] == arr[low - 1]) low++;
            while(low < high && arr[high] == arr[high + 1]) high--;
        }
        
        else if(arr[low] + arr[high] < target) low++;
        else high--;
    }
    
    return ans;
}

int main() 
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];
    
    int target;
    cin>>target;
    vector<vector<int>>ans = twoSumUnique(nums, target);
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i][0]<<", "<<ans[i][1]<<"\n";
}