#include<bits/stdc++.h>
using namespace std;
int n,a,b;
void read(){
    cin>>n>>a>>b;
}
int solve(){
   for(int i=100;;i--){
       if(a>=i&&b>=i&&a/i+b/i>=n)return i;
   }
}
int main(){
    read();
    cout<<solve();
}
