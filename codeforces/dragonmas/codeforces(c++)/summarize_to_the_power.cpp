#include<bits/stdc++.h>
using namespace std;
int n,a[120000],k,s,d;
map<int,int>m;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],m[a[i]]++;
    for(int i=0;i<n;i++){
        k=0;
        for(int j=0;j<31;j++){
            d=(1<<j)-a[i];
            if(m[d]>1||(m[d]==1&&d!=a[i]))k=1;
        }
        if(!k)s++;
    }
    cout<<s;
}