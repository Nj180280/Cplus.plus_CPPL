#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std; 
void task1(int n)
{
    int i; 
    for(i=0;i<n;i++)
    {
        sleep(1);
        std::cout<<i<<std::endl; 
    }
}
void task2()
{
    for(char c='A';c<='Z';c++)
    {
        sleep(2);
        std::cout<<c<<std::endl; 
    }
}
int main()
{
    int num; 
    std::cout<<"enter a number"<<std::endl; 
    cin>>num;
    thread t1(task1,num); 
    thread t2(task2); 
    t1.join(); 
    t2.join();
    return 0;
}
