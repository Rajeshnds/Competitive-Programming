#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v1,v2,v3;
long long s,m;
void solve(){
    m=0,s=0;
    for(int i=1;i<=n;i++){
        v2=v1;
        s=v2[i];
        for(int j=i+1;j<=n;j++){
            v2[j]=min(v2[j],v2[j-1]);
            s+=v2[j];
        }
        for(int j=i-1;j>=1;j--){
            v2[j]=min(v2[j],v2[j+1]);
            s+=v2[j];
        }
        if(s>m){
            m=s;
            v3=v2;
        }
    }
    for(int i=1;i<=n;i++)cout<<v3[i]<<" ";
}
int main(){
    cin>>n;
    v1.resize(n+1);
    for(int i=1;i<=n;i++)cin>>v1[i];
    solve();
}