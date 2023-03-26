#include<bits/stdc++.h>
using namespace std;
# define ll long long
ll n,a[200001],b,f,s=-1,k,m,d;
map<ll,ll>mp;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>d,mp[d]++;
    cin>>m;
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<m;i++){
        cin>>b;
        k=mp[a[i]]*200000+mp[b];
        if(k>s)s=k,f=i+1;
    }
    cout<<f;
}