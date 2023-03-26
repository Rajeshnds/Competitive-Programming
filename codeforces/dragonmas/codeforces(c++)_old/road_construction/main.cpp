#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,a[1001];
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        a[x]=1;
        a[y]=1;
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            for(int j=1;j<=n;j++){
                if(i!=j)cout<<i<<" "<<j<<endl;
            }
            break;
        }
    }
}
