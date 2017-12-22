#include "Car.h"
#include "Minibus.h"
#include "passengerCar.h"
#include "IFuelConsumer.h"


Car::Car()
{

}

Car::Car(char* inner_firm, char* inner_model, char* inner_nomer, double inner_price, int inner_year, int inner_mileage)
{
	firm = inner_firm;
	model = inner_model;
	nomer = inner_nomer;
	price = inner_price;
	dt.tm_year = inner_year;
	mileage = inner_mileage;

}

Car::~Car()
{
}

char* Car::getfirm()
{
	return firm;
}

char* Car::getmodel()
{
	return model;
}

char* Car::getnomer()
{
	return nomer;
}

double Car::getprice()
{
	return price;
}

int Car::getyear()
{
	return dt.tm_year;
}

int Car::getmileage()
{
	return mileage;
}

void Car::setfirm(char* inner_firm)
{
	firm = inner_firm;
}

void Car::setmodel(char* inner_model)
{
	model = inner_model;
}

void Car::setnomer(char* inner_nomer)
{
	nomer = inner_nomer;
}

void Car::setprice(double inner_price)
{
	price = inner_price;
}

void Car::setyear(int inner_year)
{
	dt.tm_year = inner_year;
}

void Car::setmileage(int inner_miliage)
{
	mileage = inner_miliage;
}

void Car::print()
{
	std::cout
		<< getfirm() << "\t" << getmodel() << "\t" << getnomer() << "\t"
		<< getmileage() << "\t" << getprice() << "\t" << getyear() << std::endl;
}

std::string Car::getuniquenomer()
{
	std::ostringstream ss;
	ss << nomer;
	return ss.str();
}

void Car::serialize()
{
	std::string path = "data" + getuniquenomer() + ".txt";
	std::ofstream fout(path, std::ios_base::trunc);
	fout << firm << ";" << model << ";" << nomer << ";"
		<< price << ";" << dt.tm_year << ";" << mileage << std::endl;
	fout.close();
}

void Car::serialize(std::string path)
{
	std::ofstream fout(path, std::ios_base::out, std::ios_base::trunc);
	fout << firm << ";" << model << ";" << nomer << ";"
		<< price << ";" << dt.tm_year << ";" << mileage << std::endl;
	fout.close();
}

void Car::deserialize()
{
	std::string path = "data" + getuniquenomer() + ".txt";
	std::ifstream fin(path, std::ios_base::in);
	char s[255];
	fin.getline(s, 255);
	splitset(s);
}

void Car::deserialize(std::string path)
{
	std::ifstream fin(path, std::ios_base::in);
	char s[255];
	fin.getline(s, 255);
	splitset(s);
}

void Car::splitset(char* str)
{
	char splitchar = ';';
	char* pointStart = str;
	char* pointNow = str;
	char* pointEnd = str;
	int countMark = 0;

	for (int i = 0; i < 255; i++)
	{
		if (*(pointEnd++) == splitchar)
		{
			switch (countMark++)
			{
			case 0:
				setfirm((char*)getsplitstr(pointNow, (pointEnd - pointNow)));
				break;
			case 1:
				setmodel((char*)(getsplitstr(pointNow, (pointEnd - pointNow))));
				break;
			case 2:
				setnomer((char*)getsplitstr(pointNow, (pointEnd - pointNow)));
				break;
			case 3:
				setprice((double)getsplitstr(pointNow, (pointEnd - pointNow)));
				break;
			case 4:
				setyear((int)getsplitstr(pointNow, (pointEnd - pointNow)));
				break;
			case 5:
				setmileage((int)getsplitstr(pointNow, (pointEnd - pointNow)));
				break;
			default:
				break;
			}
			pointNow = pointEnd;
		}
	}
}

char Car::getsplitstr(char* start, int count)
{
	char return_tmp[255];
	for (int i = 0; i < count; i++)
	{
		return_tmp[i] = *(start + i);
	}
	return_tmp[count - 1] = '\0';
	return *return_tmp;
}

void Car::setkoeff(double inner_koeff)
{
	koeff = inner_koeff;
}

double Car::getkoeff()
{
	return koeff;
}

double Car::consume(double kilometres)
	{
	double FuelConsumer = 0;

	FuelConsumer = kilometres * koeff;
	return (int)FuelConsumer;
    }