void rotate(int arr[], int n)
{
    int i,temp;
    temp=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}