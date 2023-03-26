#include<bits/stdc++.h>
using namespace std;
long long t,n,k,a[200001],b[200001],j,s;
map<int,int>m;
int main(){
    for(cin>>t;t--;){
        cin>>n>>k;
        s=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<k;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+k);
        j=0;
        for(int i=k-1;i>=0;i--){
            if(b[i]>1)s+=a[j],j+=(b[i]-1);
        }
        j=n-1;
        for(int i=0;i<k;i++){
            if(b[i]==1)s+=(2*a[j]);
            else s+=a[j];
            j--;
        }
        cout<<s<<endl;
    }
}