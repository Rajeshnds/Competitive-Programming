#include<bits/stdc++.h>
using namespace std;
long int n,k,d;
string s;
main(){
cin>>n;
while(n--){
        k=0;
    cin>>s;
    d=pow(10,s.size()-1);
    for(int i=0;i<s.size();i++)
        if(s[i]!='0')k++;
        cout<<k<<endl;
    for(int i=0;i<s.size();i++){
    if(s[i]!='0')
        cout<<(s[i]-48)*d<<" ";
        d=d/10;
    }
    cout<<endl;
}
return 0;
}
