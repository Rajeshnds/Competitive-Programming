#include<bits/stdc++.h>
using namespace std;
int n,a,b;
void read(){
    cin>>n>>a>>b;
}
void solve(){
   int k=0;
   a--;b--;
   while(a!=b){
       a/=2;b/=2;n/=2;
       k++;
   }
   if(n==1)cout<<"Final!";
   else cout<<k;
}
int main(){
    read();
    solve();
}
