#include<bits/stdc++.h>
using namespace std;
string s;
string interner_address(){
    cin>>s;
    int k=s.find('p');
    s.insert(k+1,"://");
    k=s.find("ru",k+5);
    s.insert(k,".");
    if(s.size()>k+3)s.insert(k+3,"/");
    return s;
}
int main(){
    cout<<interner_address();
}
