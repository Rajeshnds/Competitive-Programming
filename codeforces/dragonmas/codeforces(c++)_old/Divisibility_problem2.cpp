#include<bits/stdc++.h>
using namespace std;
int n,a,b;
main(){
for(cin>>n;n--;)cin>>a>>b,cout<<(b-(a%b))%b<<endl;
return 0;
}
