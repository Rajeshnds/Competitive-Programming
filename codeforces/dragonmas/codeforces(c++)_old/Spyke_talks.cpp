#include<bits/stdc++.h>
using namespace std;
int n,k=1,j=1,m,l;
set<int> s;
main(){
cin>>n;
int a[n];
for(int i=1;i<=n;i++){cin>>a[i];if(a[i]==0)l++;}
if(l==n){cout<<0;return 0;}
sort(a+1,a+n+1);
for(int i=l+1;i<=n;i++){
        s.insert(a[i]);
    if(s.size()!=j)k++;
    else{
        j++;
        if(k==2)m++,k=1;
        if(k>=3){cout<<-1;return 0;}
    }
}
cout<<(k>=3?-1:k==2?m+1:m);
}
