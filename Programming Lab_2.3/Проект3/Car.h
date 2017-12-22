#pragma once

#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

class Car
{
private :
	char* firm;
	char* model;
	char* nomer;
	double price;
	tm dt;
	

public:
	int mileage;
	char* getfirm();
	char* getmodel();
	char* getnomer();
	double getprice();
	int getyear();
	int getmileage();
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
	void print();
	
	std::string getuniquenomer();
	void serialize();
	void serialize(std::string path);
	void deserialize();
	void deserialize(std::string path);

	void splitset(char* str);
	char getsplitstr(char* start, int count);

	Car();
	Car(char* inner_firm, char* inner_model, char* inner_nomer, double inner_price, int inner_year, int inner_miliage);
	~Car();
};


