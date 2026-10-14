#include <iostream>

int Add(int x, int y)
{
    return x + y ;
}

int main()
{
   int result = Add (5,2);
    std::cout << result << std::endl;
    return 0;
}