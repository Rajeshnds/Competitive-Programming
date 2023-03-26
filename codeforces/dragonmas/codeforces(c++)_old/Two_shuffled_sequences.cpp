#include<bits/stdc++.h>
using namespace std;
int n,l=1,k,j;
main(){
    cin>>n;int a[n],b[n],c[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            l++;
            if(l==3)return cout<<"NO",0;
            c[k++]=a[i];
        }
        else l=1,b[j++]=a[i];
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++)cout<<c[i]<<" ";
    cout<<endl<<j<<endl;
    for(int i=j-1;i>=0;i--)cout<<b[i]<<" ";

}
