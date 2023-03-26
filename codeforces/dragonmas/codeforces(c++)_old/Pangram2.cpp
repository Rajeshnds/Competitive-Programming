#include<bits/stdc++.h>
using namespace std;
int n;
char c;
set<char> s;
main(){
    cin>>n;
    while(n--)cin>>c,c>='A'&&c<='Z'?s.insert(c+32):s.insert(c);
cout<<(s.size()==26?"YES":"NO");
return 0;
}
