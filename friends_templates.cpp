#include<iostream>

using namespace std;
//class nagesh;
class shivam{
    int a;
    int b;
    template<class T, class U>
    friend void function(T,U);
    public:
    shivam(int a, int b)
        :a(a),b(b){}
};

class nagesh{
    int a;
    int b;
    template<class T, class U>
    friend void function(T,U);

    public:
    nagesh(int a, int b)
        :a(a),b(b){}
};
class nagesh1{
    int a;
    int b;
    template<class T, class U>
    friend void function(T,U);

    public:
    nagesh1(int a, int b)
        :a(a),b(b){}
};

template<class T, class U>
void function(T obj, U obj1){
    cout<<obj.a<<" "<<obj.b<<" "<<obj1.a<<" "<<obj1.b;
}
int main(){
    nagesh1 obj(20,30);
    nagesh obj1(30,40);
    function(obj1,obj);
}