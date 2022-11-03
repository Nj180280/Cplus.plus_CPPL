#include<iostream>
using namespace std; 
class regpoly 
{
    private:
    int nside; 
    protected:
    int lside; 
    public:
    regpoly(int n,int l);
    void show();
};
int main()
{
    regpoly r(3,4); //parameterized constructor
    r.show(); 
    return 0; 
}
regpoly::regpoly(int n,int l)
{
    nside=n; 
    lside=l;
}
void regpoly::show()
{
    std::cout<<"Number of sides are"<<nside<<"and length of each side is"<<lside<<"units"<<std::endl;
}