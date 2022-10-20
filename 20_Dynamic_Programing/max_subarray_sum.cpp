    public:
    long long maxSubarraySum(int arr[], int n){
        
        int ans= INT_MIN, m = 0;
        for(int i=0;i<n;i++){
            m = max(m+arr[i], arr[i]);
            ans = max(ans, m);
        }
        return ans;
        
    }
};