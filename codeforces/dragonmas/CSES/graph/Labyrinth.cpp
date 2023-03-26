#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
string s[1001],t;
int sx,sy;
// char grid[1001][1001];
char dir[1001][1001];
bool vis[1001][1001];
vector<char>path;
vector<pair<int,pair<int,char>>>moves={{0,{1,'R'}},{0,{-1,'L'}},{1,{0,'D'}},{-1,{0,'U'}}};
vector<pair<char,pair<int,int>>>move_back={{'L',{0,1}},{'R',{0,-1}},{'U',{1,0}},{'D',{-1,0}}};
bool is_valid(int i,int j){
    return (i<n&&i>=0&&j<m&&j>=0&&!vis[i][j]);
}
bool bfs(){
    queue<pair<int,int>>q;
    q.push({sx,sy});
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();
        if(s[x][y]=='B'){
            while(true){
                path.push_back(dir[x][y]);
                for(auto mb:move_back){
                    if(path.back()==mb.first){
                        x=x+mb.second.first;
                        y=y+mb.second.second;
                    }
                }
                if(x==sx&&y==sy){
                    return true;
                }
            }
        }
        for(auto mv:moves){
            int x1=x+mv.first;
            int y1=y+mv.second.first;
            if(is_valid(x1,y1)){
                vis[x1][y1]=true;
                q.push({x1,y1});
                dir[x1][y1]=mv.second.second;
            }
        }
    }
    return false;
}
void solve(){
    if(bfs()){
        cout<<"YES"<<endl<<path.size()<<endl;
        while(path.size()>0){
            cout<<path.back();
            path.pop_back();
        }
    }
    else{
        cout<<"NO";
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
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<m;j++){
            if(s[i][j]=='A'){
                sx=i;sy=j;
                vis[i][j]=true;
            }
            if(s[i][j]=='#'){
                vis[i][j]=true;
            }
        }
    }
    solve();
}

// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,sum,a[N],b[N],r=mod;
// vector<vector<ll>>v;
// string s[1001],t,ans="";
// bool vis[1001][1001];
// int sx,sy;
// vector<pair<int,int>>moves={{0,1},{1,0},{0,-1},{-1,0}};
// map<pair<int,int>,char>dir;
// // char dir[4][4];
// bool is_valid(int i,int j){
//     return (i>=0&&i<n&&j>=0&&j<m&&!vis[i][j]);
// }
// void solve(){
//     dir[{0,1}]='R';dir[{1,0}]='D';dir[{0,-1}]='L';dir[{-1,0}]='U';
//     queue<pair<int,int>>q;
//     map<pair<int,int>,char>path;
//     // char path[1001][1001];
//     q.push({sx,sy});
//     while(!q.empty()){
//         int x=q.front().first,y=q.front().second;
//         q.pop();
//         if(s[x][y]=='B'){
//             int j=0;t="";
//             while(true){
//                 t+=path[{x,y}];
//                 if(t[j]=='L')y++;
//                 if(t[j]=='R')y--;
//                 if(t[j]=='U')x++;
//                 if(t[j]=='D')x--;

//                 if(x==sx&&y==sy)break;
//                 j++;
//             }
//             if((int)t.size()<r){
//                 r=t.size();
//                 ans=t;
//             }
//             break;
//         }
//         for(auto mv:moves){
//             int x1=x+mv.first;int y1=y+mv.second;
//             if(is_valid(x1,y1)){
//                 vis[x1][y1]=true;
//                 q.push({x1,y1});
//                 path[{x1,y1}]=dir[{mv.first,mv.second}];
//             }
//         }
//     }
//     if(ans.size()!=0){
//         reverse(ans.begin(),ans.end());
//         cout<<"YES"<<endl<<ans.size()<<endl<<ans;
//     }
//     else{
//         cout<<"NO";
//     }
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n>>m;
//     for(int i=0;i<n;i++){
//         cin>>s[i];
//         for(int j=0;j<m;j++){
//             if(s[i][j]=='A')sx=i,sy=j,vis[i][j]=true;
//             if(s[i][j]=='#')vis[i][j]=true;
//         }
//     }
//     solve();
// }

