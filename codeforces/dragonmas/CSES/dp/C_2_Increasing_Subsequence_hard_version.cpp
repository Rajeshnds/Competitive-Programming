#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2,v3;
vector<vector<ll>>v,dp;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    ll prev=0;
    int i=0,j=n-1;
    while(i<=j){
        ll max_cur=max(v1[i],v1[j]);
        ll min_cur=min(v1[i],v1[j]);
        if(max_cur<=prev){
            break;
        }
        else if(min_cur==max_cur){
            if(i==j){
                s+='R';
                break;
            }
            ll l=prev;
            while(v1[i]>l){
                t+='L';
                l=v1[i];
                i++;
            }
            string u="";
            l=prev;
            while(v1[j]>l){
                u+='R';
                l=v1[j];
                j--;
            }
            if(t.size()>u.size())s+=t;
            else s+=u;
            break;
        }
        else if(min_cur>prev){
            if(min_cur==v1[i])s+='L',i++;
            else s+='R',j--;
            prev=min_cur;
        }
        else if(max_cur>prev){
            if(max_cur==v1[i])s+='L',i++;
            else s+='R',j--;
            prev=max_cur;
        }
    }   
    cout<<s.size()<<endl;
    cout<<s;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    v1.assign(n,0);
    for(auto &i:v1)cin>>i;
    solve();
}