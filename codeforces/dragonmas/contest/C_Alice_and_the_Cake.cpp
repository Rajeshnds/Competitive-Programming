#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
multiset<ll>set1,set2;
pair<ll,ll>p[N];
void solve(){
    set2.clear();
    set2.insert(k);
    // while(set2.size()<=n){
        for(int i=1;i<=n;i++){
        for(auto j:set2){
            if(!set1.count(j)){
                if(j==1){
                    cout<<"NO";
                    return;
                }
                for(auto p:v){
                    auto it=set2.find(p);
                    set2.erase(it);
                }
                v.clear();
                auto it=set2.find(j);
                set2.erase(it);
                set2.insert(j/2);
                set2.insert((j+1)/2);
                break;
            }
            else{
                auto it=set1.find(j);
                set1.erase(it);
                v.push_back(j);
            }
        }
    }
    if(set1.size()){
        cout<<"NO";
    }
    else cout<<"YES";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        k=0;
        set1.clear();
        for(int i=1;i<=n;i++){
            cin>>a[i];
            k+=a[i];
            set1.insert(a[i]);
        }
        solve();
    }
}