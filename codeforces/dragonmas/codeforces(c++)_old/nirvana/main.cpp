#include<bits/stdc++.h>
using namespace std;
int n;
void read(){
    cin>>n;
}
int multiply(int n){
    if(n<=9)return max(1,n);
    else{
        return max(n%10*multiply(n/10),9*multiply(n/10-1));
    }
}
void solve(){
    cout<<multiply(n);
}
int main(){
    read();
    solve();
}
