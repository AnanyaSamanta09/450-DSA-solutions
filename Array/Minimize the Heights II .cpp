class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
    sort(arr,arr+n);
    int mini,maxii;
    int result=arr[n-1]-arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            maxii=max(arr[i-1]+k,arr[n-1]-k);
            mini=min(arr[0]+k,arr[i]-k);
            
            result=min(result,maxii-mini);
        }
    }
    return result;
    }
};