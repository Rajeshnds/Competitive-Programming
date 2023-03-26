#include<bits/stdc++.h>
using namespace std;
int n,m,a;
main(){
cin>>n>>m;
int b[n+1]={0};
while(m--)cin>>a,b[a]++;
sort(b+1,b+n+1);
cout<<b[1];
}
