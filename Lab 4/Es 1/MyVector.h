#ifndef VECTOR
#define VECTOR
#include <iostream>

using namespace std;

class MyVector {
	double* ptr{nullptr};
	int sz{0};
	
	public:
		class IndexOutOfBound {};
		
		MyVector() = default;
		MyVector(int n) : ptr{new double[n]}, sz {n} {
			for (int i = 0; i < n; i++)
				ptr[i] = 0;
		};
		~MyVector() { delete[] ptr; };
		
		int size() const { return sz; };
		
		double& operator[](int index);
		double operator[](int index) const;
		
		double safe_set(int index, const double value);
		double safe_get(int index) const;
};
ostream& operator<<(ostream& stream, MyVector& vector);

#endif
