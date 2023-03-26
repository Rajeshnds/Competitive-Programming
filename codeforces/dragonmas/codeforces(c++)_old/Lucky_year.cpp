#include<bits/stdc++.h>
using namespace std;
int n,a=1,b;
main(){
cin>>n;b=n;
while(n/=10)a*=10;
cout<<a-b%a;
}
