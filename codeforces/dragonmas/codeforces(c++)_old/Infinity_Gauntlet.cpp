#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,string>m={{"green","Time"},{"yellow","Mind"},{"orange","Soul"},{"purple","Power"},{"red","Reality"},{"blue","Space"}};
int n;
string s;
for(cin>>n;n--;)cin>>s,m.erase(s);
cout<<m.size()<<endl;
for(auto i:m)cout<<i.second<<endl;
return 0;

}
