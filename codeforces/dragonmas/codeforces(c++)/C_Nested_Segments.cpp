#include<bits/stdc++.h>
using namespace std;
int n;
pair<pair<int,int>,int>p[300001];
void solve(){
    for(int i=2;i<=n;i++){
        if(p[i].first.second>=p[i-1].first.second){
            cout<<p[i].second<<" "<<p[i-1].second;
            return;
        }
    }
    cout<<-1<<" "<<-1;
}
int main(){
    int a,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        p[i].first={a,-b};
        p[i].second=i;
    }
    sort(p+1,p+n+1);
    solve();
}