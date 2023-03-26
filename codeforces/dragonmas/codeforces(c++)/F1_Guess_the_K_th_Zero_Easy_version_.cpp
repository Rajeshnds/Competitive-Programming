#include<bits/stdc++.h>
using namespace std;
int n,t,k;
void solve(){
    int l=1,r=n,m,s;
    while(r>l){
        m=(l+r)/2;
        cout<<"? "<<1<<" "<<m<<endl;
        cin>>s;
        if(m-k>=s)r=m;
        else l=m+1;
    }
    cout<<"! "<<r;
}
int main(){
    cin>>n>>t>>k;
    solve();
}