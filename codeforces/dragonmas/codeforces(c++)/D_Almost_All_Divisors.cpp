#include<bits/stdc++.h>
using namespace std;
int t,n;
set<int>s;
void solve(){
    set<int>t;
    long long k=1LL**s.begin()**--s.end();
    for(int i=2;1LL*i*i<=k;i++){
        if(k%i==0)t.insert(k/i),t.insert(i);
    }
    cout<<(s==t?k:-1);
}
int main(){
    int a;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        s.clear();
        for(int i=1;i<=n;i++)cin>>a,s.insert(a);
        solve();
    }
}