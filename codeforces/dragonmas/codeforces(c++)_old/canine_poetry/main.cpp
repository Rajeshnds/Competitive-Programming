#include<bits/stdc++.h>
using namespace std;
int t,k;
string s;
int main(){
    for(cin>>t;t--;){
        cin>>s;
        k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i-1]||s[i]==s[i-2])s[i]='0',k++;
        }
        cout<<k<<endl;
    }
}
