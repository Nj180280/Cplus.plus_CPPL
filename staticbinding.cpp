// C++ program to illustrate the concept of static binding
#include <iostream>
using namespace std;
 
class ComputeSum
{
    public:
 
    int sum(int x, int y) {
        return x + y;
    }
 
    int sum(int x, int y, int z) {
        return x + y + z;
    }
};
 
int main()
{
    ComputeSum obj;
    cout << "Sum is " << obj.sum(10, 20) << endl; //sum will automatically bind to appropriate function based on parameters passed 
    cout << "Sum is " << obj.sum(10, 20, 30) << endl;
 
    return 0;
}


// Consider the following code, where the sum() function is overloaded to accept two and three integer arguments. 
// Even though there are two functions with the same name inside the ComputeSum class, 
// the function call sum() binds to the correct function depending on the parameters passed to those functions. This binding is done statically during compile time.