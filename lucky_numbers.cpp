
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a;
    cin>>a;
    int x = a%10;
    int y = (a-x)/10;
    if(x%y==0 || y%x==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}