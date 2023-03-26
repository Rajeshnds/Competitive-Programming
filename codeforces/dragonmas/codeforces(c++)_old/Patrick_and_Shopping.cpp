#include<bits/stdc++.h>
using namespace std;
long long a[4];
main(){
for(int i=0;i<3;i++)
    cin>>a[i];
sort(a,a+3);
cout<<min(a[0]+a[1]+a[2],2*a[0]+2*a[1]);
return 0;
}
