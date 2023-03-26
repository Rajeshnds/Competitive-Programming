#include<bits/stdc++.h>
using namespace std;
int t,n,a[52],m,k;
string pairs(int n){
    k=0;m=0;
    for(int i=0;i<n;i++){cin>>a[i];if(a[i]&1)m++;}sort(a,a+n);
    for(int i=1;i<n;i++)if(a[i]-a[i-1]==1)k=1;
    return  m&1&&k==0?"NO":"YES";
}
int main(){
    for(cin>>t;t--;){
        cin>>n;
        cout<<pairs(n)<<endl;
    }
}
