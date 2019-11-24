#include "MainProcess.h"
#include <stdio.h>

int main(void) {

	auto app = MainProcess();
	app.SetParameter(1, 2, 3);
	int result = app.Run();

	printf("result = %d", result);

	return 0;
}