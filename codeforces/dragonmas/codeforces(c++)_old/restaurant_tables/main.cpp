#include<bits/stdc++.h>
using namespace std;
int n,a,b,l;
void read(){
    int d=0,k=0;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==1&&a)a--;
        else if(k==1&&b)b--,d++;
        else if(k==1&&d)d--;
        else if(k==2&&b)b--;
        else l+=k;
    }
}
void solve(){
    cout<<l;
}
int main(){
    read();
    solve();
}
