// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int> &arr, int n)
{
    unordered_map<int,vector<int>>m;
        int sum=0;
        vector<int>v;
        v.push_back(sum);
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            v.push_back(sum);
            
        }
        for(int i=0;i<v.size();i++)
        {
            m[v[i]].push_back(i);
    
            
        }
        int ans=INT_MIN;
        
        for(auto it:m)
        {
            vector<int>v1=it.second;
            int x=*max_element(v1.begin(),v1.end());
            int y=*min_element(v1.begin(),v1.end());
            ans=max(ans,abs(x-y));
            
        }
        return ans;
}
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends