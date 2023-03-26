#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=300+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
double dp[N][N][N];
string s,t;
vector<ll>v,cnt;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    // dp[x][y][z]=answer for x 3s, y 2s, z 1s, n-x-y-z 0s;

    // dp[0][0][0]=0;
    
    // dp[x][y][z]=1+p3*dp[x][y+1][z-1]+p2*dp[x+1][y-1][z]+p1*dp[x-1][y][z]+p0*dp[x][y][z];

    // dp[x][y][z]*(1-p0)=1+p3*dp[x][y+1][z-1]+p2*dp[x+1][y-1][z]+p1*dp[x-1][y][z]

    // dp[x][y][z]=(1+p3*dp[x][y+1][z-1]+p2*dp[x+1][y-1][z]+p1*dp[x-1][y][z])/(1-p0);
    dp[0][0][0]=0;
    for(int three=0;three<=n;three++){
        for(int two=0;two<=n;two++){
            for(int one=0;one<=n;one++){
                int zero=n-three-two-one;
                if(zero==n)continue;
                if(one+two+three>n)continue;
                double val=1;
                // pick 3;
                if(three>0)val+=(1.0*three/n)*dp[three-1][two+1][one];
                // pick 2;
                if(two>0)val+=(1.0*two/n)*dp[three][two-1][one+1];
                // pick 1;
                if(one>0)val+=(1.0*one/n)*dp[three][two][one-1];
                dp[three][two][one]=val/(1-1.0*zero/n);
            }
        }
    }
    cout<<setprecision(10)<<fixed<<dp[cnt[3]][cnt[2]][cnt[1]];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    cnt.resize(4,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    solve();
}