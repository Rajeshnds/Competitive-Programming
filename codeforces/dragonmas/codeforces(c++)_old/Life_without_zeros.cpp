#include<bits/stdc++.h>
using namespace std;
int a,b,j=1,c,k,l,m,d;
int main(){
    cin>>a>>b;
    c=a+b;
    while(a>0){d=a%10;if(d!=0)k+=j*d,j*=10;a/=10;}
    j=1;
    while(b>0){d=b%10;if(d!=0)l+=j*d,j*=10;b/=10;}
    j=1;
    while(c>0){d=c%10;if(d!=0)m+=j*d,j*=10;c/=10;}
    cout<<(k+l==m?"YES":"NO");
}
