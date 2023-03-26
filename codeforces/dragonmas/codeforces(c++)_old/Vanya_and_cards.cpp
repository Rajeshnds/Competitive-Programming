#include<bits/stdc++.h>
using namespace std;
int n,x,a,b;
main(){
cin>>n>>x;
while(n--)cin>>a,b+=a;cout<<(abs(b)+x-1)/x;
}
