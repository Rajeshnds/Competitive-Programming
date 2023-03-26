#include<bits/stdc++.h>
using namespace std;
int n;
main(){
    cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%74==0||n%477==0)cout<<"YES";
    else cout<<"NO";
}//{4,7,47,74,447,474,477,747,774}
