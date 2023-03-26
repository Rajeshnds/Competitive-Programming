#include<bits/stdc++.h>
using namespace std;
int n,a,k,l,t;
main(){
for(cin>>n,t=n;n--;)cin>>a,a>0?k++:a<0?l++:0;
cout<<(2*k>=t?1:2*l>=t?-1:0);
}
