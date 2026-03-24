#include <stdio.h>
#include "integral.h"

//Тестовая функция - парабола

double square(double x) {
    return x * x;
}

int main() {
    //Вычисляем интеграл x^2 от 0 до 1 
    double result = integral(square, 0.0, 1.0, 10000);

    printf(result);
    printf("Ожидалось - 0.33333\n");

    if (result > 0.3333 && result < 0.3334) {
        printf("Тест пройден");
    }
    else {
        printf("Тест не пройден");
    }

    return 0;
}
    


