#include "matrix.h"
#include "vector.h"

#include <stdlib.h>
#include <iostream>

int main()
{
	Matrix* matrix = new Matrix(5, 3);
	matrix->initialize();
	matrix->printMatrix();

	Vector* vector = matrix->make1DArray();
	vector->printVector();


	delete vector;
	delete matrix;

	std::cout << std::endl;
	system("pause");
}