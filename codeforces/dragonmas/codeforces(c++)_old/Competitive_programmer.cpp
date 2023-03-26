#include<bits/stdc++.h>
using namespace std;
int n,k,l,d;
string s;
main(){
    for(cin>>n;n--;cout<<endl){
        cin>>s;l=0;k=0;d=0;
        for(char c:s){
            if(c=='0')k++;
            if(c!='0'&&(c-'0')%2==0||k==2)d=1;
            l+=(c-'0');
        }
        cout<<(k&&l%3==0&&d?"red":"cyan");
    }
}
