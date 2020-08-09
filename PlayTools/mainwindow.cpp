#include "mainwindow.h"
#include "firewallrules.h"
#include "ui_mainwindow.h"
#include <Windows.h>
#include "AutoMate.h"
#include <QDebug>
#include <QHotkey>
#include <QSound>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
	, m_nLuckwheelInteval(4000)
{
    ui->setupUi(this);
    m_AutoMate = new AutoMate();
    m_AutoMate->SetWindow(this);

    m_GtaProcessPath = "I:\\SteamLibrary\\steamapps\\common\\Grand Theft Auto V\\GTA5.exe";
    m_firewallRules.SetActionListener(this);

    InitUI();
}

MainWindow::~MainWindow()
{
	for (size_t i = 0; i < FunctionType_Max; i++)
	{
		delete m_FuncHotkeys[i];
		m_FuncHotkeys[i] = nullptr;
	}
    delete ui;
}



void MainWindow::InitUI()
{
	//QHotkey hotkey(QKeySequence("ctrl+alt+O"), true);//The hotkey will be automatically registered
	//qDebug() << "Is Registered: " << hotkey.isRegistered();
	//QObject::connect(&hotkey, &QHotkey::activated, this, &MainWindow::on_disconnectProcessButton_clicked);

	QString strluckyWheelInteval = ui->lineEditLuckyWheelInteval->text();
	m_nLuckwheelInteval = strluckyWheelInteval.toInt();
	
	BindHotKeys();
}

void MainWindow::PlaySoundPrompt()
{
	QSound::play("c:/Windows/media/tada.wav");
}

void MainWindow::BindHotKeys()
{
	for (size_t i = 0; i < FunctionType_Max; i++)
	{
		m_FuncHotkeys[i] = new QHotkey(this);
	}

	// solo
	QString strKey = ui->lineEditSolo->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_Solo]->setShortcut(QKeySequence(strKey), true);
	QMetaObject::Connection conn = QObject::connect(m_FuncHotkeys[FunctionType_Solo], &QHotkey::activated, this, &MainWindow::on_soloButton_clicked);
	Q_ASSERT(conn);

	// disconnect process
	strKey = ui->lineEditDisconnectProcess->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_Disconnect]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_Disconnect], &QHotkey::activated, this, &MainWindow::on_disconnectProcessButton_clicked);
	Q_ASSERT(conn);

	strKey = ui->lineEditFingerPrint->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_Finger]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_Finger], &QHotkey::activated, this, &MainWindow::on_fingerPrintButton_clicked);
	Q_ASSERT(conn);

	strKey = ui->lineEditLuckyWheel->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_Lucky]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_Lucky], &QHotkey::activated, this, &MainWindow::on_luckyWheelButton_clicked);
	Q_ASSERT(conn);

	strKey = ui->lineEditDoomsDayII->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_DoomsDayII]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_DoomsDayII], &QHotkey::activated, this, &MainWindow::on_doomsDay2Button_clicked);
	Q_ASSERT(conn);

	strKey = ui->lineEditDoomsDayIII->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_DoomsDayIII]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_DoomsDayIII], &QHotkey::activated, this, &MainWindow::on_doomsDay3Button_clicked);
	Q_ASSERT(conn);

	strKey = ui->lineEditSnack->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_Snack]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_Snack], &QHotkey::activated, this, &MainWindow::on_snackButton_clicked);
	Q_ASSERT(conn);

	strKey = ui->lineEditArmor->text().trimmed().toLower();
	m_FuncHotkeys[FunctionType_Armor]->setShortcut(QKeySequence(strKey), true);
	conn = QObject::connect(m_FuncHotkeys[FunctionType_Armor], &QHotkey::activated, this, &MainWindow::on_amorButton_clicked);
	Q_ASSERT(conn);
}

