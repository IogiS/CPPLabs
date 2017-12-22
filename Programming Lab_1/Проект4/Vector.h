#pragma once

#include "matrix.h"

class Matrix;

class Vector
{
private:
	int nLenght;
	double* pArray;
public:
	Vector();
	Vector(int lenght);
	~Vector();

	double* getpArray();

	Vector& operator++();
	Vector& operator--();
	Vector& operator++(int);
	Vector& operator--(int);
	double operator[](int index);

	void printVector();


};

