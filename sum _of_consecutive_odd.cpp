
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int x,y;
        cin>>x>>y;
        int d = 0;
        if(x<y){
            x++;
            while(x<y){
                if(x%2!=0){
                    d=d+x;
                }
                x++;
            }
        }
        else{
            y++;
            while(y<x){
                if(y%2!=0){
                    d=d+y;
                }
                y++;
            }
        }
    cout<<d<<endl;
    }
    return 0;
}