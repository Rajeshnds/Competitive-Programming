#include<bits/stdc++.h>
using namespace std;
int a[5];
main(){
for(int i=0;i<4;i++)cin>>a[i];
sort(a,a+4);
if(a[0]+a[1]+a[2]==a[3]||a[1]+a[2]==a[0]+a[3])cout<<"YES";
else cout<<"NO";
}
