#include<bits/stdc++.h>
using namespace std;
int n,k,ans;
vector<int>v[100001];
int f(int i,int p){
    int s=0;
    for(auto j:v[i])if(j!=p)s+=f(j,i);
    ans+=s%2;
    return s+1;
}
void solve(){
    f(1,0);
    cout<<ans-1;
}
int main(){
    int a,b;
    cin>>n;
    if(n&1)return cout<<-1,0;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}