#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void calc(int n,int a,int b,int c,int d){
    int e=0,r;
    while(true){
        r=1;
        x=n-e;
        y=e;
        k=(x*a)+(y*b);
        string s=to_string(k);
        for(int i=0;i<s.size();i++){
            if(s[i]!=c+'0'&&s[i]!=d+'0'){
                r=0;
            }
        }
        if(r){
            if(x<y)swap(x,y);
            x++;
            sum=1;
            for(int j=1,i=x;i>x-y;i--,j++){
                sum=(sum*i)/j;
            }
            ans=(ans+sum)%mod;
        }
        e++;
        if(e>n){
            break;
        }
    }
}
void solve(int n,int a,int b,int c,int d){
    calc(n,a,b,c,d);
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if(c>d)swap(c,d);
    if(a>b)swap(a,b);
    solve(n,a,b,c,d);
}