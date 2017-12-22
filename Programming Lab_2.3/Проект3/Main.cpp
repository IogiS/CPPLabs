#include "Car.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <random>
#include "stdlib.h"
#include "Minibus.h"
#include "passengerCar.h"
#include "IFuelConsumer.h"

using namespace std;

int main()
{
	//Car cars[3];

	//cars[0].setfirm("Nissan");
	//cars[0].setmodel("GTR");
	//cars[0].setnomer("05AH05");
	//cars[0].setprice(10000);
	//cars[0].setmileage(30);
	//cars[0].setyear(2017);


	//cars[1].setfirm("Ford");
	//cars[1].setmodel("Focus");
	//cars[1].setnomer("05AH05");
	//cars[1].setprice(22000);
	//cars[1].setmileage(6300);
	//cars[1].setyear(2008);


	//cars[2].setfirm("Lada");
	//cars[2].setmodel("Vesta");
	//cars[2].setnomer("05AH05");
	//cars[2].setprice(14000);
	//cars[2].setmileage(10000);
	//cars[2].setyear(2009);

	//Car* newcar = new Car("Skoda", "Octavia", "05AH05", 16000, 2012, 11000);

	//Car* allcars[4] = { newcar, &cars[0], &cars[1], &cars[2] };

	//srand(time(NULL));
	//for (int i = 0; i < 4; i++)
	//{
	//	allcars[i]->setmileage(allcars[i]->getmileage() + (rand() % 3000 + 1500));
	//}

	//int cYear = 0;

	//for (int i = 0; i < 4; i++)
	//{
	//	if (i > cYear)
	//	{
	//		for (int j = 0; j < cYear; j++)
	//		{
	//			if (allcars[i]->getmileage() > allcars[j]->getmileage() && i != j)
	//			{
	//				std::swap(allcars[i], allcars[j]);
	//			}
	//		}

	//	}
	//	else
	//	{
	//		for (int j = cYear; j < 4; j++)
	//		{

	//			if (allcars[i]->getmileage() > allcars[j]->getmileage() && i != j)
	//			{
	//				std::swap(allcars[i], allcars[j]);
	//			}
	//		}
	//	}

	//	
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	if (allcars[i]->getyear() >= 2011)
	//	{
	//		std::swap(allcars[i], allcars[cYear++]);
	//	}
	//}



	//for (int i = 0; i < 4; i++)
	//{
	//	allcars[i]->print();
	//}
	


	Car* cars[4];

	cars[0] = new passengerCar();
	cars[1] = new passengerCar();
	cars[2] = new Minibus();
	cars[3] = new Minibus();

	cars[0]->setfirm("Nissan");
	cars[0]->setmodel("GTR");
	cars[0]->setnomer("05AH05");
	cars[0]->setprice(8000);
	cars[0]->setmileage(200);
	cars[0]->setyear(2017);
	cars[0]->setkoeff(0.12);


	cars[1]->setfirm("Skoda");
	cars[1]->setmodel("Octavia");
	cars[1]->setnomer("05AH05");
	cars[1]->setprice(5000);
	cars[1]->setmileage(300);
	cars[1]->setyear(2017);
	cars[1]->setkoeff(0.065);

	cars[2]->setfirm("Mercedes");
	cars[2]->setmodel("Sprinter");
	cars[2]->setnomer("05AH05");
	cars[2]->setprice(7000);
	cars[2]->setmileage(400);
	cars[2]->setyear(2017);
	cars[3]->setkoeff(0.13);

	cars[3]->setfirm("Citroen");
	cars[3]->setmodel("Jumper");
	cars[3]->setnomer("05AH05");
	cars[3]->setprice(10000);
	cars[3]->setmileage(500);
	cars[3]->setyear(2017);
	cars[3]->setkoeff(0.111);


	std::cout << cars[0]->getfirm()<< " "<< cars[0]->getmodel() << " fuelConsume: " << cars[0]->consume(10000) << endl
		<< cars[1]->getfirm()<< " " << cars[1]->getmodel() << " fuelConsume: " << cars[1]->consume(12000) << endl;
	std::cout << cars[2]->getfirm()<< " " << cars[2]->getmodel() << " fuelConsume: " << cars[2]->consume(9000) << endl
		<< cars[3]->getfirm() << " " << cars[3]->getmodel() << " fuelConsume: " << cars[3]->consume(13000) << endl;

	system("pause");
}