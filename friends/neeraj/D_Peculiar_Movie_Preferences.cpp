#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s[N],t;
vector<ll>v;
set<ll>st;
map<string,int>mp;
void solve(){
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
        int r=0;
        mp.clear();
        for(int i=1;i<=n;i++){
            cin>>s[i];
            t=s[i];
            reverse(t.begin(),t.end());
            if(s[i]==t)r=1;
            else if(mp[t])r=1;
            else if(t.size()==2){
                for(char i='a';i<='z';i++){
                    if(mp[t+i])r=1;
                }
            }
            else if(t.size()==3){
                t.erase(2,1);
                if(mp[t])r=1;
            }
            mp[s[i]]++;
        }
        if(r)cout<<"YES";
        else cout<<"NO";
    }   
}