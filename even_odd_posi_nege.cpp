#include<bits/stdc++.h>
using namespace std;

int main(){

        int n,x;
        cin>>n;

        int even=0;
        int odd=0;
        int positive=0;
        int negative=0;

        for(int i=0;i<n;i++){
            cin>>x;

            if(x%2==0){
                even++;
            }
            else{
                odd++;
            }

            if(x<0){
                negative++;
            }
            else if(x>0){
                positive++;
            }
        }

        cout<<"Even: "<<even<<endl;
        cout<<"Odd: "<<odd<<endl;
        cout<<"Positive: "<<positive<<endl;
        cout<<"Negative: "<<negative<<endl;

    return 0;
}