#include <Tools/loggers.h>

namespace gui {
void initialize_gui();
}

int main(int argc, char *argv[])
{
	createLoggers();
	int iReturn(0);// = app.exec();
	gui::initialize_gui();
	destroyLoggers();
	return iReturn;
}
