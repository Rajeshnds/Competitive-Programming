#include<bits/stdc++.h>
using namespace std;
char c,s='a';
int k=0;
main(){
while(cin>>c)k+=min(abs(s-c),26-abs(s-c)),s=c;
cout<<k;
return 0;
}
