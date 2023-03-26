#include<iostream>
using namespace std;
int main(){
    int k=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
    if(s[i]=='4'||s[i]=='7')
        k++;
    cout<<(k==4||k==7?"YES":"NO");
    return 0;
}
