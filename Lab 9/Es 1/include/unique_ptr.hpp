#ifndef UNIQUE_PTR_HPP
#define UNIQUE_PTR_HPP

#include "unique_ptr.h"

template<typename T>
unique_ptr<T>::unique_ptr(T* elem) {
	this->elem = elem;
}
template<typename T>
unique_ptr<T>::~unique_ptr() {
	delete this->elem;
}

template<typename T>
T& unique_ptr<T>::operator*() {
	return *this->elem;
}
template<typename T>
T* unique_ptr<T>::operator->() const{
	return this->elem;
}
template<typename T>
T& unique_ptr<T>::operator*() const {
	return *this->elem;
}

template<typename T>	
T* unique_ptr<T>::release() {
	T* temp = this->elem;
	this->elem = nullptr;
	return temp;
}

#endif
