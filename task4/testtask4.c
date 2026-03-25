#include <stdio.h>
#include "task4.h"

// Печать корней в формате [x1, x2]
void print_roots(Roots r) {
    printf("[");
    for (int i = 0; i < r.count; i++) {
        double x = r.roots[i];

        // убираем -0
        if (x == 0.0) x = 0.0; 

        printf("%.6g", x);

        if (i < r.count - 1)
            printf(", ");
    }
    printf("]\n");
}

int main() {
    // Проверка работы функции
    print_roots(solution(1, 0, -1));
    print_roots(solution(1, 0, 0));
    print_roots(solution(1, 0, 1));
    print_roots(solution(1, 0, -1e-7));
    print_roots(solution(1, -1e10, -1));
    print_roots(solution(1, 0, -1e-8));

    return 0;
}