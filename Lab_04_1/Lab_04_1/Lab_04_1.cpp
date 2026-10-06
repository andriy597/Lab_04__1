// Лабораторна робота № 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i;       // N - нижня межа добутку, i - параметр циклу
    double P;       // добуток

    do {
        cout << "N (1..10) = "; cin >> N;
    } while (N < 1 || N > 10);

    // 1 спосіб: while
    P = 1;
    i = N;
    while (i <= 10)
    {
        P *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
        i++;
    }
    cout << P << endl;

    // 2 спосіб: do...while
    P = 1;
    i = N;
    do {
        P *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
        i++;
    } while (i <= 10);
    cout << P << endl;

    // 3 спосіб: for з i++
    P = 1;
    for (i = N; i <= 10; i++)
    {
        P *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
    }
    cout << P << endl;

    // 4 спосіб: for з i--
    P = 1;
    for (i = 10; i >= N; i--)
    {
        P *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
    }
    cout << P << endl;

    return 0;
}