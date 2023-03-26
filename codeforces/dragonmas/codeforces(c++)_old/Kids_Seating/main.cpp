#include<bits/stdc++.h>
using namespace std;
int t,n;
void chair(int n){
    for(int i=n*2;i<4*n;i+=2)cout<<i<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl)cin>>n,chair(n);
}
