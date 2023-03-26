#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[11][101],b[11][101],c[11][101],ans;
string s;
void max_profit(int g,int h){
    int v[101]={0},sum=0;
    int d=k;
    while(d){
        int mx=0,e=0,flag=0;
        for(int i=1;i<=m;i++){
            if(v[i]==0){
                if(b[h][i]-a[g][i]>mx){
                    mx=b[h][i]-a[g][i];
                    e=i;
                    flag=1;
                }
            }
        }
        if(flag==0)break;
        int f=min(d,c[g][e]);
        sum+=f*mx;
        d-=f;
        v[e]=1;
    }
    ans=max(ans,sum);
}
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=1;j<=m;j++){
            cin>>a[i][j]>>b[i][j]>>c[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            max_profit(i,j);
        }
    }
    cout<<ans;
}
