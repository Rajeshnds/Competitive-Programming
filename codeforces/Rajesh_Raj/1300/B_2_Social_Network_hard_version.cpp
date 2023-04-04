#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,k;
vector<int>v;
vector<vector<int>>adj;
string s;
void solve(){
    int temp=0;
    queue<int>q;
    set<int>s;
    for(int i=0;i<n;i++){
        if(s.count(v[i]))continue;
        else{
            if(s.size()<k){
                s.insert(v[i]);
                q.push(v[i]);
            }
            else{
                int temp=q.front();
                s.erase(temp);
                q.pop();
                s.insert(v[i]);
                q.push(v[i]);
            }
        }
    }
    cout<<q.size()<<endl;
    vector<int>v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
    // for(auto i=q.back();i!=q.front();i++)cout<<i<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    v.assign(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    solve();
}