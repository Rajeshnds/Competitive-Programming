#include<bits/stdc++.h>
using namespace std;
int t,n,q,a[100002];
long long s[100002];
set<long long>st;
void sum(int l,int r){
    int m=(a[l]+a[r])/2;
    int d=upper_bound(a+1,a+n+1,m)-a;
    st.insert(s[r]-s[l-1]);
    if(d==r+1)return;
    sum(d,r);
    sum(l,d-1);
}
void solve(){
    int d;
    sum(1,n);
    for(int i=1;i<=q;i++,cout<<endl){
        cin>>d;
        cout<<(st.count(d)?"Yes":"No");
    }
}
int main(){
    for(cin>>t;t--;){
        st.clear();
        cin>>n>>q;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)s[i]=s[i-1]+a[i];
        solve();
    }
}