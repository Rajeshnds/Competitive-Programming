#include<bits/stdc++.h>
using namespace std;
int n,k,a[31],b[31];
main(){
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        if(a[i]==b[j])
        k++;
}
cout<<k;
return 0;
}
