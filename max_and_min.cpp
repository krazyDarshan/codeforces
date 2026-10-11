#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,MIN,MAX;
    cin>>A>>B>>C;

    if(A<B && A<C){
        MIN=A;
    }
    else if(B<C){
        MIN=B;
    }
    else{
        MIN=C;
    }

    if(A>B && A>C){
        MAX=A;
    }
    else if(B>C){
        MAX=B;
    }
    else{
        MAX=C;
    }

    cout<<MIN<<" "<<MAX;
}