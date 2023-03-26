#include<bits/stdc++.h>
using namespace std;
long long n,i,k=1,l=1,d,j;
string s;
int main(){
    cin>>n>>s;
    while(s[i]==s[i+1])k++,i++;
    j=n-1;
    while(s[j]==s[j-1])l++,j--;
    d=k+1+l;
    if(s[0]==s[n-1])d=(d+(l*k))%998244353;
    cout<<d;
}