#include <iostream>
#include "MyVector.h"

using namespace std;

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
void MyVector::push_back();
void MyVector::pop_back();
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
