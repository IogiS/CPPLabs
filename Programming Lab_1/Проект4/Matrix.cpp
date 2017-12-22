#include "matrix.h"

#include <iostream>
#include <iomanip>



using namespace std;

Matrix::Matrix(int r, int c)
{
	this->r = r;
	this->c = c;
	pMatrix = new double*[r];

	for (int i(0); i < r; i++)
		*(pMatrix + i) = new double[c];
}

void Matrix::initialize()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			*(*(pMatrix + i) + j) = sin(i - j) + cos(i + j);
		}
	}

}

Vector* Matrix::make1DArray()
{
	Vector* tmp_vector = new Vector(r * c);

	int mark = 0;

	for (int i = 0; i < c; ++i)
	{
		for (int j = 0; j < r; ++j)
		{
			*(tmp_vector->getpArray() + mark++) = *(*(pMatrix + j) + i);
		}
	}
	return tmp_vector;
}

void Matrix::printMatrix()
{
	for (int i(0); i < r; i++)
	{
		for (int j(0); j < c; j++)
		{
			std::cout << std::setw(14) << std::setprecision(4) << *(*(pMatrix + i) + j);
		}
		std::cout << std::endl;
	}
	cout << "\n\n\n" << "=>" << "\n\n\n";
}

double Matrix::at(int i, int j) const
{
	return *(*(pMatrix + i) + j);
}

void Matrix::setAt(int i, int j, double value)
{
	*(*(pMatrix + i) + j) = value;
}


Matrix::~Matrix()
{
	for (int i(0); i < r; i++)
	{
		delete[] * (pMatrix + i);
	}
}
