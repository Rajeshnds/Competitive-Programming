#include<bits/stdc++.h>
using namespace std;
int n,d,a,b,c[100001],j;
pair<int,int>p[100001];
void solve(){
    for(int i=0;i<n;i++){
        if(d>=p[i].first)d-=p[i].first,c[j++]=p[i].second;
    }
    cout<<j<<endl;
    for(int i=0;i<j;i++)cout<<c[i]<<" ";
}
int main(){
    int g,h;
    cin>>n>>d>>a>>b;
    for(int i=0;i<n;i++){
        cin>>g>>h;
        p[i].first=g*a+h*b;
        p[i].second=i+1;
    }
    sort(p,p+n);
    solve();
}