#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>
// Работу выполнил студент Зотов О.И. КЗФ-052
int main()
{
    setlocale(LC_ALL, "Russian");
    double a = 16.5;
    double b = 3.4;
    const double x = 0.61;
    double s, d;

    std::cout << "Введите  a: ";
    std::cin >> a;
    std::cout << "a = " << a << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "b = " << b << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    s = (pow(x, 3)) * (pow(tan(x + b), 2)) + (a / sqrt(x + b));
    d = (b * (pow(x, 2) - a)) / (exp(a * x) - 1);
    std::cout << "s = " << s << std::endl;
    std::cout << "d = " << s << std::endl;
    
            return 0;
}