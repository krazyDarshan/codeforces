#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n<=0 || m<=0){
            break;
        }
 
        int d=0;
        int e=0;
 
        if(n>m){
            for(int i=m; i<=n; i++){
                cout<<i<<" ";
                d=d+i;
            }
            cout<<"sum ="<<d<<endl;
        }
        else{
            for(int j=n; j <= m ;j++){
                cout<<j<<" ";
                e=e+j;
            }
            cout<<"sum ="<<e<<endl;
        }
    }
    return 0;
}   