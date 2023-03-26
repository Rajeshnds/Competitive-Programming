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
    if(n&1){
        cout<<":(";
        return;
    }
    bool temp=true;
    if(s[0]==')'||s[n-1]=='('){
        temp=false;
    }
    int l=0;
    vector<int>v;
    t=string(n,'_');
    t[0]='(';
    t[n-1]=')';
    int j=0;
    for(int i=1;i<n-1;i++){
        if(s[i]=='(')k++,t[i]='(';
        else if(s[i]==')')k--,t[i]=')';
        else{
            l++;
            v.push_back(i);
        }
        if(k<0){
            if(l){
                l--;
                k++;
                t[v[j]]='(';
                j++;
            }
            else{
                temp=false;
            }
        }
    }
    if(k<0){
        temp=false;
    }
    while(k&&v.size()>0){
        int e=v.back();
        v.pop_back();
        t[e]=')';
        k--;
    }
    if(k)temp=false;
    for(int i=j;i<v.size();i++){
        t[v[i]]='(';
        k=v.back();
        t[k]=')';
        v.pop_back();
    }
    k=0;
    for(int i=0;i<n;i++){
        if(t[i]=='(')k++;
        else k--;
        if(k<0)temp=false;
        if(i!=n-1&&k==0)temp=false;
    }
    if(temp)cout<<t;
    else cout<<":(";
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
    cin>>n>>s;
    solve();
}