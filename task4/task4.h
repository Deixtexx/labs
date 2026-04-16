#ifndef QUADRATIC_H
#define QUADRATIC_H

// Структура для хранения результата квадратного уравнения
typedef struct {
    int count;      
    double roots[2];// массив для корней
} Roots;

// Возвращает структуру Roots с количеством и самими корнями
Roots solution(double a, double b, double c);

#endif