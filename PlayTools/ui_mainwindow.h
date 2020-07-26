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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *snackButton;
    QLineEdit *snackLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *amorButton;
    QLineEdit *snackLineEdit_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *soloButton;
    QLineEdit *snackLineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *disconnectProcessButton;
    QLineEdit *snackLineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *fingerPrintButton;
    QLineEdit *snackLineEdit_5;
    QSpacerItem *verticalSpacer;
    QLabel *labelPrompt;
    QLabel *labelInfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(282, 561);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        snackButton = new QPushButton(centralwidget);
        snackButton->setObjectName(QString::fromUtf8("snackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(snackButton->sizePolicy().hasHeightForWidth());
        snackButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        snackButton->setFont(font);
        snackButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(snackButton);

        snackLineEdit = new QLineEdit(centralwidget);
        snackLineEdit->setObjectName(QString::fromUtf8("snackLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(snackLineEdit->sizePolicy().hasHeightForWidth());
        snackLineEdit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        snackLineEdit->setFont(font1);

        horizontalLayout->addWidget(snackLineEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

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

        snackLineEdit_3 = new QLineEdit(centralwidget);
        snackLineEdit_3->setObjectName(QString::fromUtf8("snackLineEdit_3"));
        sizePolicy1.setHeightForWidth(snackLineEdit_3->sizePolicy().hasHeightForWidth());
        snackLineEdit_3->setSizePolicy(sizePolicy1);
        snackLineEdit_3->setFont(font1);

        horizontalLayout_3->addWidget(snackLineEdit_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        soloButton = new QPushButton(centralwidget);
        soloButton->setObjectName(QString::fromUtf8("soloButton"));
        sizePolicy.setHeightForWidth(soloButton->sizePolicy().hasHeightForWidth());
        soloButton->setSizePolicy(sizePolicy);
        soloButton->setFont(font);
        soloButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(soloButton);

        snackLineEdit_2 = new QLineEdit(centralwidget);
        snackLineEdit_2->setObjectName(QString::fromUtf8("snackLineEdit_2"));
        sizePolicy1.setHeightForWidth(snackLineEdit_2->sizePolicy().hasHeightForWidth());
        snackLineEdit_2->setSizePolicy(sizePolicy1);
        snackLineEdit_2->setFont(font1);

        horizontalLayout_2->addWidget(snackLineEdit_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        disconnectProcessButton = new QPushButton(centralwidget);
        disconnectProcessButton->setObjectName(QString::fromUtf8("disconnectProcessButton"));
        sizePolicy.setHeightForWidth(disconnectProcessButton->sizePolicy().hasHeightForWidth());
        disconnectProcessButton->setSizePolicy(sizePolicy);
        disconnectProcessButton->setFont(font);
        disconnectProcessButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(disconnectProcessButton);

        snackLineEdit_4 = new QLineEdit(centralwidget);
        snackLineEdit_4->setObjectName(QString::fromUtf8("snackLineEdit_4"));
        sizePolicy1.setHeightForWidth(snackLineEdit_4->sizePolicy().hasHeightForWidth());
        snackLineEdit_4->setSizePolicy(sizePolicy1);
        snackLineEdit_4->setFont(font1);

        horizontalLayout_4->addWidget(snackLineEdit_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

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

        snackLineEdit_5 = new QLineEdit(centralwidget);
        snackLineEdit_5->setObjectName(QString::fromUtf8("snackLineEdit_5"));
        sizePolicy1.setHeightForWidth(snackLineEdit_5->sizePolicy().hasHeightForWidth());
        snackLineEdit_5->setSizePolicy(sizePolicy1);
        snackLineEdit_5->setFont(font1);

        horizontalLayout_5->addWidget(snackLineEdit_5);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelPrompt = new QLabel(centralwidget);
        labelPrompt->setObjectName(QString::fromUtf8("labelPrompt"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        labelPrompt->setFont(font2);

        verticalLayout->addWidget(labelPrompt);

        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        labelInfo->setFont(font3);

        verticalLayout->addWidget(labelInfo);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 1);

        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 282, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        snackButton->setText(QCoreApplication::translate("MainWindow", "Sancks", nullptr));
        snackLineEdit->setText(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
        amorButton->setText(QCoreApplication::translate("MainWindow", "Amor", nullptr));
        snackLineEdit_3->setText(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
        soloButton->setText(QCoreApplication::translate("MainWindow", "Solo", nullptr));
        snackLineEdit_2->setText(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
        disconnectProcessButton->setText(QCoreApplication::translate("MainWindow", "Disconnect Process", nullptr));
        snackLineEdit_4->setText(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
        fingerPrintButton->setText(QCoreApplication::translate("MainWindow", "FingerPrint", nullptr));
        snackLineEdit_5->setText(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
        labelPrompt->setText(QCoreApplication::translate("MainWindow", "Prompt", nullptr));
        labelInfo->setText(QCoreApplication::translate("MainWindow", "Ver 0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
