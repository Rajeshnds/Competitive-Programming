#include<bits/stdc++.h>
using namespace std;
int n,m,b[1002],a;
main(){
for(cin>>n>>m;m--;)cin>>a,b[a]++;
cout<<*min_element(b+1,b+n+1);
}
