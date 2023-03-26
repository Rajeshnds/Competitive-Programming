#include<bits/stdc++.h>
using namespace std;
int n,a[125],b;
char c[1001];
main(){
cin>>c>>n;
for(int i=97;i<=122;i++)cin>>a[i];
for(int i=0;i<strlen(c);i++){
    for(int j=97;j<=122;j++){
        if(c[i]==j)b+=(a[j]*(i+1));
    }
}
sort(a+97,a+123);
for(int i=strlen(c)+1;i<=strlen(c)+n;i++)b+=(i*a[122]);
cout<<b;
}
