#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int days;
        int months;
        int years;

        years = n/365;
        n=n%365;

        months = n/30;
        days = n%30;

        cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days"<<endl;
        
    }
    return 0;
}