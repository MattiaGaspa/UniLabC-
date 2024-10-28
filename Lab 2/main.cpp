#include <iostream>
#include "rational.h"

using namespace std;

int main(void) {
    const Rational number1 {};
    const Rational number2 {4};
    const Rational number3 {5, 4};
    int number4 = 2;

    cout << "sum rational + rational: " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << "sum rational + int: " << number1 << " + " << number4 << " = " << number1 + number4 << endl;
    cout << "sum int + rational: " << number4 << " + " << number2 << " = " << number4 + number2 << endl;

    cout << "sub: " << number1 << " - " << number2 << " = " << number1 - number2 << endl;

    cout << "mul: " << number1 << " * " << number2 << " = " << number1 * number2 << endl;

    cout << "div: " << number2 << " / " << number3 << " = " << number2 / number3 << endl;

    cout << "Testing ==: expected result (1, 0): (" << (number2 == number2) << ", " << (number2 == number3) << ")" << endl;
    cout << "Testing >: " << number1 << " > " << number2 << ": " << (number1 > number2) << endl;
    cout << "Testing <: " << number1 << " < " << number2 << ": " << (number1 < number2) << endl;

	return 0;
}
