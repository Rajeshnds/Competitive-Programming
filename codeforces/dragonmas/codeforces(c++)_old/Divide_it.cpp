#include<bits/stdc++.h>
using namespace std;
long long n,a,i;
main(){
for(cin>>n;n--;){
        cin>>a;
for(i=0;a>1&&i<73;i++)
       a%2==0?a/=2:a%3==0?a=2*a/3:a%5==0?a=4*a/5:0;
       cout<<(a>1?-1:i)<<endl;
}
}
