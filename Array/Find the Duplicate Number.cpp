class Solution {
public:
    int findDuplicate(vector<int>& a) {
    int n=a.size(),k=0,i;
     sort(a.begin(),a.end());
     for(i=0;i<n;i++)
     {
         if(a[i]==a[i+1])
         {
             break;
         }
     }
    return a[i];
    }
};