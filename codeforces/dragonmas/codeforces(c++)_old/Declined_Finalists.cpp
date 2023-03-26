#include<bits/stdc++.h>
using namespace std;
int n,a,b;
main(){
cin>>n>>a;n--;
while(n--)cin>>b,a=max(a,b);
cout<<(a-25>0?a-25:0);
}
