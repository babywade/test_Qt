/********************************************************************************
** Form generated from reading UI file 'test_Qt.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_QT_H
#define UI_TEST_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_QtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_QtClass)
    {
        if (test_QtClass->objectName().isEmpty())
            test_QtClass->setObjectName(QStringLiteral("test_QtClass"));
        test_QtClass->resize(600, 400);
        menuBar = new QMenuBar(test_QtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        test_QtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_QtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_QtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(test_QtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        test_QtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(test_QtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_QtClass->setStatusBar(statusBar);

        retranslateUi(test_QtClass);

        QMetaObject::connectSlotsByName(test_QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_QtClass)
    {
        test_QtClass->setWindowTitle(QApplication::translate("test_QtClass", "test_Qt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test_QtClass: public Ui_test_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_QT_H
