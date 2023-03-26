#include<bits/stdc++.h>
using namespace std;
int n,f,t,k,m=INT_MIN;
main(){
cin>>n>>k;
while(n--)cin>>f>>t,m=max(m,t>k?f+k-t:f);
cout<<m;
}
