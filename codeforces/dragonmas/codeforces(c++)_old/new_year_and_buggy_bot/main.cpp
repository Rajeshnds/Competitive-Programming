#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,pm[4]={0,1,2,3},sx[4]={1,0,-1,0},sy[4]={0,1,0,-1};
string t;
char c[101][101];
void read(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>c[i][j];
            if(c[i][j]=='S')a=i,b=j;
        }
    cin>>t;
}
void solve(){
    int k,l,ans=0;
    do{
        k=a;
        l=b;
        for(int i=0;i<t.size();i++){
            k+=sx[pm[t[i]-'0']];
            l+=sy[pm[t[i]-'0']];
            if(k<0||l<0||k>=n||l>=m||c[k][l]=='#')break;
            if(c[k][l]=='E'){ans++;break;}
        }
    }while(next_permutation(pm,pm+4));
    cout<<ans;
}
int main(){
    read();
    solve();
}
