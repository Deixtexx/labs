#include "task4.h"
#include <math.h>

QuadraticResult solve_quadratic(double a, double b, double c) {
    QuadraticResult res = { 0, {0.0, 0.0} };

    if (fabs(a) < 1e-15) {
        res.count = -1;
        return res;
    }

    double d = b * b - 4 * a * c;

    if (d < 1e-7 && d > -1e-7) {
        res.count = 1;
        res.roots[0] = -b / (2 * a);
        if (fabs(res.roots[0]) < 1e-12)
            res.roots[0] = 0.0;
    }
    else if (d > 0) {
        res.count = 2;
        double sd = sqrt(d);
        double q = -0.5 * (b + (b >= 0 ? 1.0 : -1.0) * sd);
        res.roots[0] = q / a;
        res.roots[1] = c / q;

        if (res.roots[0] > res.roots[1]) {
            double tmp = res.roots[0];
            res.roots[0] = res.roots[1];
            res.roots[1] = tmp;
        }
    }
    else {
        res.count = 0;
    }

    return res;
}

