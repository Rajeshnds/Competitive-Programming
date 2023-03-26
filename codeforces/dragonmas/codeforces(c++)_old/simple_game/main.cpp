#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    cout<<(n==1?1:m>n/2?m-1:m+1);
}
