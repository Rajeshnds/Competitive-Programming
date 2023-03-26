#include<bits/stdc++.h>
using namespace std;
int r,c;
void solve(){
    cin>>r>>c;
    for(int i=1;i<=r;i++,cout<<endl){
        for(int j=1;j<=c;j++){
            cout<<i*(r+j)<<" ";
        }
    }
}
int main(){
    cin>>r>>c;
    if(r==1||c==1){
        if(r==1&&c==1)cout<<0;
        else if(r==1){
            for(int i=2;i<=c+1;i++){
                cout<<i<<" ";
            }
        }
        else if(c==1){
            for(int i=2;i<=r+1;i++){
                cout<<i<<endl;
            }
        }
        return 0;
    }
    solve();
}