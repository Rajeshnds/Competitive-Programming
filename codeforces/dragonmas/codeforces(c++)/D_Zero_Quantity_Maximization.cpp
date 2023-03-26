#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b,mx,k,l;
map<pair<int,int>,int>m;
void solve(){
    for(int i=0;i<n;i++){
        cin>>b;
        if(a[i]==0&&b==0)l++;
        if(a[i]){
            int g=__gcd(a[i],b);
            m[{a[i]/g,b/g}]++;
        }
    }
    for(auto i:m)mx=max(mx,i.second);
    cout<<max(k,mx+l);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    solve();
}