#include<bits/stdc++.h>
using namespace std;
double n;
string s;
int main(){
    while(cin>>s>>n){
    if(s=="US")cout<<"UK "<<n-2<<endl<<"Europe "<<31+floor(n)<<endl<<"India "<<n-2;
    else if(s=="UK")cout<<"US "<<n+2<<endl<<"Europe "<<33+floor(n)<<endl<<"India "<<n;
    else if(s=="Europe")cout<<"US "<<n-31<<" OR "<<n-30.5<<endl<<"UK "<<n-33<<" OR "<<n-32.5<<endl<<"India "<<n-33<<" OR "<<n-32.5;
    else cout<<"US "<<n+2<<endl<<"UK "<<n<<endl<<"Europe "<<33+floor(n);
    cout<<endl<<endl;
    }
}
