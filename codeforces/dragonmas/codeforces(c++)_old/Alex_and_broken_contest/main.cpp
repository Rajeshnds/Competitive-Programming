#include<bits/stdc++.h>
using namespace std;
string s,t[5]={"Danil","Olya","Slava","Ann","Nikita"};
int k,l;
string contest(string s){
    for(int i=0;i<5;i++){
        if(s.find(t[i])!=-1){
            l=s.find(t[i]),k++;
            if(s.find(t[i],l+1)!=-1)k++;
        }
    }
    return k==1?"YES":"NO";
}
int main(){
    cin>>s;cout<<contest(s);
}
