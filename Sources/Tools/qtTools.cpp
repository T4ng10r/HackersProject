#include <Tools/qtTools.h>
#include <Tools/loggers.h>

#ifdef QT
void logConnection(const QString & strClassName,const QString &strConnDesc,bool bResult)
{
	QString strDebug = QString("%1: Connection %2").arg(strClassName).arg(strConnDesc);
	if (bResult)
	{
		strDebug+=" SUCCESS";	
		printLog(eDebugLogLevel, eSlots, strDebug);
	}
	else
	{
		strDebug+=" --FAIL--";
		printLog(eWarningLogLevel, eSlots, strDebug);
	}
	Q_ASSERT_X(bResult==true,strClassName.toLatin1(),strDebug.toLatin1());
}
#endif
