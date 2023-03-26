#include<bits/stdc++.h>
using namespace std;
int n,m,s,d,a[200001];
vector<int>v;
void solve(){
    int k=1;
    for(int i=2;i<=n;i++){
        if(a[i]-a[i-1]<s+2){
            k+=(a[i]-a[i-1]);
            if(d<k+1){cout<<"IMPOSSIBLE";return;}
        }
        else{
            v.push_back(k+1);
            v.push_back(a[i]-a[i-1]-2);
            k=1;
        }
    }
    if(d<k+1){cout<<"IMPOSSIBLE";return;}
    v.push_back(k+1);
    if(m!=a[n]+1)v.push_back(m-a[n]-1);
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            cout<<"RUN "<<v[i]<<endl;
        }
        else{
            cout<<"JUMP "<<v[i]<<endl;
        }
    }
}
int main(){
    cin>>n>>m>>s>>d;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    if(a[1]<s+1)return cout<<"IMPOSSIBLE",0;
    v.push_back(a[1]-1);
    solve();
}