#include <iostream> 
#include <cmath> 
class square 
{ 
private: 
float side, area; 
public: 
square(){ side = 0; area = 0; } 
square(int a){ side = a; area = side * side; } 
void show(){ std::cout << "The square of side " << side << " units has area " << area 
<< " sq units " << std::endl; } 
square operator+(square x) // binary operator overloading for merging 
{ 
float a,s; 
a = area + x.area; 
s = sqrt(a); 
return(s); 
} 
}; 
int main() 
{ 
square a(3), b(4), c; 
a.show(); 
b.show(); 
c = a + b; 
c.show(); 
return 0; 
}