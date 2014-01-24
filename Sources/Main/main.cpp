#include <QApplication>
#include <Tools/loggers.h>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.setApplicationName("HackersProject");
	app.setOrganizationName("T4ng10r");

	createLoggers();
	int iReturn = app.exec();
	destroyLoggers();
	return iReturn;
}
