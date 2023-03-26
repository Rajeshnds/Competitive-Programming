#include<iostream>
using namespace std;
int main(){N
int n,m;
string s;
cin>>n;
while(n--){
    cin>>m>>s;
    if(m>=11){
        m=m-11;
        int i=s.find("8");
        if(i<=m&&i>=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;
}
