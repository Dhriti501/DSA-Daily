//Sum of Middle Elements of two sorted arrays

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            int i=0,j=0;
            
            vector<int> ar3;
            
            //merge array by sorting 
            while(i<n && j<n){
                if(ar1[i] < ar2[j]){
                    ar3.push_back(ar1[i++]);
                    
                }else{
                    ar3.push_back(ar2[j++]);
                }
            }
            
            //if array 2 becomes empty
            for( ; i<n;i++)
                ar3.push_back(ar1[i]);
            //if array 1 becomes empty
            for( ; j<n; j++)
                ar3.push_back(ar2[j]);

            //median value is added and returned
            return ar3.at(n-1)+ar3.at(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends