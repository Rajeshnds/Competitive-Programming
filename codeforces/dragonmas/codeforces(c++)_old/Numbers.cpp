#include<bits/stdc++.h>
using namespace std;
int a,s,c,k;
main(){
    cin>>a;
    for(int i=2;i<a;i++){
        k=a;
        while(k)s+=k%i,k/=i;
    }
    c=__gcd(s,a-2);
    cout<<s/c<<'/'<<(a-2)/c;
}
