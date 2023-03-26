#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],k,l,m;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            k=i;
            l++;
            if(l==1)m=i;
        }
    }
    reverse(a+m,a+k+1);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])return cout<<"no",0;
    }
    cout<<"yes"<<endl<<m+1<<" "<<k+1;
}
