class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i,j;
        for(i=a.size()-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {   
                    sort(a.begin()+i,a.end());
                     for(j=i;j<a.size();j++)
                     {
                         if(a[i-1]<a[j])
                         {  
                             swap(a[i-1],a[j]);
                             return;
                         }
                     }
                return;
            }
        }
        reverse(a.begin(),a.end());
    }
};