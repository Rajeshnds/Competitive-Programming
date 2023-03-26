#include<bits/stdc++.h>
using namespace std;
int n,a,b[101];
void read(){
    cin>>n>>a;
    for(int i=0;i<n-1;i++)cin>>b[i];
}
void solve(){
    int m=0;
   sort(b,b+n-1);
   while(a<=b[n-2]){
       a++;
       b[n-2]--;
       m++;
       sort(b,b+n-1);
   }
   cout<<m;
}
int main(){
    read();
    solve();
}
