#include<bits/stdc++.h>
using namespace std;
string s;
int l,f;
int count_VK(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='V'&&s[i+1]=='K')l++,i++;
        else if(s[i]=='K'&&s[i+1]=='K')f=1;
        else if(s[i]=='V'&&s[i+1]=='V'&&s[i+2]!='K')f=1;
    }
    return l+f;
}
int main(){
    cout<<count_VK();
}
