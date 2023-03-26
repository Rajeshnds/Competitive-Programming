#include<bits/stdc++.h>
using namespace std;
int t,n,p,k,x,y;
string s;
void solve(){
    int m=INT_MAX,a[200001]={0};
    p--;
    for(int i=n-1;i>=p;i--){
        a[i]=x*(1-s[i]+'0');
        if(i+k<n)a[i]+=a[i+k];
        m=min(m,(i-p)*y+a[i]);
    }
    cout<<m<<endl;
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>p>>k>>s>>x>>y;
        solve();
    }
}