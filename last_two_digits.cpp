#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
 
    int ans;
    ans=(A%100)*(B%100)*(C%100)*(D%100);
    ans=ans%100;
 
    cout<<setw(2)<<setfill('0')<<ans;
 
 
    return 0;
}
