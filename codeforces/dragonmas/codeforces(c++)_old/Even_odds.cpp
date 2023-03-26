#include<bits/stdc++.h>
using namespace std;
long long n,k,i;
main(){
cin>>n>>k;
i=(n+1)/2;
cout<<(k<=i?2*k-1:2*(k-i));
}
