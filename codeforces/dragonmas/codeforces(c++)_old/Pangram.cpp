#include<bits/stdc++.h>
using namespace std;
int n;
char c[101];
set<char> s;
main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>c[i];
    if(c[i]<97)
        c[i]=c[i]+32;
s.insert(c[i]);
}
cout<<(s.size()==26?"YES":"NO");
return 0;

}
