#include<bits/stdc++.h>
using namespace std;
int n,d[5001];
void solve(){
    for(int i=2;i<=n;i++){
        cout<<"? 1 "<<i<<endl;
        cin>>d[i];
    }
    cout<<"? 2 3"<<endl;
    cin>>d[1];
    int x=(d[2]+d[3]-d[1])/2;
    cout<<"! "<<x;
    for(int i=2;i<=n;i++)cout<<" "<<d[i]-x;
}
int main(){
    cin>>n;
    solve();
}