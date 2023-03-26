#include<bits/stdc++.h>
using namespace std;
int n,a;
set<int>s;
string sequence(int n){
    for(int i=0;i<n;i++){
        cin>>a;
        if(i%2==0){
            if(i<=a)s.insert(n-a+i);
            else s.insert(i-a);
        }
        else{
            if(i>=a)s.insert(a+n-i);
            else s.insert(a-i);
        }
    }
    return s.size()==1?"YES":"NO";
}
int main(){
    cin>>n;cout<<sequence(n);
}
