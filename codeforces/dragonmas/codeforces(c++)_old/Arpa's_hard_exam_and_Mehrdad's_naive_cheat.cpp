#include<bits/stdc++.h>
using namespace std;
int n,a[4]={8,4,2,6};
main(){
    cin>>n;
    cout<<(n?a[(n-1)%4]:1);
}
