#include<iostream>
using namespace std;
int main(){
int n,m,a[51],k=0;
cin>>n>>m;
for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++)
    if(a[i]>=a[m-1]&&a[i]>0)
        k++;
    cout<<k;
    return 0;
}
