#include<bits/stdc++.h>
using namespace std;
char c,d;
main(){
cin>>c>>d;
if((c=='a'||c=='h')&&(d=='1'||d=='8'))cout<<3;
else if((c>='b'&&c<='g')&&(d>='2'&&d<='7'))cout<<8;
else cout<<5;
}
