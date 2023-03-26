#include<iostream>
#include<algorithm>

using namespace std;
void solve(){
   int n;
   cin>>n;
   string a,b;
   cin>>a>>b;
   int cnt = 0;
   for(int i=0;i<a.length();i++){
      if(a[i]=='1'){
         cnt++;
      }else cnt--;
      if((a[i]==b[i])!=(a[i+1]==b[i+1])&&cnt!=0)
      {
         cout<<"NO\n";
      return;
      }
   }
   cout<<"YES\n";
}
int main(){
   int t;
   cin>>t;
   while(t--){

      solve();
   }
}
