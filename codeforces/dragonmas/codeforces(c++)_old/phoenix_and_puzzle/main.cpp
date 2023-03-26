#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        int a=sqrt(n/2);
        int b=sqrt(n/4);
        cout<<(a*a*2==n||b*b*4==n?"YES":"NO");
    }
}
