#include<bits/stdc++.h>
using namespace std;
int t,a,b;
void solve(){
    int k=0;
    a--;
    if(a%4==0)k=a;
    else if(a%4==1)k=1;
    else if(a%4==2)k=a+1;
    else k=0;
    a++;
    if(k==b)cout<<a;
    else if((k^a)==b)cout<<a+2;
    else cout<<a+1;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        solve();
    }
}