#include <iostream>

int Subtract(int x, int y)
{
    return x - y ;
}

int main()
{
   int result = Subtract (5,2);
    std::cout << result << std::endl;
    return 0;
}