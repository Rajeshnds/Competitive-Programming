#include<bits/stdc++.h>
using namespace std;
int n,k,m,a;
main(){
cin>>n;
for(int i=0;i<n;i++){cin>>a;k+=a;m=max(m,a);}
cout<<max(m,((2*k)+n-1)/n);
}
