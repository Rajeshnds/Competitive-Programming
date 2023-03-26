#include<bits/stdc++.h>
using namespace std;
int main(){
char s[101];cin>>s;
int n=strlen(s),tl=0,tu=0;
for(int i=0;i<n;i++)
    islower(s[i])?tl++:tu++;
if(tl>=tu)cout<<strlwr(s);
else cout<<strupr(s);
return 0;
}
