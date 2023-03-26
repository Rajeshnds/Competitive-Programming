#include<bits/stdc++.h>
using namespace std;
int n;
string a,b,c;
main(){
cin>>n;
while(n--){int k=0;cin>>a>>b>>c;
for(int i=0;i<a.size();i++){if(c[i]==a[i]||c[i]==b[i])k++;}
  cout<<(k==a.size()?"YES\n":"NO\n");
}
}
