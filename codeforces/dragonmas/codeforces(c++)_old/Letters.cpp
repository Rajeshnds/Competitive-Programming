#include<bits/stdc++.h>
using namespace std;
long long n,m,j=1,c;
int main(){
    cin>>n>>m;
    long long a[n+2]={0},b[n+2];
    for(int i=1;i<=n;i++)cin>>b[i],a[i]=a[i-1]+b[i];
    while(m--){
        cin>>c;
        while(c>a[j])j++;
        cout<<j<<" "<<c+b[j]-a[j]<<endl;
    }
}
