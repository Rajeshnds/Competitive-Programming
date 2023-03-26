#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int size=s.size();
    int unit_digit=s[size-1]-'0';
    int index=-1;
    for(int i=size-1;i>=0;i--){
        int digit=s[i]-'0';
        if(digit%2==0){
            if(index==-1)index=i;
            else{
                if(digit<unit_digit)index=i;
            }
        }
    }
    if(index==-1){
        cout<<-1;
    }
    else{
        char c=s[index];
        s[index]=s[size-1];
        s[size-1]=c;
        cout<<s;
    }
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