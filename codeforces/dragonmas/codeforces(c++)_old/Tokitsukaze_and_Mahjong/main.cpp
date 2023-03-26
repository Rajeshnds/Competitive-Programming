#include<bits/stdc++.h>
using namespace std;
int a[3];
void read(){
    string s;
    for(int i=0;i<3;i++)cin>>s,a[i]=(s[0]-'0')+(s[1]-'a')*100;
}
void solve(){
    sort(a,a+3);
   int t1=a[2]-a[1],t2=a[1]-a[0];
   if(t1==t2&&(t1==1||t1==0))cout<<0;
   else if(t1<3||t2<3)cout<<1;
   else cout<<2;
}
int main(){
    read();
    solve();
}
