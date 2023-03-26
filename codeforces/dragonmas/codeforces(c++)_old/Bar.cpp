#include<bits/stdc++.h>
using namespace std;
int n,k;
string c;
set<string>s{"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY"};
main(){
    cin>>n;
    while(n--){
        cin>>c;
        k+=isalpha(c[0])?s.count(c):stoi(c)<18;
    }
    cout<<k;
}
