#include<bits/stdc++.h>
using namespace std;
int n,e[26][26],d[26];
int main(){
    int m=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        int b[26]={0};
        int k=0;
        for(int j=0;j<s.size();j++){
            if(b[s[j]-'a']==0)k++,b[s[j]-'a']=1;
        }
        if(k==1)d[s[0]-'a']+=s.size();
        else if(k==2){
            sort(s.begin(),s.end());
            e[s[0]-'a'][s[s.size()-1]-'a']+=s.size();
        }
    }
    for(int i=0;i<26;i++){
        for(int j=i+1;j<26;j++){
            m=max(m,d[j]+e[i][j]+d[i]);
        }
    }
    cout<<m;
}
