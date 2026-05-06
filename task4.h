#ifndef QUADRATIC_H
#define QUADRATIC_H

typedef struct {
	int count;
	double roots[2];
} QuadraticResult;

QuadraticResult solve_quadratic(double a, double b, double c);

#endif


