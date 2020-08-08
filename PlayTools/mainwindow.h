#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "firewallrules.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class AutoMate;
class QHotkey;

class MainWindow : public QMainWindow, public IFirewallActionListener
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // IFirewallActionListener
    virtual void OnActionDone(QString& strOut);

    virtual void closeEvent(QCloseEvent* e);

private slots:
    void on_snackButton_clicked();

    void on_amorButton_clicked();

    void on_soloButton_clicked();

    void on_disconnectProcessButton_clicked();

    void on_fingerPrintButton_clicked();

    void on_luckyWheelButton_clicked();

    void on_doomsDay2Button_clicked();

    void on_doomsDay3Button_clicked();

    void on_lineEditLuckyWheelInteval_textChanged(const QString &arg1);

private:
    void InitUI();
    void PlaySoundPrompt();

    enum FunctionType
    {
        FunctionType_Solo,
        FunctionType_Disconnect,
		FunctionType_Finger,
		FunctionType_Lucky,
		FunctionType_DoomsDayII,
		FunctionType_DoomsDayIII,
		FunctionType_Snack,
		FunctionType_Armor,
		FunctionType_Max,

    };

private:
    Ui::MainWindow *ui;
    AutoMate* m_AutoMate;
    FirewallRules  m_firewallRules;
    QString   m_GtaProcessPath;
    QHotkey* m_FuncHotkeys[FunctionType_Max];
    int      m_nLuckwheelInteval;
};
#endif // MAINWINDOW_H
