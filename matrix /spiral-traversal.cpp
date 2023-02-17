//spiral traversal of matrix 

#include <iostream>
using namespace std;

int main(){
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int n=3;
    int m=4;

    cout<<"initial matrix : "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
     }          

    //init var
    int rs=0,cs=0,re=n-1,ce=m-1;
    while(rs<=re && cs <= ce){

        //row ---->
        for(int i=cs; i<=ce; i++){
            cout<<a[rs][i]<<" ";
        }
        rs++;
        cout<<endl;

        //col |
        //    v   
        for(int j=rs; j<=re;j++){
            cout<<a[j][ce]<<" ";
        } 
        ce--;
        cout<<endl;

        //validation 
        if(rs<=re){           
            //row  <--- 
            for(int i=ce;i>=cs;i--){
                cout<<a[re][i]<<" ";
            }
            re--;
            cout<<endl;
        }


        if(cs<=ce){
            //    ^
            //col |
            for(int j=re;j>=rs;j--){
                cout<<a[j][cs]<<" ";
            }
            cs++;
            cout<<endl;
            }
    }

    return 0;
}