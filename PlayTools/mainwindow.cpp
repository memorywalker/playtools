#include "mainwindow.h"
#include "firewallrules.h"
#include "ui_mainwindow.h"
#include <Windows.h>
#include "AutoMate.h"
#include <QDebug>
#include <QHotkey>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_AutoMate = new AutoMate();
    m_AutoMate->SetWindow(this);

    QHotkey* hotkey = new QHotkey(QKeySequence("ctrl+alt+Q"), true);//The hotkey will be automatically registered
    qDebug() << "Is Registered: " << hotkey->isRegistered();

    QObject::connect(hotkey, &QHotkey::activated, [this]()
        {
            on_snackButton_clicked();
        });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_snackButton_clicked()
{
    if (m_AutoMate)
    {
        m_AutoMate->SendSnackCmd();
    }
}

void MainWindow::on_amorButton_clicked()
{
    if (m_AutoMate)
    {
        m_AutoMate->SendArmorCmd();
    }
}

void MainWindow::on_soloButton_clicked()
{

}

void MainWindow::on_disconnectProcessButton_clicked()
{
    FirewallRules firewall;
    static int switchOn = 0;
    if (!switchOn)
    {
        firewall.SetFireWallRules();
    }
    else
    {
        firewall.RemoveFireWallRules();
    }
    switchOn = !switchOn;
    
}

void MainWindow::on_fingerPrintButton_clicked()
{
    
}
