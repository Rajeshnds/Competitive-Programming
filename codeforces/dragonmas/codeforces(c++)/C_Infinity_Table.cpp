#include<bits/stdc++.h>
using namespace std;
int t,k;
void solve(){
    int d=sqrt(k);
    if(k==d*d){
        cout<<d<<" "<<1;
    }
    else{
        int e=d*d;
        d++;
        cout<<min(k-e,d)<<" ";
        if(k-e<=d)cout<<d;
        else{
            cout<<d-(k-e-d);
        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>k;
        solve();
    }
}