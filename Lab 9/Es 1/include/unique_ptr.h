#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

template<typename T>
class unique_ptr {
	T* elem{nullptr};
public:
	unique_ptr() = default;
	unique_ptr(T* elem);
	unique_ptr(const unique_ptr<T>& elem) = delete;
	~unique_ptr();
	
	T& operator=(const unique_ptr<T>& elem) = delete;
	T& operator*();
	T* operator->() const;
	T& operator*() const;
	
	T* release();
};

#include "unique_ptr.hpp"

#endif
