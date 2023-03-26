#include<bits/stdc++.h>
using namespace std;
int n;
string s,t="aeiou";
main(){
cin>>n>>s;
for(int i=1;i<n;i++){
    if(t.find(s[i])!=-1&&t.find(s[i-1])!=-1)s.erase(i,1),i--;
}
cout<<s;
}
/*#include<bits/stdc++.h>
using namespace std;
string s="aeiouy";
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=1;i<n;++i){
        if(s.find(a[i])!=-1&&s.find(a[i-1])!=-1) {a.erase(i,1);--i;}
    }
    cout<<a;
}*/


