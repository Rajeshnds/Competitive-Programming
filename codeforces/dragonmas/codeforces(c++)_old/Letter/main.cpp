#include<bits/stdc++.h>
using namespace std;
char c[202];
int a[124],i;
string text(){
    gets(c);if(c[120])cout<<1;
    while(c[i])a[c[i++]]++;
    gets(c);
    a[' ']+=200;
    i=0;
    while(c[i])if(--a[c[i++]]<0)return "NO";
    return "YES";
}
int main(){
    cout<<text();
}
