#include<iostream>
using namespace std; 
int main()
{
    int a=10; 
    int b=0; 
    int size;
    if(b==0)
    {
        std::cout<<"division not possible"<<std::endl; 
    }
    else
    {
        int c=a/b; 
        std::cout<<"output of division is"<<c<<std::endl; 
    }
    std::cout<<"enter size of array"<<std::endl; 
    cin>>size; 
    int d[size]; 
    std::cout<<"enter elements of array:"<<std::endl; 
    for(int i=0;i<size;i++)
    {
        std::cin>>d[i]; 
    }
    std::cout<<"elements of array are:"<<std::endl; 
    for(int i=0;i<size;i++)
    {
        std::cout<<d[i]<<std::endl; 
    }
    int index=11; 
    if(index>=size)
    {
        std::cout << "ArrayIndexOutofBounds Exception..." << std::endl;
    }
    else
    {
        std::cout<<"value at index is:"<<d[index]<<std::endl; 
    }
}