#include<bits/stdc++.h>
using namespace std;
int n,s1,s2,k;
main(){
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i],s2+=a[i];
if(s2%2==1){cout<<0;return 0;}
else{
    for(int i=0;i<n-1;i++){
        s1+=a[i];
        if(s2-s1==s1)k++;
    }
}
cout<<k;
}
