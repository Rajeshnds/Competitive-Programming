#include<bits/stdc++.h>
using namespace std;
int n,m,a[10001];
void read(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++,cout<<endl){
        int l,r,x;
        cin>>l>>r>>x;
        int s=0;
        for(int j=l;j<=r;j++){
            if(a[j]<a[x])s++;
        }
        if(l+s==x)cout<<"Yes";
        else cout<<"No";
    }
}
int main(){
    read();
}
