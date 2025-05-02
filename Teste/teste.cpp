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
    
    if (b <= 0 || h <= 0)
    {
        printf("Rectangle doesn't exist. Try again");
    } else {
        printf("%d" , A);
    }
}