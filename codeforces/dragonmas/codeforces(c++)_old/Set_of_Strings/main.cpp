#include<bits/stdc++.h>
using namespace std;
int k,j,i,b[126];
string s,t[101];
set<char>sets;
int concat_strings(){
    cin>>k>>s;
    for(int i=0;i<s.size();i++)sets.insert(s[i]);
    if(sets.size()<k)cout<<"NO";
    else{cout<<"YES"<<endl;
    for(i=0;k>1;i++){
        b[s[i]]=1;
        while(b[s[i]])t[j]+=s[i],i++;
        j++;
        i--;
        k--;
    }
    for(int k=0;k<j;k++)cout<<t[k]<<endl;
    for(int j=i;j<s.size();j++)cout<<s[j];
    }
}
int main(){
    concat_strings();
}
