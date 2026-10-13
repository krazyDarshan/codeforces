
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int d = 0;
        
        if(n==0){
            cout<<"0"<<endl;
        }
        else{
            while(n>0){
            d=n%10;
            cout<<d<<" ";
            n=n/10;
        }
        cout<<endl;
 
    }
        }
 
    return 0;
}