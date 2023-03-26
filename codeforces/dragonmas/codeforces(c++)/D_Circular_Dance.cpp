#include<bits/stdc++.h>
using namespace std;
int n,a[200001];
vector<int>v[200001];
void solve(){
    int r=1;
    a[1]=1;a[2]=v[1][0];a[3]=v[1][1];
    for(int i=2;i<=n-2;i++){
        if(v[a[i]][0]!=a[i+1]&&v[a[i]][1]!=a[i+1]){
            r=0;
            break;
        }
        else{
            if(v[a[i]][0]!=a[i+1])a[i+2]=v[a[i]][0];
            else a[i+2]=v[a[i]][1];
        }
    }
    if(r==0){
        swap(a[2],a[3]);
        for(int i=2;i<=n-2;i++){
            if(v[a[i]][0]!=a[i+1])a[i+2]=v[a[i]][0];
            else a[i+2]=v[a[i]][1];
        }
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    cin>>n;
    int a,b;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        v[i].push_back(a);
        v[i].push_back(b);
    }
    solve();
}