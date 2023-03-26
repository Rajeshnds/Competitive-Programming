#include<bits/stdc++.h>
using namespace std;
int t,n,k,l;
void color(int n,int k){
    int d=0,l=n/(1+k+k*k+k*k*k);
    cout<<l<<" "<<k*l<<" "<<k*k*l<<" "<<k*k*k*l;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        color(n,k);
    }
}
