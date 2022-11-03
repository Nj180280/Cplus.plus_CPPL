#include<iostream>
using namespace std;
 
class B
{
    public:
 
    // Virtual function
    virtual void f() {
        cout << "The base class function is called.\n";
    }
};
 
class D: public B
{
    public:
    void f() {
        cout << "The derived class function is called.\n";
    }
};
 
int main()
{
    B base;
    D derived;
 
    B *basePtr = &base;
    basePtr->f();
 
    basePtr = &derived;
    basePtr->f();
 
    return 0;
}
//onsider the following code, where we have a base class B, and a derived class D. 
//Base class B has a virtual function f(), which is overridden by a function in the derived class D, i.e., D::f() overrides B::f().
//Now consider lines 30-34, where the decision as to which class’s 
//function will be invoked depends on the dynamic type of the object pointed to by basePtr. 
//This information can only be available at the runtime, and hence f() is subject to the dynamic binding