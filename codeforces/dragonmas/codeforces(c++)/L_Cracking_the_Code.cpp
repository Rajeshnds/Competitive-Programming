#include<bits/stdc++.h>
using namespace std;
long long d=1e5,n,k;
void solve(){
    k=n;
    for(int i=1;i<5;i++)k=(k*n)%d;
    printf("%05d",k);
}
int main(){
    cin>>n;
    n=n/10000*10000+(n/100%10)*1000+
    (n%10)*100+(n/10%10)*10+(n/1000)%10;
    solve();
}