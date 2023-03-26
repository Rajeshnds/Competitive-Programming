#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=0;
string s;
cin>>s;
sort(s.begin(),s.end());
for(int i=0;i<s.size();i++)
    if(s[i+1]!=s[i])
    k++;
cout<<(k%2==0?"CHAT WITH HER!":"IGNORE HIM!");
return 0;
}
