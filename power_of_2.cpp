#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    long long x=log2(N);
    if (pow(2,x)==N){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}