#include<iostream>
class regpoly 
{
    public:
    regpoly(int n,int l) 
    {
        std::cout<<"number of sides are"<<n<<"having length"<<l<<std::endl;
    }
    ~regpoly()
    {
        std::cout<<"destructor called"<<std::endl; 
    }
};
int main()
{
    regpoly r(2,3);
    r.regpoly::~regpoly(); 
    std::cout<<"explicit destructor called"<<std::endl;
    return 0;
}