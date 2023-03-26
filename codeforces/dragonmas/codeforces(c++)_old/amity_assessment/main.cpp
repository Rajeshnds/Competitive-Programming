#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
    cin>>a>>b>>c>>d;
    swap(b[0],b[1]);
    swap(d[0],d[1]);
    a=a+b;
    c=c+d;
    a.erase(a.find('X'),1);
    c.erase(c.find('X'),1);
    a+=a;
    cout<<(a.find(c)!=-1?"YES":"NO");
}
