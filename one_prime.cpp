#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int count =0;
    
    for(int i = 1; i*i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    
    if(n>1 && count ==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}