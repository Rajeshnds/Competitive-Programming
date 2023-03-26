#include<bits/stdc++.h>
using namespace std;
int n,m,N=100;
vector<int>v(101);
void read(){
    int a;
   cin>>n>>m;
   for(int i=0;i<m;i++)cin>>a,v[a]++;
}
int solve(){
   for(int i=N;i>=1;i--){
       vector<int>vv(v);
       int k=0;
       for(int j=1;j<=N;j++){
           while(vv[j]>=i){
               k++;
               vv[j]-=i;
           }
           if(k>=n)return i;
       }
   }
   return 0;
}
int main(){
   read();
   cout<<solve();
}
