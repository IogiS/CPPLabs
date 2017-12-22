#pragma once

#include "vector.h"

class Vector;

class Matrix
{
private:
	double** pMatrix;
	int r;
	int c;
public:

	Matrix(int r, int c);
	~Matrix();

	void initialize();
	Vector* make1DArray();
	double at(int i, int j) const;
	void setAt(int i, int j, double value);


	void printMatrix();

};

