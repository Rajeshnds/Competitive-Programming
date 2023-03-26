#include<bits/stdc++.h>
using namespace std;
int n,k;
map<int,int>m;
priority_queue<pair<int,int>>q;
void solve(){
    for(int i=1;i<200001;i++){
        if(m[i]){
            for(int j=1;j<=m[i];j++){
                q.push({m[i]/j,i});
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<q.top().second<<" ";
        q.pop();
    }
}
int main(){
    int a;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a;
        m[a]++;
    }
    
    solve();
}