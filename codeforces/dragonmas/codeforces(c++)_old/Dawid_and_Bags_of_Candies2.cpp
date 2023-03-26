#include<bits/stdc++.h>
using namespace std;
int a[4];
main(){
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a,a+4);
cout<<(abs(a[1]+a[2]-a[3])==a[0]?"YES":"NO");
}
