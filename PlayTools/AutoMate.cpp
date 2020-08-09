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

	WORD keySeq[] = { 'M', VK_DOWN, VK_DOWN, VK_RETURN, VK_DOWN, VK_DOWN, VK_RETURN, VK_RETURN, VK_ESCAPE, VK_ESCAPE, VK_ESCAPE };

	for (size_t i = 0; i < ARRAYSIZE(keySeq); i++)
	{
		KeyClick(keySeq[i]);
		Sleep(50);
	}	
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

	WORD keySeq[] = { 'M', VK_DOWN, VK_DOWN, VK_RETURN, VK_DOWN, VK_RETURN, 
		VK_DOWN,  VK_DOWN, VK_DOWN, VK_DOWN, VK_RETURN, VK_ESCAPE, VK_ESCAPE, VK_ESCAPE };

	for (size_t i = 0; i < ARRAYSIZE(keySeq); i++)
	{
		KeyClick(keySeq[i]);
		Sleep(50);
	}
}

void AutoMate::SendDoomsDayIICmd()
{
	Sleep(KEY_PRESS_INTERVAL);

	KeyDown(VK_SPACE);
	Sleep(500);
	KeyDown('D');
	Sleep(30);
	KeyUp(VK_SPACE);
	Sleep(10);
	KeyUp('D');
}

void AutoMate::SendDoomsDayIIICmd()
{
	Sleep(KEY_PRESS_INTERVAL);

	KeyDown(VK_SPACE);
	Sleep(60);
	KeyDown('D');
	Sleep(20);
	KeyDown('S');
	Sleep(20);
	KeyUp(VK_SPACE);
	Sleep(40);
	KeyUp('D');
	Sleep(20);
	KeyUp('S');
}

void AutoMate::SendLuckyWheelCmd(int millisec)
{
	Sleep(KEY_PRESS_INTERVAL);

	KeyClick('E');
	Sleep(millisec);
	KeyClick('S');
}

void AutoMate::SendFingerPrintCmd()
{
}

void AutoMate::KeyPress(WORD keyCode, bool bUp /*= false*/)
{
	INPUT input;
	memset(&input, 0, sizeof(input));

	input.type = INPUT_KEYBOARD;
	input.ki.dwExtraInfo = GetMessageExtraInfo();
	// for DirectInput App, use scan code instead of Virtual code
	input.ki.wScan = static_cast<WORD>(MapVirtualKeyEx(keyCode, MAPVK_VK_TO_VSC, GetKeyboardLayout(0)));
	// Specifies various aspects of a keystroke.This member can be certain combinations of the following values.
	DWORD dwFlags = KEYEVENTF_SCANCODE;
	if (bUp)
	{
		dwFlags |= KEYEVENTF_KEYUP;
	}
	if (VK_LEFT<=keyCode&&keyCode<=VK_DOWN)
	{
		dwFlags |= KEYEVENTF_EXTENDEDKEY;
	}
	input.ki.dwFlags = dwFlags;
	// The time stamp for the event, in milliseconds. If this parameter is zero, the system will provide its own time stamp.
	input.ki.time = 0;

	SendInput(1, &input, sizeof(INPUT));
}

void AutoMate::KeyDown(WORD keyCode)
{
	KeyPress(keyCode);
}

void AutoMate::KeyUp(WORD keyCode)
{
	KeyPress(keyCode, true);
}

void AutoMate::KeyClick(WORD keyCode)
{
	KeyPress(keyCode);
	Sleep(100);
	KeyPress(keyCode, true);
}

void AutoMate::SendTestCommand()
{
	Sleep(KEY_PRESS_INTERVAL);

	int sleepTime = 100;

	WORD key = 'W';
	for (int i = 0; i < 5; i++)
	{
		KeyPress(key);
		Sleep(sleepTime);
		KeyPress(key, true);
		Sleep(sleepTime);
	}
	
	key = 'A';
	KeyPress(key);
	Sleep(sleepTime);
	KeyPress(key, true);
	
}
