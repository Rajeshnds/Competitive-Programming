#include<bits/stdc++.h>
using namespace std;
long long n,i;
int main(){
    cin>>n;
    for(i=2;i*i<=n;i++){
        while(n%(i*i)==0)n/=i;
    }
    cout<<n;
}
