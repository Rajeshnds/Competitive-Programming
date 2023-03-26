#include<bits/stdc++.h>
using namespace std;
int n,m;
string s[51];
void solve(){
    int a[n],b[n],c[n],ans=200;
    for(int i=0;i<n;i++){
        cin>>s[i];
        a[i]=50;b[i]=50;c[i]=50;
        for(int j=0;j<m;j++){
            if(s[i][j]>='0'&&s[i][j]<='9')
            a[i]=min(a[i],min(j,m-j));
            else if(s[i][j]>='a'&&s[i][j]<='z')
            b[i]=min(b[i],min(j,m-j));
            else c[i]=min(c[i],min(j,m-j));
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j||j==k||i==k)continue;
                ans=min(ans,a[i]+b[j]+c[k]);
            }
        }
    }
    cout<<ans;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>s[i];
    solve();
}