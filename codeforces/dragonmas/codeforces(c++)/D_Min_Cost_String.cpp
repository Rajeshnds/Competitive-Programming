#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve(){
    int a=0,b[200001]{0};
    while(n--){
        a%=k;
        cout<<char(a+'a');
        a+=b[a]++;
    }
}
int main(){
    cin>>n>>k;
    solve();
}