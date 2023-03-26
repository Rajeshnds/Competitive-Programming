#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin>>s;
    int k=97;
    for(int i=0;i<s.size();i++){
        if(s[i]==k)k++;
        else if(s[i]<k){
            s[i]=s[i]+(k-s[i]);
            k++;
        }
        if(k==123)return cout<<s,0;
    }
    cout<<-1;
}