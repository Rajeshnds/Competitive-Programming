#include<bits/stdc++.h>
using namespace std;
long long a,n,s=1,k;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a&&k)s*=(i-k);
        if(a)k=i;
    }
    cout<<(k?s:0);
}
