#include<bits/stdc++.h>
using namespace std;
int n,a[301];
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
}
void solve(){
   for(int i=0;i<a[0];i++)cout<<"PRL";
   for(int i=1;i<n;i++){
       cout<<"R";
       for(int j=0;j<a[i];j++){
           cout<<"PLR";
       }
   }
}
int main(){
    read();
    solve();
}
