#include<bits/stdc++.h>
using namespace std;
int q,a;
void solve(){
    int i=1,k=0;
    if(!(a&(a+1))){
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                cout<<a/i;
                return;
            }
        }
        cout<<1;
    }
    else{
        while(k<a)k+=i,i*=2;
        cout<<k;
    }
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>a;
        solve();
    }
}