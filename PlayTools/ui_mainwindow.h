/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *rootlayout;
    QHBoxLayout *toplayout;
    QVBoxLayout *mainlayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *soloButton;
    QLineEdit *lineEditSolo;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *disconnectProcessButton;
    QLineEdit *lineEditDisconnectProcess;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *fingerPrintButton;
    QLineEdit *lineEditFingerPrint;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *luckyWheelButton;
    QLineEdit *lineEditLuckyWheel;
    QLabel *labelLuckWheel;
    QLineEdit *lineEditLuckyWheelInteval;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *doomsDay2Button;
    QLineEdit *lineEditDoomsDayII;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *doomsDay3Button;
    QLineEdit *lineEditDoomsDayIII;
    QHBoxLayout *horizontalLayout;
    QPushButton *snackButton;
    QLineEdit *lineEditSnack;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *amorButton;
    QLineEdit *lineEditArmor;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButtonSave;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *labelPrompt;
    QLabel *labelInfo;
    QHBoxLayout *bottomlayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(441, 666);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rootlayout = new QVBoxLayout();
        rootlayout->setObjectName(QString::fromUtf8("rootlayout"));
        toplayout = new QHBoxLayout();
        toplayout->setObjectName(QString::fromUtf8("toplayout"));

        rootlayout->addLayout(toplayout);

        mainlayout = new QVBoxLayout();
        mainlayout->setObjectName(QString::fromUtf8("mainlayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        soloButton = new QPushButton(centralwidget);
        soloButton->setObjectName(QString::fromUtf8("soloButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(soloButton->sizePolicy().hasHeightForWidth());
        soloButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        soloButton->setFont(font);
        soloButton->setFocusPolicy(Qt::StrongFocus);
        soloButton->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 135, 6);"));

        horizontalLayout_2->addWidget(soloButton);

        lineEditSolo = new QLineEdit(centralwidget);
        lineEditSolo->setObjectName(QString::fromUtf8("lineEditSolo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditSolo->sizePolicy().hasHeightForWidth());
        lineEditSolo->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lineEditSolo->setFont(font1);

        horizontalLayout_2->addWidget(lineEditSolo);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        disconnectProcessButton = new QPushButton(centralwidget);
        disconnectProcessButton->setObjectName(QString::fromUtf8("disconnectProcessButton"));
        sizePolicy.setHeightForWidth(disconnectProcessButton->sizePolicy().hasHeightForWidth());
        disconnectProcessButton->setSizePolicy(sizePolicy);
        disconnectProcessButton->setFont(font);
        disconnectProcessButton->setFocusPolicy(Qt::StrongFocus);
        disconnectProcessButton->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 135, 6);"));

        horizontalLayout_4->addWidget(disconnectProcessButton);

        lineEditDisconnectProcess = new QLineEdit(centralwidget);
        lineEditDisconnectProcess->setObjectName(QString::fromUtf8("lineEditDisconnectProcess"));
        sizePolicy1.setHeightForWidth(lineEditDisconnectProcess->sizePolicy().hasHeightForWidth());
        lineEditDisconnectProcess->setSizePolicy(sizePolicy1);
        lineEditDisconnectProcess->setFont(font1);

        horizontalLayout_4->addWidget(lineEditDisconnectProcess);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        fingerPrintButton = new QPushButton(centralwidget);
        fingerPrintButton->setObjectName(QString::fromUtf8("fingerPrintButton"));
        sizePolicy.setHeightForWidth(fingerPrintButton->sizePolicy().hasHeightForWidth());
        fingerPrintButton->setSizePolicy(sizePolicy);
        fingerPrintButton->setFont(font);
        fingerPrintButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(fingerPrintButton);

        lineEditFingerPrint = new QLineEdit(centralwidget);
        lineEditFingerPrint->setObjectName(QString::fromUtf8("lineEditFingerPrint"));
        sizePolicy1.setHeightForWidth(lineEditFingerPrint->sizePolicy().hasHeightForWidth());
        lineEditFingerPrint->setSizePolicy(sizePolicy1);
        lineEditFingerPrint->setFont(font1);

        horizontalLayout_5->addWidget(lineEditFingerPrint);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        luckyWheelButton = new QPushButton(centralwidget);
        luckyWheelButton->setObjectName(QString::fromUtf8("luckyWheelButton"));
        sizePolicy.setHeightForWidth(luckyWheelButton->sizePolicy().hasHeightForWidth());
        luckyWheelButton->setSizePolicy(sizePolicy);
        luckyWheelButton->setFont(font);
        luckyWheelButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(luckyWheelButton);

        lineEditLuckyWheel = new QLineEdit(centralwidget);
        lineEditLuckyWheel->setObjectName(QString::fromUtf8("lineEditLuckyWheel"));
        sizePolicy1.setHeightForWidth(lineEditLuckyWheel->sizePolicy().hasHeightForWidth());
        lineEditLuckyWheel->setSizePolicy(sizePolicy1);
        lineEditLuckyWheel->setFont(font1);

        horizontalLayout_6->addWidget(lineEditLuckyWheel);

        labelLuckWheel = new QLabel(centralwidget);
        labelLuckWheel->setObjectName(QString::fromUtf8("labelLuckWheel"));
        labelLuckWheel->setFont(font);

        horizontalLayout_6->addWidget(labelLuckWheel);

        lineEditLuckyWheelInteval = new QLineEdit(centralwidget);
        lineEditLuckyWheelInteval->setObjectName(QString::fromUtf8("lineEditLuckyWheelInteval"));
        sizePolicy1.setHeightForWidth(lineEditLuckyWheelInteval->sizePolicy().hasHeightForWidth());
        lineEditLuckyWheelInteval->setSizePolicy(sizePolicy1);
        lineEditLuckyWheelInteval->setFont(font);
        lineEditLuckyWheelInteval->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEditLuckyWheelInteval);

        horizontalLayout_6->setStretch(0, 1);

        mainlayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        doomsDay2Button = new QPushButton(centralwidget);
        doomsDay2Button->setObjectName(QString::fromUtf8("doomsDay2Button"));
        sizePolicy.setHeightForWidth(doomsDay2Button->sizePolicy().hasHeightForWidth());
        doomsDay2Button->setSizePolicy(sizePolicy);
        doomsDay2Button->setFont(font);
        doomsDay2Button->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_8->addWidget(doomsDay2Button);

        lineEditDoomsDayII = new QLineEdit(centralwidget);
        lineEditDoomsDayII->setObjectName(QString::fromUtf8("lineEditDoomsDayII"));
        sizePolicy1.setHeightForWidth(lineEditDoomsDayII->sizePolicy().hasHeightForWidth());
        lineEditDoomsDayII->setSizePolicy(sizePolicy1);
        lineEditDoomsDayII->setFont(font1);

        horizontalLayout_8->addWidget(lineEditDoomsDayII);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        doomsDay3Button = new QPushButton(centralwidget);
        doomsDay3Button->setObjectName(QString::fromUtf8("doomsDay3Button"));
        sizePolicy.setHeightForWidth(doomsDay3Button->sizePolicy().hasHeightForWidth());
        doomsDay3Button->setSizePolicy(sizePolicy);
        doomsDay3Button->setFont(font);
        doomsDay3Button->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_7->addWidget(doomsDay3Button);

        lineEditDoomsDayIII = new QLineEdit(centralwidget);
        lineEditDoomsDayIII->setObjectName(QString::fromUtf8("lineEditDoomsDayIII"));
        sizePolicy1.setHeightForWidth(lineEditDoomsDayIII->sizePolicy().hasHeightForWidth());
        lineEditDoomsDayIII->setSizePolicy(sizePolicy1);
        lineEditDoomsDayIII->setFont(font1);

        horizontalLayout_7->addWidget(lineEditDoomsDayIII);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        snackButton = new QPushButton(centralwidget);
        snackButton->setObjectName(QString::fromUtf8("snackButton"));
        sizePolicy.setHeightForWidth(snackButton->sizePolicy().hasHeightForWidth());
        snackButton->setSizePolicy(sizePolicy);
        snackButton->setFont(font);
        snackButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(snackButton);

        lineEditSnack = new QLineEdit(centralwidget);
        lineEditSnack->setObjectName(QString::fromUtf8("lineEditSnack"));
        sizePolicy1.setHeightForWidth(lineEditSnack->sizePolicy().hasHeightForWidth());
        lineEditSnack->setSizePolicy(sizePolicy1);
        lineEditSnack->setFont(font1);

        horizontalLayout->addWidget(lineEditSnack);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        amorButton = new QPushButton(centralwidget);
        amorButton->setObjectName(QString::fromUtf8("amorButton"));
        sizePolicy.setHeightForWidth(amorButton->sizePolicy().hasHeightForWidth());
        amorButton->setSizePolicy(sizePolicy);
        amorButton->setFont(font);
        amorButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(amorButton);

        lineEditArmor = new QLineEdit(centralwidget);
        lineEditArmor->setObjectName(QString::fromUtf8("lineEditArmor"));
        sizePolicy1.setHeightForWidth(lineEditArmor->sizePolicy().hasHeightForWidth());
        lineEditArmor->setSizePolicy(sizePolicy1);
        lineEditArmor->setFont(font1);

        horizontalLayout_3->addWidget(lineEditArmor);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButtonSave = new QPushButton(centralwidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonSave->sizePolicy().hasHeightForWidth());
        pushButtonSave->setSizePolicy(sizePolicy2);
        pushButtonSave->setFont(font);

        horizontalLayout_11->addWidget(pushButtonSave);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(pushButton_2);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 1);

        mainlayout->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainlayout->addItem(verticalSpacer);

        labelPrompt = new QLabel(centralwidget);
        labelPrompt->setObjectName(QString::fromUtf8("labelPrompt"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        labelPrompt->setFont(font2);

        mainlayout->addWidget(labelPrompt);

        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        labelInfo->setFont(font3);

        mainlayout->addWidget(labelInfo);

        mainlayout->setStretch(0, 1);
        mainlayout->setStretch(1, 1);
        mainlayout->setStretch(2, 1);
        mainlayout->setStretch(3, 1);
        mainlayout->setStretch(4, 1);
        mainlayout->setStretch(5, 1);
        mainlayout->setStretch(6, 1);
        mainlayout->setStretch(7, 1);
        mainlayout->setStretch(8, 1);
        mainlayout->setStretch(9, 1);
        mainlayout->setStretch(10, 1);
        mainlayout->setStretch(11, 1);

        rootlayout->addLayout(mainlayout);

        bottomlayout = new QHBoxLayout();
        bottomlayout->setObjectName(QString::fromUtf8("bottomlayout"));

        rootlayout->addLayout(bottomlayout);

        rootlayout->setStretch(0, 1);
        rootlayout->setStretch(1, 16);
        rootlayout->setStretch(2, 1);

        verticalLayout->addLayout(rootlayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 441, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Play Tools", nullptr));
        soloButton->setText(QCoreApplication::translate("MainWindow", "Solo", nullptr));
        lineEditSolo->setText(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
        disconnectProcessButton->setText(QCoreApplication::translate("MainWindow", "Disconnect Process", nullptr));
        lineEditDisconnectProcess->setText(QCoreApplication::translate("MainWindow", "Ctrl+Alt+O", nullptr));
        fingerPrintButton->setText(QCoreApplication::translate("MainWindow", "FingerPrint", nullptr));
        lineEditFingerPrint->setText(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
        luckyWheelButton->setText(QCoreApplication::translate("MainWindow", "Lucky Wheel", nullptr));
        lineEditLuckyWheel->setText(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
        labelLuckWheel->setText(QCoreApplication::translate("MainWindow", "Inteval(ms)", nullptr));
        lineEditLuckyWheelInteval->setText(QCoreApplication::translate("MainWindow", "4125", nullptr));
        doomsDay2Button->setText(QCoreApplication::translate("MainWindow", "DoomsDay II", nullptr));
        lineEditDoomsDayII->setText(QCoreApplication::translate("MainWindow", "Ctrl+F2", nullptr));
        doomsDay3Button->setText(QCoreApplication::translate("MainWindow", "DoomsDay III", nullptr));
        lineEditDoomsDayIII->setText(QCoreApplication::translate("MainWindow", "Ctrl+F3", nullptr));
        snackButton->setText(QCoreApplication::translate("MainWindow", "Sancks", nullptr));
        lineEditSnack->setText(QCoreApplication::translate("MainWindow", "Ctrl+Alt+E", nullptr));
        amorButton->setText(QCoreApplication::translate("MainWindow", "Armor", nullptr));
        lineEditArmor->setText(QCoreApplication::translate("MainWindow", "Ctrl+Alt+C", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelPrompt->setText(QCoreApplication::translate("MainWindow", "Prompt", nullptr));
        labelInfo->setText(QCoreApplication::translate("MainWindow", "Ver 0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
