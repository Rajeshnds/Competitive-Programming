#include<bits/stdc++.h>
using namespace std;
int n,m;
void read(){
    int ans=0,b[1001]={0},d[1001]={0},r=0,c=0,a=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        r=0;c=0;
        for(int j=1;j<=m;j++){
            cin>>a;
            if(a==1){
                ans+=c;
                c=0;
                r=1;
                b[j]=1;
                ans+=d[j];
                d[j]=0;
            }
            if(a==0){
                c++;
                if(r==1)ans++;
                if(b[j]==1)ans++;
                d[j]++;
            }
        }
    }
    cout<<ans;
}
int main(){
    read();
}











































