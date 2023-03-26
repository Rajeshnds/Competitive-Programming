#include<bits/stdc++.h>
using namespace std;
double t,n;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        cout<<fixed<<setprecision(7)<<1/tan(asin(1)/n)<<endl;
    }
}