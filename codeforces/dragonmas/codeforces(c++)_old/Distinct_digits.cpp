#include<bits/stdc++.h>
using namespace std;
int l,r,a,k;
set<int> s;
main(){
cin>>l>>r;
for(int i=l;i<=r;i++){
    a=i;k=0;
 while(a>0){
    s.insert(a%10);
    a=a/10;
    k++;
 }
 if(k==s.size()){cout<<i;return 0;}
 s.clear();
}
cout<<-1;
}
