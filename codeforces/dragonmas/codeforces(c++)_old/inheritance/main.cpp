#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int a;
protected:
    void set_data(int x){
        a=x;
    }
    void show_data(){
        cout<<a;
    }
};
class B:public A{
public:
    void set_value(int x){
        set_data(x);
    }
    void show_value(){
        show_data();
    }
};
int main(){
    B obj;
    obj.set_value(3);
    obj.show_value();
}
