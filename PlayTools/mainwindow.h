#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class AutoMate;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_snackButton_clicked();

    void on_amorButton_clicked();

    void on_soloButton_clicked();

    void on_disconnectProcessButton_clicked();

    void on_fingerPrintButton_clicked();

private:
    Ui::MainWindow *ui;
    AutoMate* m_AutoMate;
};
#endif // MAINWINDOW_H
