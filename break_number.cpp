#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
 
    long long x;
    int max = 0;
 
    for(int i = 0; i < n; i++){
        cin>>x;
        int count = 0;
 
        while(x%2==0){
            x = x / 2;
            count++;
        }
 
        if (count > max){
            max = count;
        }
    }
 
    cout<<max<<endl;
 
    return 0;
}