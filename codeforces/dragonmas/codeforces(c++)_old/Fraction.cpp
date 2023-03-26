#include<bits/stdc++.h>
using namespace std;
int n,k;
main(){
cin>>n;
n%2==0?k=n/2-1:k=n/2;
n%2==0&&k%2==0?k--:k=k;
cout<<k<<" "<<n-k;
}
