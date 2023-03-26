#include<bits/stdc++.h>
using namespace std;
int q,n;
string s,t;
void solve(){
    int d=1,f=1;
    for(int i=0;i<n;i++){
        if(d==1&&s[i]>'2'){
            if(t[i]<'3')f=0;
            d=0;
        }
        else if(d==0&&t[i]>'2'){
            if(s[i]<'3')f=0;
            d=1;
        }
    }
    cout<<(f&&!d?"YES":"NO");
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>s>>t;
        solve();
    }
}