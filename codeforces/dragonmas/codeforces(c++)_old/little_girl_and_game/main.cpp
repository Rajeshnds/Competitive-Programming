#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    int k=0,a[26]={0};
    cin>>s;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)if(a[i]%2==1)k++;
    cout<<(k==0||(k&1)?"First":"Second");
}
