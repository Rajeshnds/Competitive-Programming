#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    for(int i=2;i<=n;i++)cout<<1<<" "<<i<<endl;
}
int main(){
    cin>>n;
    if(n<6)cout<<-1<<endl;
    else{
        for(int i=2;i<=4;i++)cout<<1<<" "<<i<<endl;
        for(int i=5;i<=n;i++)cout<<2<<" "<<i<<endl;
    }
    solve();
}