#include<bits/stdc++.h>
using namespace std;
int n,a,k,t;
main(){
cin>>n;t=n;
while(n--)cin>>a,k+=a;
while(t--)cin>>a,k-=a;
cout<<(k>=0?"YES":"NO");
}
