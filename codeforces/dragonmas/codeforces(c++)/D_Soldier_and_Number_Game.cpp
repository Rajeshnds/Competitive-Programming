#include<bits/stdc++.h>
using namespace std;
const int N=5e6;
int t,a,b,c[N+1],d[N+1];
void solve(){
    printf("%d\n",d[a]-d[b]);
}
int main(){
    for(int i=2;i<=N;i++){
        if(c[i]==0){
            for(int j=i;j<=N;j+=i){
                c[j]=i;
            }
        }
    }
    for(int i=2;i<=N;i++)c[i]=c[i/c[i]]+1,d[i]=d[i-1]+c[i];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        solve();
    }
}