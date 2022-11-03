#include<iostream>
class divi
{
    public:
    float cal(int a,int b)
    {
        return a/b; 
    }
    double cal(double a,double b)
    {
        return a/b;
    }
}; 
int main()
{
    divi d; 
    std::cout<<"floating point division is:"<<d.cal(4,3)<<std::endl; 
    std::cout<<"double point division is:"<<d.cal(3.0,4.0)<<std::endl; 
    return 0;
}
