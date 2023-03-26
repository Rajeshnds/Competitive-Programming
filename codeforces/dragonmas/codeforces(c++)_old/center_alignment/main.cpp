#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>v;
    string s,u,z;
    int m=0,f=1;
    while(getline(cin,s)){
        v.push_back(s);
        m=max(m,int(s.size()));
    }
     for(int i=1;i<=m+2;i++)z+='*';
     cout<<z<<endl;
    for(auto i : v){
        int k=i.size();
        int l=m-k;
        u="";
        for(int j=1;j<=l/2;j++)u+=' ';
        if(l%2==0){
            i='*'+u+i+u+'*';
        }
        else{
            if(f){
                i='*'+u+i+u+' '+'*';
                f=0;
            }
            else{
                i='*'+u+' '+i+u+'*';
                f=1;
            }
        }
        cout<<i<<endl;
    }
    cout<<z;
}
