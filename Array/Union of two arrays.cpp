class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
    map<int,int>ma;
    int i,c=0;
    for(i=0;i<n;i++)
    {
        ma[a[i]]++;
    }
    for(i=0;i<m;i++)
    {
        ma[b[i]]++;
    }
    for(auto x:ma)
    {
        if(x.second>=1)
        {
            c++;
        }
    }
    return c;
    }
};
