#include<bits/stdc++.h>
using namespace std;
int n,k;
void permutation(){
    cin>>n>>k;
    while(k--)cout<<n--<<" ";for(int i=1;i<=n;i++)cout<<i<<" ";
}
int main(){
    permutation();
}
