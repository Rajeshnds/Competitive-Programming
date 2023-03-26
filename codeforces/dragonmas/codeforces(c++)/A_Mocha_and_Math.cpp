#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    int a,b;
    cin>>a;
    for(int i=1;i<n;i++)cin>>b,a=a&b;
    cout<<a;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}