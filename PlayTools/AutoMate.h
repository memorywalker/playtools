#pragma once

class QObject;

class AutoMate
{
public:
	AutoMate();
	~AutoMate();

	void SetWindow(QObject* qObj);

	void SendSnackCmd();
	void SendArmorCmd();
	void SendSoloCmd();
	void SendDisconnectProcessCmd();
	void SendFingerPrintCmd();

private:
	const static char MAX_KEY_COUNT = 3;
	// Press down and up with interval; 3 key for most
	void SendKeyInput(WORD* keylist, char num);

	QObject* m_MainWindow;
};

