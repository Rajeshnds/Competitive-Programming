#include<bits/stdc++.h>
using namespace std;
int t,n,k,m;
main(){
for(cin>>t;t--;){
    cin>>n>>k;m=0;
vector<int>a(n),b(n);
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
sort(a.begin(),a.end());sort(b.rbegin(),b.rend());
for(int i=0;i<k&&i<n;i++){if(a[i]<b[i])a[i]=b[i];else k++;}
for(int i=0;i<n;i++)m+=a[i];cout<<m<<endl;
}
}
