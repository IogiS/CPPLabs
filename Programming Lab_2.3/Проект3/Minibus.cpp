#include "Minibus.h"

Minibus::Minibus()
{

}

//passengerCar::passengerCar(char* inner_firm, char* inner_model, char* inner_nomer, double inner_price, int inner_year, int inner_mileage)
//{
//	firm = inner_firm;
//	model = inner_model;
//	nomer = inner_nomer;
//	price = inner_price;
//	dt.tm_year = inner_year;
//	mileage = inner_mileage;
//
//}

Minibus::~Minibus()
{
}

char* Minibus::getfirm()
{
	return firm;
}

char* Minibus::getmodel()
{
	return model;
}

char* Minibus::getnomer()
{
	return nomer;
}

double Minibus::getprice()
{
	return price;
}

int Minibus::getyear()
{
	return dt.tm_year;
}

int Minibus::getmileage()
{
	return mileage;
}

void Minibus::setfirm(char* inner_firm)
{
	firm = inner_firm;
}

void Minibus::setmodel(char* inner_model)
{
	model = inner_model;
}

void Minibus::setnomer(char* inner_nomer)
{
	nomer = inner_nomer;
}

void Minibus::setprice(double inner_price)
{
	price = inner_price;
}

void Minibus::setyear(int inner_year)
{
	dt.tm_year = inner_year;
}

void Minibus::setkoeff(double inner_koeff)
{
	koeff = inner_koeff;
}

double Minibus::getkoeff()
{
	return koeff;
}

double Minibus::consume(double kilometres)
{
	double FuelConsumer = 0;

	FuelConsumer = kilometres * koeff;
	return (int)FuelConsumer;
}

void Minibus::setmileage(int inner_miliage)
{
	mileage = inner_miliage;
}

