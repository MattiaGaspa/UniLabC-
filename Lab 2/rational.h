#ifndef RATIONAL
#define RATIONAL

#include <iostream>
using namespace std;

class Rational {
    public:
        class ZeroAsDenominator{};

        Rational(void) = default;
        Rational(int n) : numerator{n}, denominator{1} {};
        Rational(int n, int d) : numerator{n}, denominator{d} {
            if (denominator == 0)
                throw ZeroAsDenominator();
        };

        int getNumerator(void) const {
            return numerator;
        }
        int getDenominator(void) const {
            return denominator;
        }

        double to_double(const Rational& num1) const {
            return static_cast<double>(num1.getNumerator())/static_cast<double>(num1.getDenominator());
        }

        Rational& operator=(const Rational& num1);
    private:
        int numerator{0};
        int denominator{1};
};

Rational operator+(const Rational& num1, const Rational& num2);
Rational operator+(const Rational& num1, const int& num2);
Rational operator+(const int& num1, const Rational& num2);

Rational operator-(const Rational& num1, const Rational& num2);

Rational operator*(const Rational& num1, const Rational& num2);

Rational operator/(const Rational& num1, const Rational& num2);

bool operator==(const Rational& num1, const Rational& num2);
bool operator>(const Rational& num1, const Rational& num2);
bool operator<(const Rational& num1, const Rational& num2);

ostream& operator<<(ostream& stream, const Rational& num);

#endif