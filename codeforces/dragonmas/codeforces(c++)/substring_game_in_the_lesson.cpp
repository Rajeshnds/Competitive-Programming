#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    int k=125;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(k<int(s[i]))cout<<"Ann"<<endl;
        else cout<<"Mike"<<endl;
        k=min(k,int(s[i]));
    }
}