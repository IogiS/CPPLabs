#include "ExpressionEvaluator.h"

#include "Summator.h"
#include "Subtractor.h"
#include "CustomExpressionEvaluator.h"
#include "ILoggable.h"
#include "IShuffle.h"

#include <iostream>

int main()
{
	ExpressionEvaluator* evaluators[3];

	evaluators[0] = new Subtractor();
	double subtractor_operands[] = { 10.5, 2.5, -3, 1.5 };
	evaluators[0]->setOperands(subtractor_operands, 4);
	

	evaluators[1] = new CustomExpressionEvaluator();
	double custom_operands[] = { 5, 15, -8, 1, 2, 3 };
	evaluators[1]->setOperands(custom_operands, 6);

	evaluators[2] = new Summator();
	evaluators[2]->setOperand(0, 1.5);
	evaluators[2]->setOperand(1, -4);
	evaluators[2]->setOperand(2, 2.5);

	

	for (int i = 0; i < 3; i++)
	{
		evaluators[i]->logToFile("Проект4.log");
		evaluators[i]->logToScreen();
		std::cout << "\nResult: " << evaluators[i]->calculate() << std::endl << std::endl;
	}

	for (int i = 0; i < 3; i++)
	{
		IShuffle* loga = dynamic_cast<IShuffle*>(evaluators[i]);

		if (loga)
		{
			loga->shuffle();
			evaluators[i]->logToScreen();
			std::cout << "\nResult: " << evaluators[i]->calculate() << std::endl << std::endl;
		}
	} 



	delete evaluators[0];
	delete evaluators[1];
	delete evaluators[2];

	//return 0;
	system("pause");
}