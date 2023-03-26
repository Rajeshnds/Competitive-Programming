#include<bits/stdc++.h>
using namespace std;
main(){
int m,d,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
cin>>m>>d;
cout<<(a[m]+d+5)/7;
}