void MainWindow::UnBindHotKeys()
{
	bool bRet = QObject::disconnect(m_FuncHotkeys[FunctionType_Solo], &QHotkey::activated, this, &MainWindow::on_soloButton_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_Disconnect], &QHotkey::activated, this, &MainWindow::on_disconnectProcessButton_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_Finger], &QHotkey::activated, this, &MainWindow::on_fingerPrintButton_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_Lucky], &QHotkey::activated, this, &MainWindow::on_luckyWheelButton_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_DoomsDayII], &QHotkey::activated, this, &MainWindow::on_doomsDay2Button_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_DoomsDayIII], &QHotkey::activated, this, &MainWindow::on_doomsDay3Button_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_Snack], &QHotkey::activated, this, &MainWindow::on_snackButton_clicked);

	bRet &= QObject::disconnect(m_FuncHotkeys[FunctionType_Armor], &QHotkey::activated, this, &MainWindow::on_amorButton_clicked);

	for (size_t i = 0; i < FunctionType_Max; i++)
	{
		delete m_FuncHotkeys[i];
		m_FuncHotkeys[i] = nullptr;
	}
}

void MainWindow::OnActionDone(QString& strOut)
{
    ui->labelPrompt->setText(strOut);
	PlaySoundPrompt();
}

void MainWindow::closeEvent(QCloseEvent* e)
{
	m_firewallRules.StopProcessOffine();
	m_firewallRules.StopSinglePublicSession();
}

void MainWindow::on_snackButton_clicked()
{
	PlaySoundPrompt();
    if (m_AutoMate)
    {
        m_AutoMate->SendSnackCmd();
    }
}

void MainWindow::on_amorButton_clicked()
{
	PlaySoundPrompt();
    if (m_AutoMate)    
	{		
        m_AutoMate->SendArmorCmd();
    }
}

void MainWindow::on_soloButton_clicked()
{
	PlaySoundPrompt();
	static bool switchOn = false;
	if (!switchOn)
	{		
		m_firewallRules.StartSinglePublicSession();
	}
	else
	{
		m_firewallRules.StopSinglePublicSession();
	}
	switchOn = !switchOn;

	if (switchOn)
	{
		ui->soloButton->setStyleSheet("background-color: rgb(255, 0, 0)");
	}
	else
	{
		ui->soloButton->setStyleSheet("background-color: rgb(23, 135, 6)");
	}
}

void MainWindow::on_disconnectProcessButton_clicked()
{   
	PlaySoundPrompt();
    static bool switchOn = false;
    if (!switchOn)
    {
        m_firewallRules.StartProcessOffline(m_GtaProcessPath);
    }
    else
    {
        m_firewallRules.StopProcessOffine();
    }
    switchOn = !switchOn;
    
    if (switchOn)
    {
        ui->disconnectProcessButton->setStyleSheet("background-color: rgb(255, 0, 0)");
    }
    else
    {
        ui->disconnectProcessButton->setStyleSheet("background-color: rgb(23, 135, 6)");
    }
}

void MainWindow::on_fingerPrintButton_clicked()
{
	PlaySoundPrompt();
}

void MainWindow::on_luckyWheelButton_clicked()
{
	PlaySoundPrompt();
	if (m_AutoMate)
	{
	 	m_AutoMate->SendLuckyWheelCmd(m_nLuckwheelInteval);
	}
}

void MainWindow::on_doomsDay2Button_clicked()
{
	PlaySoundPrompt();
	if (m_AutoMate)
	{
		m_AutoMate->SendDoomsDayIICmd();
	}
}

void MainWindow::on_doomsDay3Button_clicked()
{
	PlaySoundPrompt();
	if (m_AutoMate)
	{
		m_AutoMate->SendDoomsDayIIICmd();
	}
}

void MainWindow::on_lineEditLuckyWheelInteval_textChanged(const QString &arg1)
{
	QString strluckyWheelInteval = ui->lineEditLuckyWheelInteval->text();
	m_nLuckwheelInteval = strluckyWheelInteval.toInt();
}

void MainWindow::on_pushButtonSave_clicked()
{
	UnBindHotKeys();
	BindHotKeys();
}
