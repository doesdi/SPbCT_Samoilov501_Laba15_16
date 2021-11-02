#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".1251");
    float km, ras, cost, sum;
    cout << "Введите длину пути в км = ";
    cin >> km;
    cout << "Введите расход топлива на 100 км = ";
    cin >> ras;
    cout << "Введите цену топлива за литр = ";
    cin >> cost;
    sum = km * (ras / 100) * cost;
    cout << "Стоимость поездки = " << sum << " рублей";
}