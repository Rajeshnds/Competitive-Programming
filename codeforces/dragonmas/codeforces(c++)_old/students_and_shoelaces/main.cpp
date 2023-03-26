#include<bits/stdc++.h>
using namespace std;
int n,m,a[101],b[101][101];
void read(){
    int c,d;
    cin>>n>>m;
    for(int i=0;i<m;i++)cin>>c>>d,a[c]++,a[d]++,b[c][d]=1,b[d][c]=1;
}
void solve(){
    int k=0,c;
    do{
        int e[101]={0};
        c=0;
        for(int i=1;i<=n;i++)if(a[i]==1)a[i]--,e[c++]=i;
        for(int i=0;i<c;i++)
            for(int j=1;j<=n;j++)
                if(b[e[i]][j])a[j]--;
        k++;
    }while(c>0);
    cout<<k-1;
}
int main(){
    read();
    solve();
}



