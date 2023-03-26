#include<bits/stdc++.h>
using namespace std;
int n,m,a[101],l;
main(){
cin>>n>>m;
for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
for(int i=n-1;i>=0;i--){l+=a[i];if(l>=m){cout<<n-i;return 0;}}
}
