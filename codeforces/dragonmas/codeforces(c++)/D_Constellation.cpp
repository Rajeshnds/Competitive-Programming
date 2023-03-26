#include<bits/stdc++.h>
using namespace std;
int n,m,l;
char c[302][302];
vector<pair<int,pair<int,int>>>v;
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]=='*'){
                for(int k=1;j+k<=m&&j-k>=1&&i+k<=n&&i-k>=1;k++){
                    if(c[i][j+k]=='*'&&c[i][j-k]=='*'&&
                    c[i+k][j]=='*'&&c[i-k][j]=='*'){
                        v.push_back({k,{i,j}});
                    }
                }
            }
        }
    }
    if(v.size()<l){cout<<-1;return;}
    sort(v.begin(),v.end());
    int k=v[l-1].first;
    int i=v[l-1].second.first;
    int j=v[l-1].second.second;
    cout<<i<<" "<<j<<endl
    <<i-k<<" "<<j<<endl
    <<i+k<<" "<<j<<endl
    <<i<<" "<<j-k<<endl
    <<i<<" "<<j+k;
}
int main(){
    cin>>n>>m>>l;
    for(int i=1;i<=n;i++)cin>>c[i]+1;
    solve();
}