#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,q,k,b[2005],c[2005],l;
pair<int,int>p[100005];
map<int,map<int,int>>a;
// int a[2001][2001];
void solve(){
    for(int i=1;i<=q;i++){
        int x=p[i].first;
        int k=p[i].second;
        if(l&&k>l)k=l;
        cout<<a[k][x]<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    int d;
    // read_file();
    fast;
    for(cin>>t;t--;){
        cin>>n;
        k=0;l=0;
        fill(b,b+n+1,0);
        for(int i=1;i<=n;i++){
            cin>>d;
            a[0][i]=d;
            b[d]++;
        }
        cin>>q;
        for(int i=1;i<=q;i++){
            cin>>p[i].first>>p[i].second;
            k=max(k,p[i].second);
        }
        for(int i=1;i<=k;i++){
            int f=1;
            fill(c,c+2001,0);
            for(int j=1;j<=n;j++){
                a[i][j]=a[i-1][j];
                a[i][j]=b[a[i-1][j]];
                c[a[i][j]]++;
            }
            for(int j=1;j<=n;j++){
                if(a[i][j]!=a[i-1][j]){f=0;break;}
            }
            if(f){l=i;break;}
            for(int j=1;j<=2000;j++)b[j]=c[j];
        }
        solve();
    }
}
