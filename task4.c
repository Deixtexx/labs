#include "task4.h"
#include <math.h>
#include <float.h>

#define EPS 1e-7

QuadraticResult solve_quadratic(double a, double b, double c) {
    QuadraticResult res = { 0, {0.0, 0.0} };

    if (fabs(a) < DBL_EPSILON) {
        res.count = -1; 
        return res;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > EPS) {
        res.count = 2;
        res.roots[0] = (-b - sqrt(discriminant)) / (2 * a);
        res.roots[1] = (-b + sqrt(discriminant)) / (2 * a);

        if (res.roots[0] > res.roots[1]) {
            double tmp = res.roots[0];
            res.roots[0] = res.roots[1];
            res.roots[1] = tmp;
        }
    }
    else if (discriminant > -EPS) {
        res.count = 1;
        res.roots[0] = -b / (2 * a);
        if (fabs(res.roots[0]) < EPS) res.roots[0] = 0.0;
    }
    else {
        res.count = 0;
    }

    return res;
}
