#include<bits/stdc++.h>
using namespace std;
int t,n;
string stones(int n){
    int a,f=1,k=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>1&&f)k=i,f=0;
    }
    if(k==0)k=n;
    return k%2?"First":"Second";
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<stones(n)<<endl;
}
