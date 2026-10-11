#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int A,B;
    cin>>A>>B;
 
    int floor = A/B;
    cout<<"floor "<<A<<" / "<<B<<" = "<<floor<<endl;
 
    int ceil = floor;
    if (A%B != 0){
        ceil++;
    }
    cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil<<endl;
 
    double r = (double)A/B;
    cout<<"round "<<A<<" / "<<B<<" = "<<round(r);
 
 
    return 0;
}