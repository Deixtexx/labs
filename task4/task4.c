#include <math.h>
#include "task4.h"

// Функция решения квадратного уравнения
Roots solution(double a, double b, double c) {
    Roots result;
    result.count = 0;

    // Если a = 0 — это не квадратное уравнение
    if (a == 0.0) {
        return result;
    }

    // Вычисляем дискриминант
    double d = b * b - 4 * a * c;

    if (d < 0.0) {
        return result;
    }

    // Малый дискриминант считаем нулевым (один корень)
    if (d <= 4e-8) {
        result.count = 1;
        result.roots[0] = -b / (2 * a);

        // убираем -0
        if (result.roots[0] == 0.0)
            result.roots[0] = 0.0;

        return result;
    }

    double sqrt_d = sqrt(d);

    // Формула для вычисления корней
    double q = -0.5 * (b + (b > 0 ? sqrt_d : -sqrt_d));
    double x1 = q / a;
    double x2 = c / q;

    if (x1 > x2) {
        double tmp = x1;
        x1 = x2;
        x2 = tmp;
    }

    // убираем -0
    if (x1 == 0.0) x1 = 0.0;
    if (x2 == 0.0) x2 = 0.0;

    result.count = 2;
    result.roots[0] = x1;
    result.roots[1] = x2;

    return result;
}