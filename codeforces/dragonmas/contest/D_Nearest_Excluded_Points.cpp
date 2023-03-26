// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;
// // ll _T;
// struct point{
//     int x,y;
// }p[N],ans[N];
// map<int,int>mp[N];
// int n,m,x,y,k,a[N];
// int xx[]={0,0,1,-1},yy[]={1,-1,0,0};
// string s,t;
// vector<int>v(N,0);
// set<int>st;
// // map<pair<int,int>,int>mp;
// // pair<int,int>p[N],ans[N];
// queue<int>q;
// void solve(){
//     int nx,ny;
//     for(int i=1;i<=n;i++){
//         x=p[i].x;y=p[i].y;
//         for(int j=0;j<4;j++){
//             nx=x+xx[j];
//             ny=y+yy[j];
//             if(!mp[nx].count(ny)){
//                 q.push(i);
//                 v[i]=1;
//                 ans[i]={nx,ny};
//             }
//         }
//     }
//     while(!q.empty()){
//         k=q.front();q.pop();
//         x=p[k].x;y=p[k].y;
//         for(int i=0;i<4;i++){
//             nx=x+xx[i];ny=y+yy[i];
//             int d=mp[nx][ny];
//             if(!d||v[d])continue;
//             ans[d]=ans[k];
//             v[d]=1;
//             q.push(d);
//         }
//     }
//     for(int i=1;i<=n;i++)cout<<ans[i].x<<" "<<ans[i].y<<endl;
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>x>>y;
//         p[i]={x,y};
//         mp[x][y]=i;
//     }   
//     solve();
// }





#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N];
int xx[4]={0,0,1,-1};
int yy[4]={1,-1,0,0};
pair<int,int>p[N],ans[N];
string s,t;
vector<int>v(N,0);
map<pair<int,int>,int>mp;
queue<int>q;
void solve(){
    int nx,ny;
    for(int i=1;i<=n;i++){
        x=p[i].first;y=p[i].second;
        for(int j=0;j<4;j++){
            nx=x+xx[j];ny=y+yy[j];
            if(!mp[{nx,ny}]){
                q.push(i);
                v[i]=1;
                ans[i]={nx,ny};
            }
        }
    }
    while(!q.empty()){
        k=q.front();q.pop();
        x=p[k].first;y=p[k].second;
        for(int i=0;i<4;i++){
            nx=x+xx[i];ny=y+yy[i];
            int d=mp[{nx,ny}];
            if(!d||v[d])continue;
            ans[d]=ans[k];
            q.push(d);
            v[d]=1;
        }
    }
    for(int i=1;i<=n;i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;
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
    for(int i=1;i<=n;i++){
        cin>>p[i].first>>p[i].second;
        mp[p[i]]=i;
    }   
    solve();
}