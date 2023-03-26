#include<bits/stdc++.h>
using namespace std;
int n,m,e,f,k,a[101],l,d[101],j;
string s[101];
map<string,int>mp;
int min_max_price(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)cin>>s[i],mp[s[i]]++;
    for(int i=0;i<m;i++)d[j++]=mp[s[i]],mp[s[i]]=0;
    sort(d,d+j);k=n-1;
    for(int i=j-1;i>=0;i--)if(d[i]>0)e+=d[i]*a[l++],f+=d[i]*a[k--];
    cout<<e<<" "<<f;
}
int main(){
    min_max_price();
}
