#include<bits/stdc++.h>
using namespace std;
int t,n,x,k;
int wealthy(int n,int x){
    k=1;
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)if(a[i]/k>=x)a[i-1]+=a[i],k++;else break;
    return k-1;
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>x;
        cout<<wealthy(n,x)<<endl;
    }
}
