#include <iostream> 
class num 
{ 
private: 
int val; 
public: 
num(){ val = 0;} 
num(int a){ val = a;} 
void show(){ std::cout << "The value is " << val << std::endl; } 
void operator-() { val = -val; } // unary operator overloading 
num operator+(num x) { return ( val + x.val ); } 
num operator*(num x) { return ( val * x.val ); } 
}; 
int main() 
{ 
num d(5), c(3), b; 
d.show(); 
std::cout << "After negation : ";
-d; 
d.show(); 
std::cout << "After addition : ";
b = c + d; 
b.show(); 
std::cout << "After multiplication : ";
b = c * d; 
b.show(); 
return 0; 
}