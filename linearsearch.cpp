#include<iostream>
int main()
{
    int i,size,flag=0,val; 
    std::cout<<"enter size of array"<<std::endl; 
    std::cin>>size; 
    int a[size];
    std::cout<<"enter elements of array"<<std::endl; 
    for(i=0;i<size;i++)
    {
        std::cin>>a[i]; 
    }
    std::cout<<"array is"<<std::endl; 
    for(i=0;i<size;i++)
    {
        std::cout<<a[i]<<std::endl; 
    }
    std::cout<<"enter element to be searched"<<std::endl; 
    std::cin>>val; 
    for(i=0;i<size;i++)
    {
        if(val==a[i])
        {
            flag++; 
            break;
        }
        else
        {
            flag=0; 
        }
    }
    if(flag>=1)
    {
    std::cout<<"element found at index position:"<<i+1<<std::endl;
    }
    if(flag==0)
    {
        std::cout<<"element not found"<<std::endl;
    }
    return 0;
}