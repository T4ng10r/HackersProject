#include <QtTest/QtTest>
#include <TestRunner.h>

class RunProgressTest : public QObject
{
    Q_OBJECT
	private Q_SLOTS:
	void init();
	void cleanup();
};

DECLARE_TEST(RunProgressTest)

