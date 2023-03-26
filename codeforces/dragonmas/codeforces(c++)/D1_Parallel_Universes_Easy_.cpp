#include<bits/stdc++.h>
using namespace std;
int m,t,q,i,l,d;
void solve(){
    if(q==1){
        if(i<=d){
            d=min(d+1,m);
            l=min(l+1,m);
        }
        else{
            l=min(l+1,m);
        }
    }
    else{
        if(i<d){
            d=d-i;
            l=l-i;
        }
        else{
            l=i;
        }
    }
    cout<<l<<" "<<d<<endl;
}
int main(){
    cin>>l>>d>>m>>t;
    for(int j=1;j<=t;j++){
        cin>>q>>i;
        solve();
    }
}