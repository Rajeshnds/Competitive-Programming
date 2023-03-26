#include<bits/stdc++.h>
using namespace std;
int n,m,s[2001];
char c[2001][2001];
void read(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>c[i][j];
            s[j]+=(c[i][j]=='1');
        }
}
string solve(){
   int f=1;
   for(int i=0;i<n;i++){
       f=1;
       for(int j=0;j<m;j++){
           if(s[j]==1&&c[i][j]=='1')f=0;
       }
       if(f) return "YES";
   }
   return "NO";
}
int main(){
    read();
    cout<<solve();
}
