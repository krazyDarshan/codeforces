#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
 
    if(a==1 && c==1 || a==0 && c==0){
        cout<<"NO";
    }
    
    else if(b==0 && d==0){
        cout<<"NO";
    }
 
    else if(a==c){
        if(b>d){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
 
    else if(b==d){
        if(a>c){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
 
    else if(b*log(a)>d*log(c)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    
    
    return 0;
}