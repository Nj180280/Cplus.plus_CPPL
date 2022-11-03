#include<iostream>
class square
{
    protected:
    int lside,area,peri; 
    public:
    square()
    {}
}; 
class lawncost
{
    protected:
    int lrate; 
    public:
    lawncost()
    {}
}; 
class fencecost
{
    protected:
    int frate; 
    public:
    fencecost()
    {}
};
class compound:public square,lawncost,fencecost
{
    public:
    compound(int l,int lrt,int frt)
    {
        lside=l; 
        lrate=lrt; 
        frate=frt; 
    }
    void area_peri()
    {
        area=lside*lside; 
        peri=4*lside; 
    }
    void cal()
    {
        std::cout<<"area is"<<area<<"and perimeter is"<<peri<<std::endl; 
        std::cout<<"cost of making lawn is"<<area*lrate<<std::endl; 
        std::cout<<"cost of making fence is"<<peri*frate<<std::endl; 
    }
};
int main()
{
    compound c(5,10,20); 
    c.area_peri(); 
    c.cal();
    return 0;
}
