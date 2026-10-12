#include<bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin>>x;

    if(x>=48 && x<65){
        cout<<"IS DIGIT";
    }
    else if(x>=65 && x<97){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else{
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}