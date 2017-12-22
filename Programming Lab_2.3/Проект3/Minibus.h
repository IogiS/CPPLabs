#pragma once

#include "Car.h"
#include "IFuelConsumer.h"

class Minibus : public Car , public IFuelConsumer
{
private:
	char* firm;
	char* model;
	char* nomer;
	double price;
	tm dt;
	int mileage;
public:
	char* getfirm();
	char* getmodel();
	char* getnomer();
	double getprice();
	int getyear();
	int getmileage();

	int FuelConsumer;
	double getkoeff();
	double koeff;
	double consume(double kilometres);
	void setkoeff(double inner_koeff);
	void setfirm(char* inner_firm);
	void setmodel(char* inner_model);
	void setnomer(char* inner_nomer);
	void setprice(double inner_price);
	void setyear(int inner_year);
	void setmileage(int inner_miliage);


	Minibus();
	~Minibus();
};
