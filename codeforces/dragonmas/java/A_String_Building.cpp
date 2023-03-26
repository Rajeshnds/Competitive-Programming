#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
void solve(){
    n=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            k=0;
            while(i<n&&s[i]=='a')k++,i++;
            i--;
        }
        else if(s[i]=='b'){
            k=0;
            while(i<n&&s[i]=='b')k++,i++;
            i--;
        }
        if(k%3!=0){
            if(k%2!=0){
                int r=0;
                while(k>=3){
                    k-=3;
                    if(k%2==0){
                        r=1;
                        break;
                    }
                }
                if(r==0){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>s;
        solve();
    }
}