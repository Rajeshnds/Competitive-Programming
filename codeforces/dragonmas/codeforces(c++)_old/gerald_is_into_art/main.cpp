#include<bits/stdc++.h>
using namespace std;
int a1,b1,a2,b2,a3,b3;
void read(){
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
}
int fit(int x,int y){
    return (b2+b3<=x&&max(a2,a3)<=y)||
            (a2+a3<=x&&max(b2,b3)<=y)||
            (a2+b3<=x&&max(b2,a3)<=y)||
            (b2+a3<=x&&max(a2,b3)<=y);
}
void solve(){
    cout<<(fit(a1,b1)||fit(b1,a1)?"YES":"NO");
}
int main(){
    read();
    solve();
}
