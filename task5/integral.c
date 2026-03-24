#include "integral.h"

double integral(double (*f)(double), double a, double b, int n) {
    //Проверка входных данных
    if (n <= 0) {
        return 0.0;
    }

    //Вычисляем шаг (ширину одной трапеции)
    double h - (b - a) / n;
    
    //Начальная сумма
    double sum = (f(a) + f(b)) / 2.0;

    //Суммируем значения в промежуточных точках
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    //Умножаем сумму на шаг
    double result = h * sum;

    return result;
}
       
