//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/


class Solution {
public:
    int PalinArray(int a[], int n)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            int num = a[i];
            int rev=0;
            while(num)
            {
                int x=num%10;
                rev=rev*10+x;
                num=num/10;
                
            }
            if(rev==a[i])
            count++;
            
        }
        if(count==n)
        return 1;
        else
        return 0;
    	
    }
};




//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends