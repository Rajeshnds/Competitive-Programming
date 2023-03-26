#include<bits/stdc++.h>
using namespace std;
int p,n,a;
set<int> s;
main(){
cin>>p>>n;
for(int i=1;i<=n;i++){
   cin>>a;
   s.insert(a%p);
   if(s.size()!=i){cout<<i;return 0;}
}
cout<<-1;
}
