#include<bits/stdc++.h>
using namespace std;
int f,b[26];
string s;
int main(){
    cin>>s;
    if(s.size()<26)cout<<-1;
    else{
        for(int i=0;i<=s.size()-26;i++){
            f=1;
            int b[26]={0};
            for(int j=i;j<i+26;j++){
                if(s[j]!='?')b[s[j]-'A']++;
                if(b[s[j]-'A']==2)f=0;
            }
            if(f){
                for(int j=i;j<i+26;j++){
                    if(s[j]=='?'){
                        for(int k=0;k<26;k++){
                            if(b[k]==0){
                                s[j]=char(k+'A');
                                b[k]=1;
                                break;
                            }
                        }
                    }
                }
                for(int i=0;i<s.size();i++){
                    if(s[i]=='?')s[i]='A';
                }
                cout<<s;
                break;
            }
        }
        if(f==0)cout<<-1;
    }
}
