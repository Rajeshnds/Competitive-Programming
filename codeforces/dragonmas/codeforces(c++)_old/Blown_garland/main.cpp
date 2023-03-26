#include<bits/stdc++.h>
using namespace std;
string s;
int a[91],b[91];
void replacable(){
    cin>>s;
    for(int i=0;i<s.size();i++)if(s[i]=='!')a[i%4]++;else b[s[i]]=i%4;
    cout<<a[b['R']]<<" "<<a[b['B']]<<" "<<a[b['Y']]<<" "<<a[b['G']];
}
int main(){
    replacable();
}
