#include<bits/stdc++.h>
using namespace std;
long long n,m=INT_MAX,s,a;
main(){
for(cin>>n;n--;){
    cin>>a;s+=a;
    if(a<m&&a%2==1)m=a;
}
cout<<(s%2==0?s:s-m);
}

