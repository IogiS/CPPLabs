#include "passengerCar.h"

passengerCar::passengerCar()
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

passengerCar::~passengerCar()
{
}

char* passengerCar::getfirm()
{
	return firm;
}

char* passengerCar::getmodel()
{
	return model;
}

char* passengerCar::getnomer()
{
	return nomer;
}

double passengerCar::getprice()
{
	return price;
}

int passengerCar::getyear()
{
	return dt.tm_year;
}

int passengerCar::getmileage()
{
	return mileage;
}

void passengerCar::setfirm(char* inner_firm)
{
	firm = inner_firm;
}

void passengerCar::setmodel(char* inner_model)
{
	model = inner_model;
}

void passengerCar::setnomer(char* inner_nomer)
{
	nomer = inner_nomer;
}

void passengerCar::setprice(double inner_price)
{
	price = inner_price;
}

void passengerCar::setyear(int inner_year)
{
	dt.tm_year = inner_year;
}

void passengerCar::setkoeff(double inner_koeff)
{
	koeff = inner_koeff;
}

double passengerCar::getkoeff()
{
	return koeff;
}

double passengerCar::consume(double kilometres)
{
	double FuelConsumer = 0;

	FuelConsumer = kilometres * koeff;
	return (int)FuelConsumer;
}

void passengerCar::setmileage(int inner_miliage)
{
	mileage = inner_miliage;
}

