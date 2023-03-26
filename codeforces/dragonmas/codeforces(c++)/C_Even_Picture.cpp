#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    int e=5*1e5;
    cout<<n*3+4<<endl;
    cout<<e<<" "<<e<<endl<<e-1<<" "<<e<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout<<e-i-j<<" "<<e-i-1<<endl;
        }
    }
    cout<<e-n<<" "<<e-n-1<<endl<<e-n-1<<" "<<e-n-1;
}
int main(){
    cin>>n;
    solve();
}