#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[300001],b[300005];
char c[300001];
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        fill(b,b+n+2,-1);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>c[i];
        for(int i=1;i<=n;i++){
            if(c[i]=='R'&&b[i]==-1){
                for(int j=i+1;j<=n;j++){
                    if(c[j]=='L'&&(a[j]-a[i])%2==0&&b[j]==-1){
                        b[i]=abs(a[j]-a[i])/2;
                        b[j]=abs(a[j]-a[i])/2;
                        break;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(c[i]=='R'&&b[i]==-1){
                for(int j=n;j>i;j--){
                    if(c[j]=='R'&&(a[j]-a[i])%2==0&&b[j]==-1){
                        b[i]=abs(a[j]-a[i])/2+(m-a[j]);
                        b[j]=(a[j]-a[i])/2+(m-a[j]);
                        break;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(c[i]=='L'&&b[i]==-1){
                for(int j=i+1;j<=n;j++){
                    if(c[j]=='L'&&(a[j]-a[i])%2==0&&b[j]==-1){
                        b[i]=abs(a[j]-a[i])/2+a[i];
                        b[j]=abs(a[j]-a[i])/2+a[i];
                        break;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(c[i]=='L'&&b[i]==-1){
                for(int j=n;j>i;j--){
                    if(c[j]=='R'&&(a[j]-a[i])%2==0&&b[j]==-1){
                        b[i]=abs(a[j]-a[i])/2+a[i]+m-a[j];
                        b[j]=abs(a[j]-a[i])/2+a[i]+m-a[j];
                        break;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++)cout<<b[i]<<" ";
    }
}
