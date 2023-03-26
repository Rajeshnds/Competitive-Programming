#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,a,b,c,m;
void solve(){
    int k=0;
    if(a==m)k++;
    if(b==m)k++;
    if(c==m)k++;
    if(k>1){
        m++;
        cout<<m-a<<" "<<m-b<<" "<<m-c;
    }
    else{
        if(a==m)cout<<0<<" ";
        else cout<<m+1-a<<" ";
        if(b==m)cout<<0<<" ";
        else cout<<m+1-b<<" ";
        if(c==m)cout<<0<<" ";
        else cout<<m+1-c;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>c;
        m=max(a,max(b,c));
        solve();
    }   
}