// Union of two arrays

//{ Driver Code Starts
//Initial template for C++

#include<iostream>

using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        //BRUTE FORCE APPROACH
        // int i=0, j=0, k=0;
        // int c[m+n];
        
        // while(i<n && j<m){
        //     if(a[i] < b[j]){
        //         c[k++] = a[i++];
        //     }else if(a[i] > b[j]){
        //         c[k++] = b[j++];
        //     }else{
        //         c[k++] = a[i++];
        //         j++;
        //     }
        // }
        // while(i<n){
        //     c[k++] = a[i++];
        // }
        // while(j<m){
        //     c[k++] = b[j++];
        // }
        // return k;
        
        //USING SET 
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            s.insert(b[j]);
        }
        return s.size();
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends