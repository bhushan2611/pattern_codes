#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter value of n";      // diamond pattern
    int n;cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j <= n-i)
                cout<<" ";
            else    
                cout<<" *";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++){
        for(j=1;j<=n;j++){
            if(j <= i)
                cout<<" ";
            else    
                cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}

/*
        *
       * *
      * * *
     * * * *
      * * * 
       * *
        * 
*/