#include <iostream>
#include "MyVector.h"

using namespace std;

MyVector::MyVector(initializer_list<double> a) : sz{static_cast<int>(a.size())}, cp{sz * 2} {
	ptr = new double[cp];
	copy(a.begin(), a.end(), ptr);
	for (int i=a.size(); i < a.size()*2; i++)
		ptr[i] = 0;
}
MyVector::MyVector(const MyVector& a) : ptr{new double[a.cp]}, cp{a.cp}, sz{a.sz} {
	copy(a.ptr, a.ptr+a.cp, ptr);
}
MyVector::MyVector(MyVector&& a) : ptr{a.ptr}, sz{a.sz}, cp{a.cp} {
	a.ptr = nullptr;
	a.sz = 0;
	a.cp = 0;
}
MyVector& MyVector::operator=(const MyVector& a) {
	double* tmp = new double[a.cp];
	copy(a.ptr, a.ptr+a.cp, ptr);
	ptr = tmp;
	sz = a.sz;
	cp = a.cp;
	return *this;
}
MyVector& MyVector::operator=(MyVector&& a) {
	delete[] ptr;
	ptr = a.ptr;
	sz = a.sz;
	cp = a.cp;
	a.ptr = nullptr;
	a.sz = 0;
	a.cp = 0;
	return *this;
}
double& MyVector::operator[](int index) {
	if ((index >= 0) || (index < sz))
		return ptr[index];
	else
		throw IndexOutOfBound();
}

double MyVector::operator[](int index) const {
	if ((index >= 0) || (index < sz))
		return ptr[index];
	else 
		throw IndexOutOfBound();
}

double& MyVector::at(int index) {
	return ptr[index];
}
double MyVector::at(int index) const {
	return ptr[index];
}
void MyVector::push_back() {
	if (sz == cp)
		resize();
	sz++;
}
void MyVector::pop_back() {
	if (sz > 0) sz--;
}
double MyVector::safe_set(int index, const double value) {
	if (index >= sz) throw IndexOutOfBound();
	ptr[index] = value;
	return value;
}
double MyVector::safe_get(int index) const {
	return ptr[index];
}

ostream& operator<<(ostream& stream, MyVector& vector) {
	if (vector.size() == 0) return stream;
	stream << "[";
	for (int i = 0; i < vector.size(); i++) {
		stream << vector[i] << ", ";
	}
	stream << "\b\b]\n";
	return stream;
}
