#include<bits/stdc++.h>
using namespace std;
int n,i;
string s;
main(){
cin>>n;
if(n%2==1){cout<<"NO";return 0;}
else{
    cin>>s;
    while(n--&&i+2){
        if(s[n]==')')i++;
        else i--;
    }
}
cout<<(i?"NO":"YES");
}
