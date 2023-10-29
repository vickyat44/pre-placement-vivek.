//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans="";
        sort(arr, arr+N);
        string first=arr[0];
        string last=arr[N-1];
        
        if(first[0]!=last[0])
        return "-1";
        int i=0;
        int j=0;
        for(int i=0;i<last.length();i++)
        {
            if(first[i]!=last[i])
            break;
            
            ans+=first[i];
        }
        return ans;
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends