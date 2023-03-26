#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n;
vector<vector<int>>v;
void solve(){
    int a[6]={0},j=0;
    for(int i=1;i<=5;i++){
        if(v[i].size()>=n/2){
            a[j++]=i;
        }
    }
    set<int>s;
    for(int i=0;i<j-1;i++){
        for(int k=i+1;k<j;k++){
            s.clear();
            for(auto d:v[a[i]])s.insert(d);
            for(auto d:v[a[k]])s.insert(d);
            if(s.size()==n){cout<<"YES";return;}
        }
    }
    cout<<"NO";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        v.assign(6,vector<int>());
        for(int i=1;i<=n;i++){
            for(int j=1;j<=5;j++){
                cin>>x;
                if(x)v[j].push_back(i);
            }
        }
        solve();
    }
}