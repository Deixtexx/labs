#include "task4.h"
#include <stdio.h>

int main() {
	double a, b, c;
	QuadraticResult r;

	a = 0;
	b = 5;
	c = 10;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%g, c=%g -> Error\n", a, b, c);

	a = 1;
	b = 0;
	c = -1;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%g, c=%g -> [%g, %g]\n", a, b, c, r.roots[0], r.roots[1]);

	a = 1;
	b = 0;
	c = 0;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%g, c=%g -> [%g]\n", a, b, c, r.roots[0]);

	a = 1;
	b = 0;
	c = 1;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%g, c=%g -> []\n", a, b, c);

	a = 1;
	b = 0;
	c = -1e-7;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%g, c=%e -> [%.4f, %.4f]\n", a, b, c, r.roots[0], r.roots[1]);

	a = 1;
	b = -1e10;
	c = -1;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%e, c=%g -> [%.11g, %.11g]\n", a, b, c, r.roots[0], r.roots[1]);

	a = 1;
	b = 0;
	c = -1e-8;
	r = solve_quadratic(a, b, c);
	printf("a=%g, b=%g, c=%e -> [%.7g]\n", a, b, c, r.roots[0]);

	return 0;
}

