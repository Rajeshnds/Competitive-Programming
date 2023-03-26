#include<bits/stdc++.h>
using namespace std;
int n,a,b,k,l;
main(){
for(cin>>n;n--;){cin>>a>>b;if(a<0)k++;else l++;}
cout<<(k<=1||l<=1?"YES":"NO");
}
