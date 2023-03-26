#include<bits/stdc++.h>
using namespace std;
double x,y,z,a,b,c;
int p[7];
void solve(){
    int ans=0;
    ans+=p[1]*(y<0)+p[2]*(y>b)+p[3]*(z<0)+p[4]*(z>c)+
    p[5]*(x<0)+p[6]*(x>a);
    cout<<ans;
}
int main(){
    cin>>x>>y>>z>>a>>b>>c;
    for(int i=1;i<=6;i++)cin>>p[i];
    solve();
}