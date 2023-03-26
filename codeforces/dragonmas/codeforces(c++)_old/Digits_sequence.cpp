#include<bits/stdc++.h>
using namespace std;
int k;
string s;
char digits(int k){
   for(int i=1;i<=k;i++)s+=to_string(i);
   return s[k-1];
}
int main(){
    cin>>k;
    cout<<digits(k);
}
