#include<iostream>
class regpoly 
{
    private:
    int nside; 
    int lside;
    int a; 
    int b; 
    public:
    regpoly() //interactive constructor 
    {
        int nside,lside;
        std::cout<<"enter number of sides "<<std::endl; 
        std::cin>>nside;
        std::cout<<"enter length of side"<<std::endl; 
        std::cin>>lside; 
        std::cout<<"number of sides are"<<nside<<"having length"<<lside<<std::endl;
    }
    regpoly(int n,int l) //this consturtor
    {
        int a,b; 
        this->a=n; 
        this->b=l; 
    }
    void show()
    {
        std::cout<<"value of n is"<<a<<"and value of l is"<<b<<std::endl; 
    }
};
int main()
{
    regpoly();
    regpoly r1(2,3); 
    r1.show();
    return 0;
}