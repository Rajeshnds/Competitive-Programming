#include<bits/stdc++.h>
using namespace std;
int n,i,j,a,s,k,p[2200],q[2200];
main(){
cin>>n;
while(n--)cin>>a,a&1?p[j++]=a:q[k++]=a;
sort(p,p+j);sort(q,q+k);
if(k>j)swap(p,q),swap(j,k);
for(int i=0;i<j-k-1;i++)s+=p[i];
cout<<s;
}

