#include<bits/stdc++.h>
using namespace std;
int n,a[2001],i;
int main(){
    for(cin>>n;i<2*n;i++)cin>>a[i];
        sort(a,a+2*n);
        if(a[0]==a[2*n-1])cout<<-1;
        else for(int i=0;i<2*n;i++)cout<<a[i]<<" ";
}

