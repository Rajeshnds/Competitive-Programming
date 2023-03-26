#include<bits/stdc++.h>
using namespace std;
int n,x,y,d;
void read(){
    cin>>n>>x>>y>>d;
}
void solve(){
    int m=INT_MAX;
    if((y-x)%d==0||(y-1)%d==0||(n-y)%d==0){
          if((y-x)%d==0)m=min(m,abs(y-x)/d);
          if((y-1)%d==0)m=min(m,(y-1)/d+(x-1+d-1)/d);
          if((n-y)%d==0)m=min(m,(n-y)/d+(n-x+d-1)/d);
    }
    else m=-1;
    cout<<m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    read();
    solve();
    cout<<endl;
    }

}
