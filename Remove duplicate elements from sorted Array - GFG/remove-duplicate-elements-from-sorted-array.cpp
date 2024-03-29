//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int count = 0;
        int freq[1000000] = {0};
        int ans[n] = {0};
        int j = 0;
        
        for(int i = 0; i < n; i++){
            
            if(freq[a[i]] == 0){
                freq[a[i]]++;
                count++;
                ans[j++] = a[i];
            }
        }
        
        for(int i = 0; i < count; i++){
            a[i] = ans[i];
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends