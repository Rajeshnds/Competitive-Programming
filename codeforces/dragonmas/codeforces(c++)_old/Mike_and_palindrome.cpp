#include<bits/stdc++.h>
using namespace std;
string s,t;
int k;
main(){
    cin>>s;t=s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)if(s[i]!=t[i])k++;
    cout<<(k==2||s.size()==1||(s.size()%2==1&&k==0)?"YES":"NO");
}
