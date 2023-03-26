#include<bits/stdc++.h>
using namespace std;
int n,a[200001];
map<int,map<int,int>>m;
void solve(){
    int j=1;
    for(int i=0;i<n;i++){
        while(m[a[i]][a[j]])j++;
    }
    cout<<(j==n&&a[0]==1?"Yes":"No");
}
int main(){
    int b,c;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>b>>c;
        m[b][c]=1;
        m[c][b]=1;
    }
    for(int i=0;i<n;i++)cin>>a[i];
    solve();
}
