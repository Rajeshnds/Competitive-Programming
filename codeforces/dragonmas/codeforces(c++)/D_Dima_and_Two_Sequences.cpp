#include<bits/stdc++.h>
using namespace std;
int n,q,a[100001],b[100001],p;
long long ans=1,k;
map<int,int>m;
long long factorial(int a){
    k=1;
    for(int i=2;i<=a;i++){
        int d=i;
        while(d%2==0&&p>0)d/=2,p--;
        k=(k*d)%q;
    }
    return k;
}
void solve(){
    for(auto i:m){
        ans=(ans*factorial(i.second))%q;
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        m[b[i]]++;
        if(a[i]==b[i])p++;
    }
    cin>>q;
    solve();
}