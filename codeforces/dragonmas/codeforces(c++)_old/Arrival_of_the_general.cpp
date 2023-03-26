#include<bits/stdc++.h>
using namespace std;
int n,a[101],m,mi,k,l;
int main(){
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
m=a[0];
mi=a[0];
for(int i=1;i<n;i++){
    if(a[i]>m){
        k=i;
    m=a[i];
    }
    if(a[i]<=mi){
        l=i;
    mi=a[i];
    }
}
cout<<(l>k?k+n-l-1:k+n-l-2);
return 0;
}
