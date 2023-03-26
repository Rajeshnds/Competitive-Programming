#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int k=1,l=1;
    while((k*=2)<=n)l++;
    cout<<l;
}
