#include<bits/stdc++.h>
using namespace std;
long long n,t,j,s,e;
main(){
for(cin>>n;n--;t<0?j++,s+=-t-1:t==0?s++,e=1:s+=t-1)cin>>t;
cout<<s+(j%2==1&&e==0?2:0);
}
