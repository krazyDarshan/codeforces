#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x = n;
    int y=0;

    while(n>0){
        int digit=n%10;
        y = y *10 + digit;
        n=n/10;
    }
    
    cout<<y<<endl;

    if(x==y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}