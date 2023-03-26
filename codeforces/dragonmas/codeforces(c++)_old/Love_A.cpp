#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,k=0;
string s;
cin>>s;
n=s.size();
for(int i=0;i<s.size();i++)
    if(s[i]=='a')
    k++;
if(k>n/2)
    cout<<n;
else
    cout<<k+(k-1);
return 0;
}
