#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
cin>>n>>s;
for(int i=2;i<=n;i++)if(n%i==0)reverse(s.begin(),s.begin()+i);
cout<<s;
}
