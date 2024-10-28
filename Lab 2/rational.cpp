#include "rational.h"

double to_double(const Rational& num1) {
    double numerator = num1.getNumerator();
    double denominator = num1.getDenominator();
    return numerator/denominator;
}

Rational& Rational::operator=(const Rational& num1) {
    numerator = num1.numerator;
    denominator = num1.denominator;

    return *this;
}

Rational operator+(const Rational& num1, const Rational& num2) {
    const int denominator = num1.getDenominator() * num2.getDenominator();
    const int numerator = num1.getNumerator() * num2.getDenominator() + num2.getNumerator() * num1.getDenominator();

    return Rational{numerator, denominator};
}
Rational operator+(const Rational& num1, const int& num2) {
    const int denominator = num1.getDenominator();
    const int numerator = num1.getNumerator() + num2 * num1.getDenominator();
    
    return Rational {numerator, denominator};
}
Rational operator+(const int& num1, const Rational& num2) {
    return num2 + num1;
}

Rational operator-(const Rational& num1, const Rational& num2) {
    const int denominator = num1.getDenominator() * num2.getDenominator();
    const int numerator = num1.getNumerator() * num2.getDenominator() - num2.getNumerator() * num1.getDenominator();

    return Rational{numerator, denominator};
}

Rational operator*(const Rational& num1, const Rational& num2) {
    const int denominator = num1.getDenominator() * num2.getDenominator();
    const int numerator = num1.getNumerator() * num2.getNumerator();

    return Rational {numerator, denominator};
}

Rational operator/(const Rational& num1, const Rational& num2) {
    const int numerator = num1.getNumerator() * num2.getDenominator();
    const int denominator = num1.getDenominator() * num2.getNumerator();

    return Rational {numerator, denominator};
}

bool operator==(const Rational& num1, const Rational& num2) {
    if (to_double(num1) == to_double(num2)) return true;
    return false;    
}
bool operator>(const Rational& num1, const Rational& num2) {
    if (to_double(num1) > to_double(num2)) return true;
    return false; 
}
bool operator<(const Rational& num1, const Rational& num2) {
    if (to_double(num1) < to_double(num2)) return true;
    return false; 
}

ostream& operator<<(ostream& stream, const Rational& num) {
    stream << num.getNumerator() << "/" << num.getDenominator();
    return stream;
}