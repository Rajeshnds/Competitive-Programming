#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1000+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s[N],t;
int sx,sy;
vector<pair<int,int>>monster,halt;
vector<vector<int>>mdis,adis;
char path[1001][1001];
// vector<pair<int,int>>dis;
void solve(){
    mdis.assign(n+1,vector<int>(m+1,mod));
    adis.assign(n+1,vector<int>(m+1,mod));
    queue<pair<int,int>>q;
    vector<vector<int>>vis(n+1,vector<int>(m+1,0));
    for(auto mons:monster){
        q.push({mons.first,mons.second});
        vis[mons.first][mons.second]=1;
        mdis[mons.first][mons.second]=0;
    }
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();
        if(x+1<n&&s[x+1][y]=='.'&&!vis[x+1][y]&&mdis[x+1][y]>mdis[x][y]+1){
            q.push({x+1,y});
            mdis[x+1][y]=mdis[x][y]+1;
            vis[x+1][y]=1;
        }
        if(x-1>=0&&s[x-1][y]=='.'&&!vis[x-1][y]&&mdis[x-1][y]>mdis[x][y]+1){
            q.push({x-1,y});
            mdis[x-1][y]=mdis[x][y]+1;
            vis[x-1][y]=1;
        }
        if(y+1<m&&s[x][y+1]=='.'&&!vis[x][y+1]&&mdis[x][y+1]>mdis[x][y]+1){
            q.push({x,y+1});
            mdis[x][y+1]=mdis[x][y]+1;
            vis[x][y+1]=1;
        }
        if(y-1>=0&&s[x][y-1]=='.'&&!vis[x][y-1]&&mdis[x][y-1]>mdis[x][y]+1){
            q.push({x,y-1});
            mdis[x][y-1]=mdis[x][y]+1;
            vis[x][y-1]=1;
        }
    }
    while(!q.empty())q.pop();
    q.push({sx,sy});
    vis.assign(n+1,vector<int>(m+1,0));
    adis[sx][sy]=0;
    vis[sx][sy]=1;
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();
        if(x+1<n&&s[x+1][y]=='.'&&!vis[x+1][y]){
            vis[x+1][y]=1;
            path[x+1][y]='D';
            adis[x+1][y]=adis[x][y]+1;
            q.push({x+1,y});
        }
        if(x-1>=0&&s[x-1][y]=='.'&&!vis[x-1][y]){
            vis[x-1][y]=1;
            path[x-1][y]='U';
            adis[x-1][y]=adis[x][y]+1;
            q.push({x-1,y});
        }
        if(y+1<m&&s[x][y+1]=='.'&&!vis[x][y+1]){
            vis[x][y+1]=1;
            path[x][y+1]='R';
            adis[x][y+1]=adis[x][y]+1;
            q.push({x,y+1});
        }
        if(y-1>=0&&s[x][y-1]=='.'&&!vis[x][y-1]){
            vis[x][y-1]=1;
            path[x][y-1]='L';
            adis[x][y-1]=adis[x][y]+1;
            q.push({x,y-1});
        }
    }
    for(auto h:halt){
        int x=h.first,y=h.second;
        if(adis[x][y]<mdis[x][y]){
            if(adis[x][y]==0){
                cout<<"YES"<<endl<<0;
                return;
            }
            vector<char>v;
            while(true){
                v.push_back(path[x][y]);
                if(v.back()=='R')y--;
                if(v.back()=='L')y++;
                if(v.back()=='D')x--;
                if(v.back()=='U')x++;
                if(x==sx&&y==sy){
                    break;
                }
            }
            cout<<"YES"<<endl<<v.size()<<endl;
            while(v.size()>0)cout<<v.back(),v.pop_back();
            return;
        }
    }
    cout<<"NO";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<m;j++){
            if(s[i][j]=='A')sx=i,sy=j;
            else if(s[i][j]=='M')monster.push_back({i,j});
            if(i==0||i==n-1||j==0||j==m-1){
                if(s[i][j]=='.'||s[i][j]=='A')halt.push_back({i,j});
            }
        }
    } 
    solve();
}