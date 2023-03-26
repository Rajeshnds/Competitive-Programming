#include<bits/stdc++.h>
using namespace std;
int k,n,x;
main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++)if(x%i==0&&x/i<=n)k++;
    cout<<k;
}
