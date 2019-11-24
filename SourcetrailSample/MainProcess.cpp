#include "MainProcess.h"
#include "Utility.h"

MainProcess::MainProcess():
	paramA(),
	paramB(),
	paramC()
{
}

int MainProcess::Run()
{
	return FuncA();
}

void MainProcess::SetParameter(int a, int b, int c)
{
	paramA = a;
	paramB = b;
	paramC = c;
}

int MainProcess::FuncA() const
{
	int list[4] = {};
	list[0] = paramA;
	list[1] = paramB;
	list[2] = paramC;

	return Utility::Sum(list, 3);
}
