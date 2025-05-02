#include <iostream>

int main ()
{
    int b;
    int h;
    int A;
    std::cout << "Input base";
    std::cin >> b;
    std::cout << "Input height";
    std::cin >> h;
    A = b * h;
    
    if (b || h <= 0)
    {
        printf("Rectangle doesn't exist. Try again");
    } else {
        printf("Your area is:", "%d" , A);
    }
}