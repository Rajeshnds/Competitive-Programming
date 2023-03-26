#include<iostream>
using namespace std;
int main(){
int n,a[1001],b[1001],i=0,j=0;
cin>>n;
for(i=0;i<n;i++)
        cin>>a[i];
for(i=0;i<n;i++)
        if(a[i]>=a[i+1])
            b[j++]=a[i];
cout<<j+1<<endl;
for(i=0;i<j;i++)
    cout<<b[i]<<" ";
    cout<<a[n-1];
return 0;

}
