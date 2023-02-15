//Sort an array of 0s, 1s and 2s

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int m=0;
        int p=0;
        int q=0;
        for(int i=0;i<n;i++){
            if(a[i] == 0)
                m++;
            else if(a[i] ==1)
                p++;
            else
                q++;
        }
        
        // cout<<m<<" "<<p<<" "<<q<<" ";
        int i=0;
        
        while(m--){
            a[i++] = 0;
        }
        while(p--){
            a[i++] = 1;
        }
        while(q--){
            a[i++] = 2;
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
