#include<bits/stdc++.h>
using namespace std;
main(){
for(char c; cin>>c;cout<<(c=='.'?0:(cin>>c,c=='.'?1:2)));
}
