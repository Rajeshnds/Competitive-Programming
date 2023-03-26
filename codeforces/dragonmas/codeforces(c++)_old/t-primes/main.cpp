#include<bits/stdc++.h>
using namespace std;
long long n,a,b,f;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        f=1;
        scanf("%lld",&a);
        b=sqrt(a);
        for(int j=2;j*j<=b;j++)if(b%j==0)f=0;
        printf((f&&b*b==a&&a>1?"YES\n":"NO\n"));
    }
}
