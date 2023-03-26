#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000001],b[1000001];
void solve(){
    int a=sqrt(n);
    printf("%d\n",b[n]-b[a]+1);
}
int main(){
    for(int i=2;i<=1000000;i++){
        if(a[i]==0){
            for(int j=i+i;j<=1000000;j+=i){
                a[j]=1;
            }
        }
        b[i]=b[i-1]+1-a[i];
    }
    for(scanf("%d",&t);t--;){
        scanf("%d",&n);
        solve();
    }
}