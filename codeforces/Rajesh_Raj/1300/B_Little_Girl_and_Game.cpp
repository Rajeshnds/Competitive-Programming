#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
        int k=s[i]-'a';
        v[k]++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(v[i]){
            if(v[i]%2==1)count++;
        }
    }
    if(count==0||count%2==1){
        cout<<"First";
    }
    else cout<<"Second";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s;
    solve();
}