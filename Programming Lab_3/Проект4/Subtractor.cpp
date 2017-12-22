#include "Subtractor.h"

#include <iostream>
#include <fstream>
#include <ctime>
#include <random>


Subtractor::Subtractor()
{
}


Subtractor::~Subtractor()
{
}

double Subtractor::calculate()
{
	double* tmp_pArray = getpArray();
	int tmp_operandlenght = getoperandsLenght();
	double answer = *tmp_pArray;

	for (int i = 1; i < tmp_operandlenght; i++)
	{
		answer -= *(tmp_pArray + i);
	}

	return answer;
}

void Subtractor::logToScreen()
{
	int tmp_operandlenght = getoperandsLenght();
	double* tmp_pArray = getpArray();
	for (int i = 0; i < tmp_operandlenght; i++)
	{
		if ((i + 1) == tmp_operandlenght)
		{
			std::cout << *(tmp_pArray + i);
		}
		else
		{
			std::cout << *(tmp_pArray + i) <<" , ";
		}
		
	}

	std::cout << std::endl;

	for (int i = 0; i < tmp_operandlenght; i++)
	{
		if (*(tmp_pArray + i) >= 0)
			std::cout << *(tmp_pArray + i);
		else 
		{
			std::cout << "(" << *(tmp_pArray + i) << ")";
		}
		if (tmp_operandlenght != i + 1)
			std::cout << " minus ";
	}
}

void Subtractor::logToFile(const std::string& filename)
{
	int tmp_operandlenght = getoperandsLenght();
	double* tmp_pArray = getpArray();

	std::fstream fout(filename, std::ios::app);

	for (int i = 0; i < tmp_operandlenght; i++)
	{
		if ((i + 1) == tmp_operandlenght)
		{
			fout << *(tmp_pArray + i);
		}
		else
		{
			fout << *(tmp_pArray + i) << " , ";
		}

	}
	fout << std::endl;
	for (int i = 0; i < tmp_operandlenght; i++)
	{
		if (*(tmp_pArray + i) >= 0)
			fout << *(tmp_pArray + i);
		else
		{
			fout << "(" << *(tmp_pArray + i) << ")";
		}
		if (tmp_operandlenght != i + 1)
			fout << " minus ";
	}
	fout << std::endl << std::endl;
	fout.close();
}

void Subtractor::shuffle()
{

	int len = getLenght();
	int olen = getoperandsLenght();
	double* pArray = getpArray();
	for (int k = 0; k < olen - 1; k++)
	{
		for (int j = k + 1; j < olen; j++)
		{
			if (*(pArray + k) < *(pArray + j))
				std::swap(*(pArray + k), *(pArray + j));
		}
	}
}


void Subtractor::shuffle(size_t i, size_t j)
{
	double* pArray = getpArray();
	std::swap(*(pArray + i), *(pArray + j));
}