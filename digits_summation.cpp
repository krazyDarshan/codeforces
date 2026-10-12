#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long N,M;
    cin>>N>>M;
 
    long long a,b,sum;
    a = N%10;
    b = M%10;
    sum = a + b;
 
    cout<< sum;
 
    return 0;
}