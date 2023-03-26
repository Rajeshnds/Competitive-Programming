


#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    if(n&1){cout<<"Bob";return;}
    int k=log2(n);
    if((1<<k)!=n){
        cout<<"Alice";
    }
    else{
        if(k&1){
            cout<<"Bob";
        }
        else cout<<"Alice";
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}