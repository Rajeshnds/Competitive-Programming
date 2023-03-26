#include<bits/stdc++.h>
using namespace std;
int n,k,a,s;
int no_of_days(){
    cin>>n>>k;
    while(n--)cin>>a,s+=(a+k-1)/k;
    return (s+1)/2;
}
int main(){
    cout<<no_of_days();
}
