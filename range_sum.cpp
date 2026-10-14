#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
        long long l,r,y;
        cin>>l>>r;
        
        if(l>r){
            y = l;
            l = r;
            r = y;
        }
        
        long long x= (r-l+1)*(l+r)/2;
 
        cout<<x<<endl;
    }
 
    return 0;
}
