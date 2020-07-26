#include <Windows.h>
#include "AutoMate.h"
#include <QKeyEvent>
#include <QCoreApplication>

#include "mainwindow.h"

// 
static const int KEY_PRESS_INTERVAL = 300;

AutoMate::AutoMate():m_MainWindow(nullptr)
{

}


AutoMate::~AutoMate()
{
}

void AutoMate::SetWindow(QObject* qObj)
{
	m_MainWindow = qObj;
}

void AutoMate::SendSnackCmd()
{
	//keybd_event(VK_TAB, 0, 0, 0);
	//keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);

	//keybd_event(VK_LSHIFT, 0, 0, 0);
	//keybd_event('M', 0, 0, 0);

	//keybd_event(VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0);
	//keybd_event('M', 0, KEYEVENTF_KEYUP, 0);

	//// press down ctrl+A at the same time
	//keybd_event(VK_CONTROL, 0, 0, 0);
	//keybd_event('A', 0, 0, 0);

	//Sleep(KEY_PRESS_INTERVAL);

	//// press up ctrl+A at the same time
	//keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
	//keybd_event('A', 0, KEYEVENTF_KEYUP, 0);

	Sleep(KEY_PRESS_INTERVAL);

	int sleepTime = 20;
	WORD key = 'M';
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_RETURN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_RETURN;
	SendKeyInput(&key, 1);	
	Sleep(sleepTime);
	key = VK_RETURN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_ESCAPE;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_ESCAPE;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_ESCAPE;
	SendKeyInput(&key, 1);
}

void AutoMate::SendArmorCmd()
{
	//QKeyEvent keyTab(QEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier);
	//QKeyEvent keyM(QEvent::KeyPress, Qt::Key_M, Qt::ShiftModifier);

	//QCoreApplication::sendEvent(m_MainWindow, &keyTab);
	//QCoreApplication::sendEvent(m_MainWindow, &keyM);

	//WORD tab = VK_TAB;
	//SendKeyInput(&tab, 1);

	//WORD combine[2] = { VK_LSHIFT, 'K' };
	//SendKeyInput(combine, 2);

	//WORD combine2[2] = { VK_CONTROL, 'A' };
	//SendKeyInput(combine2, 2);

	Sleep(KEY_PRESS_INTERVAL);

	int sleepTime = 20;
	WORD key = 'M';
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_RETURN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_RETURN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_DOWN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_RETURN;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_ESCAPE;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_ESCAPE;
	SendKeyInput(&key, 1);
	Sleep(sleepTime);
	key = VK_ESCAPE;
	SendKeyInput(&key, 1);
}

void AutoMate::SendDoomsDayIICmd()
{
	Sleep(KEY_PRESS_INTERVAL);

	keybd_event(VK_SPACE, 0, 0, 0);
	Sleep(500);
	keybd_event('D', 0, 0, 0);
	Sleep(30);
	keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
	Sleep(10);
	keybd_event('D', 0, KEYEVENTF_KEYUP, 0);
}

void AutoMate::SendDoomsDayIIICmd()
{
	Sleep(KEY_PRESS_INTERVAL);

	keybd_event(VK_SPACE, 0, 0, 0);
	Sleep(60);
	keybd_event('D', 0, 0, 0);
	Sleep(20);
	keybd_event('S', 0, 0, 0);
	Sleep(20);
	keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
	Sleep(40);
	keybd_event('D', 0, KEYEVENTF_KEYUP, 0);
	Sleep(20);
	keybd_event('S', 0, KEYEVENTF_KEYUP, 0);
}

void AutoMate::SendLuckyWheelCmd(int millisec)
{
	Sleep(KEY_PRESS_INTERVAL);

	WORD key = 'E';
	SendKeyInput(&key, 1);

	Sleep(millisec);

	key = 'S';
	SendKeyInput(&key, 1);
}

void AutoMate::SendFingerPrintCmd()
{
}

void AutoMate::SendKeyInput(WORD* keylist, char num)
{
	if (num > MAX_KEY_COUNT)
	{
		num = MAX_KEY_COUNT;
	}
	// *2 for down and up
	INPUT input[MAX_KEY_COUNT*2];
	memset(input, 0, sizeof(input));

	for (char i = 0; i < num; i++)
	{
		input[i].type = input[i + num].type = INPUT_KEYBOARD;
		// set key code for down and up
		input[i].ki.wVk = input[i+num].ki.wVk = keylist[i];
		// Specifies various aspects of a keystroke.This member can be certain combinations of the following values.
		// make sure the key up
		input[i+num].ki.dwFlags = KEYEVENTF_KEYUP;
		// The time stamp for the event, in milliseconds. If this parameter is zero, the system will provide its own time stamp.
		input[i].ki.time = input[i + num].ki.time = 0;
	}

	SendInput(num*2, input, sizeof(INPUT));
}

