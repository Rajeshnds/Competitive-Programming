#include<bits/stdc++.h>
using namespace std;
int n,s;
vector<pair<int,int>>v;
queue<int>q;
void solve(){
    cout<<s/2<<endl;
    while(!q.empty()){
        int a=q.front();
        q.pop();
        if(v[a].first==1){
            int b=v[a].second;
            cout<<a<<" "<<b<<endl;
            v[b].first--;
            if(v[b].first==1)q.push(b);
            v[b].second^=a;
        }
    }
}
int main(){
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
        if(a==1)q.push(i);
        s+=a;
    }
    solve();
}