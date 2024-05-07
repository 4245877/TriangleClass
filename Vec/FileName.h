#pragma once
#include <math.h>

class Triangle
{
private:
    double a, b, c;
    double alpha, beta, gamma;

public:
    Triangle(double a, double b, double c, double alpha, double beta, double gamma)
        : a(a), b(b), c(c), alpha(alpha), beta(beta), gamma(gamma) {}


    double GetA() const { return a; }
    double GetB() const { return b; }
    double GetC() const { return c; }
    double GetAlpha() const { return alpha; }
    double GetBeta()  const { return beta;  }
    double GetGamma() const { return gamma; }


    void SetA(short newA);
    void SetB(short newB);
    void SetC(short newC);
    void SetAlpha(short newAlpha);
    void SetBeta(short newBeta);
    void SetGamma(short newGamma);

    double area(double a, double b, double c) const;
    double perimeter() const { return a + b + c; }
    double heightA(double a, double b, double c) const { return 2.0 * area(a, b , c) / a; }
    double heightB(double a, double b, double c) const { return 2.0 * area(a, b, c) / b; }
    double heightC(double a, double b, double c) const { return 2.0 * area(a, b, c) / c; }


};


