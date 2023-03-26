#include<bits/stdc++.h>
using namespace std;
int t,d;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>d;
        if(d*d<4*d)cout<<"N";
        else{
            cout<<"Y ";
            double k=(d-(sqrt(d*d-4*d)))/2;
            printf("%.81f %.81f",d-k,k);
        }
    }
}
