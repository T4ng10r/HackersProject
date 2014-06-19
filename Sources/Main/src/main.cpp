#include <Tools/loggers.h>

int main(int argc, char *argv[])
{
	createLoggers();
	int iReturn(0);// = app.exec();
	destroyLoggers();
	return iReturn;
}
