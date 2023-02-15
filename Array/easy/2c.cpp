//Move all negative elements to end

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int arrpos[n];
        int arrneg[n];
        int j=0, k=0;
        
        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                arrneg[j++] = arr[i];
            }else{
                arrpos[k++] = arr[i];
            }
        }
        
        // for(int i=0;i<j;i++){
        //     cout<<arrneg[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<k;i++){
        //     cout<<arrpos[i]<<" ";
        // }
        // cout<<endl;
        
        // cout<<j<<" "<<k;
        
        for(int i=0;i<k;i++)
        {
            arr[i] = arrpos[i];
        }
        
        for(int j=0,i=k;i<n;i++,j++){
            arr[i] = arrneg[j];
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends