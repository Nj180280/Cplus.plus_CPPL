#include<iostream>
class twod
{
    protected:
    int l;
    public:
    twod()
    {}
}; 
class rectangle : virtual public twod
{
    private:
    int b; 
    public:
    rectangle(int len,int bre)
    {
        l=len; 
        b=bre;
        std::cout<<"length and breadth of rectangle is"<<l<<b<<std::endl; 
    }
};
class rhombus : virtual public twod
{
    public:
    int a; 
    rhombus(int leng,int ang)
    {
        l=leng; 
        a=ang;
        std::cout<<"length and angle of rhombus is"<<l<<a<<std::endl;
    }
};
class square : public rectangle,rhombus
{
    public:
    square(int a)
    {
        l=a;
        std::cout<<"side of square is:"<<l<<std::endl;  
    } 
};
int main()
{
std::cout<< "Rectangle" <<std::endl;
rectangle p(3,4); 
std::cout << std::endl;
std::cout<< "Rombus" <<std::endl;
rhombus q(5,30); 
std::cout << std::endl;
std::cout<< "square" <<std::endl;
square r(6); 
std::cout << std::endl;
return 0;
}
