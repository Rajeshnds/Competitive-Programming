#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,k,a[400001];
void solve(){
    int d,e=0;
    long long l=0;
    for(int i=k;i>=1;i--){
        e++;
        d=n-a[i];
        l+=d;
        if(l>=a[i-1])break;
    }
    cout<<e;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        for(int i=1;i<=k;i++)cin>>a[i];
        sort(a+1,a+k+1);
        solve();
    }   
}