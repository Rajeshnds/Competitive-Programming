#include<bits/stdc++.h>
using namespace std;
int n,a,b;
string moon(int n){
    for(int i=1;i<n;i++)cin>>a;cin>>b;
    return b==0?"UP":b==15?"DOWN":n==1?"-1":b>a?"UP":"DOWN";
}
int main(){
    cin>>n;
    cout<<moon(n);
}
