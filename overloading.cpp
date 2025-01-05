#include <iostream>
#include <string>

void foo(double x)
{
   std::cout << "double x = " << x << "\n";
}
void foo(int x)
{
   std::cout << "int x = " << x << "\n";
}
void foo(int x, int y, std::string z="hello")
{
   std::cout << "x = " << x  << "\ny = " << y << "\nz = " << z <<  "\n";
}


int main(){
    foo(123.0);
    foo(123);
}
