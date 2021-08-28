class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i,start=0,last=n-1,temp;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                temp=a[i];
                a[i]=a[start];
                a[start]=temp;
                start++;
            }
        }
        for(i=n-1;i>=start;i--)
        {
            if(a[i]==2)
            {
                temp=a[i];
                a[i]=a[last];
                a[last]=temp;
                last--;
            }
        }
    }
    
};