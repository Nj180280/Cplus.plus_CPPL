#include<iostream>
class regpoly
{
    protected :
    int nside; 
    int lside; 
    public:
    regpoly()
    {
        std::cout<<"enter number of sides"<<std::endl; 
        std::cin>>nside;
        std::cout<<"enter length of sides"<<std::endl; 
        std::cin>>lside;
    }
};
class square :public regpoly
{
    protected:
    int area; 
    int peri; 
    public:
    square(int l)
    {
        std::cout<<"square has"<<nside<<"sides and length of side is"<<lside<<std::endl; 
        lside=l;
    }
    void area_peri()
    {
        area=lside*lside; 
        peri=4*lside; 
    }
    void print_area_peri()
    {
        std::cout<<"area is"<<area<<std::endl; 
        std::cout<<"perimeter is"<<peri<<std::endl; 
    }
};
int main()
{
    //regpoly (); 
    square s(4);
    s.area_peri(); 
    s.print_area_peri(); 
}