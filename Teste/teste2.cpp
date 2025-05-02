#include <iostream>

int main()
{
    int a;
    int m;
    int d1, d2, d3;
    int R;

    std::cout << "anos de vida: ";
    std::cin >> a;
    std::cout << "meses de vida (alem dos anos): ";
    std::cin >> m;
    std::cout << "dias de vida: ";
    std::cin >> d1;

    d2 = a * 365;
    d3 = m * 30;
    R = d1 + d2 + d3;

    if (R <= 0)
    {
        printf("Idade invalida");
    } else {
        printf("%d", R);
    }
}