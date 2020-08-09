#pragma once

class QObject;

class AutoMate
{
public:
	AutoMate();
	~AutoMate();

	void SetWindow(QObject* qObj);

	void SendTestCommand();

	void SendSnackCmd();
	void SendArmorCmd();
	void SendDoomsDayIICmd();
	void SendDoomsDayIIICmd();
	void SendLuckyWheelCmd(int millisec);
	void SendFingerPrintCmd();

private:
	const static char MAX_KEY_COUNT = 3;
	// Press down and up with interval; 3 key for most
	void SendKeyInput(WORD* keylist, char num);
	void KeyPress(WORD keyCode, bool bUp = false);
	void KeyDown(WORD keyCode);
	void KeyUp(WORD keyCode);
	void KeyClick(WORD keyCode);


	QObject* m_MainWindow;
};

