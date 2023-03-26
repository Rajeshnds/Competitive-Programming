#include<bits/stdc++.h>
using namespace std;
int n;
string s;
string who_said(){
    getline(cin,s);
    bool k=s.size()>=5&&s.substr(s.size()-5)=="lala.";
    bool l=s.size()>=5&&s.substr(0,5)=="miao.";
    return (k==l?"OMG>.< I don't know!":k?"Freda's":"Rainbow's");
}
int main(){
    cin>>n;getline(cin,s);
    while(n--)cout<<who_said()<<endl;
}
