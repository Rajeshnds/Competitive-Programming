#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main(){
    cin>>n;
    k=n/2;
    for(int i=n-1;i>k;i--)n*=i;
    for(int i=1;i<k;i++)n*=i;
    cout<<(n/k)/2;
}
