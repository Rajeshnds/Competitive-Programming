#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
cout<<n/7*2+(n%7==6)<<" "<<(n+5)/7*2+(n%7==1);
}
