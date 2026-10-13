#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
 
    for(int i = 1; i<=n; i++){
        int x = i;
        int d=0;
        
        while(x>0){
            d = d + x%10;
            x=x/10;
        }
        if(d >= a && d <= b){
            sum = sum + i;
        }
    }
    cout<<sum;
 
    return 0;
}