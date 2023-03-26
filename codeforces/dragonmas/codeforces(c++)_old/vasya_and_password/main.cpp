#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
    cin>>t;
    while(t--){
        cin>>s;
        int k=0,l=0,m=0,c=0,d=0,e=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]))k++,c=i;
            else if(isupper(s[i]))l++,d=i;
            else m++,e=i;
        }
        if(k+l==0)s[0]='1',s[1]='A';
        else if(k+m==0)s[0]='1',s[1]='a';
        else if(l+m==0)s[0]='A',s[1]='a';
        else if(!k)s[l>m?d:e]='1';
        else if(!l)s[k>m?c:e]='A';
        else if(!m)s[k>l?c:d]='a';
        cout<<s<<endl;
    }
}
