#include<bits/stdc++.h>
using namespace std;
int g;
pair<int,int>p;
struct point{
    int x=0;
    int y=1;
};
int main(){
    point point;
    point={1,2};
    struct point *p2=&point;
    cout<<p2->x<<" "<<p2->y;
}