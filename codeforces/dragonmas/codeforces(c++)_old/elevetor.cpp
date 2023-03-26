#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void position(string s,int n){
     cout<<((s=="front")^(n==1)?'R':'L');
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>s>>n;
    position(s,n);
}

