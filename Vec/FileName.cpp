#include "FileName.h"
#include <math.h>
#include <iostream>
using namespace std;

void Triangle::SetA(short newA) {
	a = newA;
}
void Triangle::SetB(short newB) {
	b = newB;
}
void Triangle::SetC(short newC) {
	c = newC;
}
void Triangle::SetAlpha(short newAlpha) {
	alpha = newAlpha;
}
void Triangle::SetBeta(short newBeta) {
	beta = newBeta;
}
void Triangle::SetGamma(short newGamma) {
	gamma = newGamma;
}
double Triangle::area(double a, double b, double c) const {
	double s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}