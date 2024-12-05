#ifndef VECTOR
#define VECTOR
#include <iostream>

using namespace std;

class MyVector {
	double* ptr{nullptr};
	int sz{0};
	int cp{0};
	
	void resize() {
		double* nptr = new double[cp*2];
		copy(ptr, ptr+cp, nptr);
		delete[] ptr;
		ptr = nptr;
		cp *= 2;
	}
	
	public:
		class IndexOutOfBound {};
		
		MyVector() : ptr{new double[10]}, sz {0}, cp{10} {} ;
		explicit MyVector(int n) : ptr{new double[2*n]}, sz {n}, cp{2*n} {
			for (int i = 0; i < 2*n; i++)
				ptr[i] = 0;
		};
		MyVector(initializer_list<double> a);
		MyVector(const MyVector& a);
		MyVector(MyVector&& a);
		MyVector& operator=(const MyVector& a);
		MyVector& operator=(MyVector&& a);
		~MyVector() { delete[] ptr; };
		
		int size() const { return sz; };
		int capacity() const { return cp; };
		void reserve(int cp) {
			if (this->cp <= cp) this->cp = cp;
		}
		
		double& operator[](int index);
		double operator[](int index) const;
		
		double& at(int index);
		double at(int index) const;
		void push_back();
		void pop_back();
		double safe_set(int index, const double value);
		double safe_get(int index) const;
};
ostream& operator<<(ostream& stream, MyVector& vector);

#endif
