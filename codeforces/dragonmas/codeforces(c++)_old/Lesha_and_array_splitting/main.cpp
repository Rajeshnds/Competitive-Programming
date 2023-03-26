#include<bits/stdc++.h>
using namespace std;
int n,a[101],s;
void read(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
}
void solve(){
    int k=0;
    if(s!=0){
        cout<<"YES"<<endl<<1<<endl<<1<<" "<<n;
    }
    else{
        for(int i=0;i<n;i++){
            k+=a[i];
            if(k!=0){
                cout<<"YES"<<endl<<2<<endl<<1<<" "<<i+1
                   <<endl<<i+2<<" "<<n;
                break;
            }
        }
        if(k==0)cout<<"NO";
    }
}
int main(){
    read();
    solve();
}
