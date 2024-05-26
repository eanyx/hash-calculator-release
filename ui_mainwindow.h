/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *fileLineEdit;
    QPushButton *filePushButton;
    QPushButton *hashPushButton;
    QLineEdit *hashResultLineEdit;
    QRadioButton *rmd5RadioButton;
    QRadioButton *sha1RadioButton_2;
    QRadioButton *sha224RadioButton_3;
    QRadioButton *sha256RadioButton_4;
    QRadioButton *sha512RadioButton_5;
    QProgressBar *progressBar;
    QPushButton *cancelButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *verifyLineEdit;
    QLabel *label_3;
    QLabel *verifyLabel;
    QRadioButton *sha384RadioButton;
    QPushButton *comparePushButton;
    QRadioButton *sha3_224RadioButton;
    QRadioButton *SHA3_256RadioButton;
    QRadioButton *SHA_384RadioButton;
    QRadioButton *SHA3_512RadioButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1231, 470);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        fileLineEdit = new QLineEdit(centralWidget);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));
        fileLineEdit->setGeometry(QRect(21, 30, 721, 25));
        filePushButton = new QPushButton(centralWidget);
        filePushButton->setObjectName(QString::fromUtf8("filePushButton"));
        filePushButton->setGeometry(QRect(750, 30, 161, 25));
        hashPushButton = new QPushButton(centralWidget);
        hashPushButton->setObjectName(QString::fromUtf8("hashPushButton"));
        hashPushButton->setGeometry(QRect(965, 30, 111, 25));
        hashResultLineEdit = new QLineEdit(centralWidget);
        hashResultLineEdit->setObjectName(QString::fromUtf8("hashResultLineEdit"));
        hashResultLineEdit->setGeometry(QRect(20, 80, 1201, 25));
        rmd5RadioButton = new QRadioButton(centralWidget);
        rmd5RadioButton->setObjectName(QString::fromUtf8("rmd5RadioButton"));
        rmd5RadioButton->setGeometry(QRect(20, 246, 112, 23));
        rmd5RadioButton->setChecked(true);
        sha1RadioButton_2 = new QRadioButton(centralWidget);
        sha1RadioButton_2->setObjectName(QString::fromUtf8("sha1RadioButton_2"));
        sha1RadioButton_2->setGeometry(QRect(20, 271, 112, 23));
        sha224RadioButton_3 = new QRadioButton(centralWidget);
        sha224RadioButton_3->setObjectName(QString::fromUtf8("sha224RadioButton_3"));
        sha224RadioButton_3->setGeometry(QRect(20, 296, 112, 23));
        sha256RadioButton_4 = new QRadioButton(centralWidget);
        sha256RadioButton_4->setObjectName(QString::fromUtf8("sha256RadioButton_4"));
        sha256RadioButton_4->setGeometry(QRect(20, 320, 112, 23));
        sha512RadioButton_5 = new QRadioButton(centralWidget);
        sha512RadioButton_5->setObjectName(QString::fromUtf8("sha512RadioButton_5"));
        sha512RadioButton_5->setGeometry(QRect(20, 369, 112, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(21, 190, 1071, 25));
        progressBar->setMaximumSize(QSize(16777212, 16777212));
        progressBar->setValue(0);
        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(1099, 190, 89, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 111, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 101, 17));
        verifyLineEdit = new QLineEdit(centralWidget);
        verifyLineEdit->setObjectName(QString::fromUtf8("verifyLineEdit"));
        verifyLineEdit->setGeometry(QRect(20, 140, 1201, 25));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 311, 17));
        verifyLabel = new QLabel(centralWidget);
        verifyLabel->setObjectName(QString::fromUtf8("verifyLabel"));
        verifyLabel->setGeometry(QRect(20, 170, 91, 17));
        sha384RadioButton = new QRadioButton(centralWidget);
        sha384RadioButton->setObjectName(QString::fromUtf8("sha384RadioButton"));
        sha384RadioButton->setGeometry(QRect(20, 344, 112, 23));
        comparePushButton = new QPushButton(centralWidget);
        comparePushButton->setObjectName(QString::fromUtf8("comparePushButton"));
        comparePushButton->setGeometry(QRect(1080, 30, 111, 25));
        sha3_224RadioButton = new QRadioButton(centralWidget);
        sha3_224RadioButton->setObjectName(QString::fromUtf8("sha3_224RadioButton"));
        sha3_224RadioButton->setGeometry(QRect(130, 300, 101, 20));
        SHA3_256RadioButton = new QRadioButton(centralWidget);
        SHA3_256RadioButton->setObjectName(QString::fromUtf8("SHA3_256RadioButton"));
        SHA3_256RadioButton->setGeometry(QRect(130, 322, 101, 20));
        SHA_384RadioButton = new QRadioButton(centralWidget);
        SHA_384RadioButton->setObjectName(QString::fromUtf8("SHA_384RadioButton"));
        SHA_384RadioButton->setGeometry(QRect(130, 346, 101, 20));
        SHA3_512RadioButton = new QRadioButton(centralWidget);
        SHA3_512RadioButton->setObjectName(QString::fromUtf8("SHA3_512RadioButton"));
        SHA3_512RadioButton->setGeometry(QRect(130, 370, 101, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1231, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hash Calculator v 1.0  - may 2024 - By eanyx (olivier.michel.92@gmail.com)", nullptr));
        filePushButton->setText(QCoreApplication::translate("MainWindow", "Choose a file to hash", nullptr));
        hashPushButton->setText(QCoreApplication::translate("MainWindow", "Compute hash", nullptr));
        rmd5RadioButton->setText(QCoreApplication::translate("MainWindow", "MD5", nullptr));
        sha1RadioButton_2->setText(QCoreApplication::translate("MainWindow", "SHA-1", nullptr));
        sha224RadioButton_3->setText(QCoreApplication::translate("MainWindow", "SHA-224", nullptr));
        sha256RadioButton_4->setText(QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        sha512RadioButton_5->setText(QCoreApplication::translate("MainWindow", "SHA-512", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File to hash", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Hashed value", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Verify (String will be converted to upper case)", nullptr));
        verifyLabel->setText(QCoreApplication::translate("MainWindow", "Verify status", nullptr));
        sha384RadioButton->setText(QCoreApplication::translate("MainWindow", "SHA-384", nullptr));
        comparePushButton->setText(QCoreApplication::translate("MainWindow", "Compare hash", nullptr));
        sha3_224RadioButton->setText(QCoreApplication::translate("MainWindow", "SHA3-224", nullptr));
        SHA3_256RadioButton->setText(QCoreApplication::translate("MainWindow", "SHA3-256", nullptr));
        SHA_384RadioButton->setText(QCoreApplication::translate("MainWindow", "SHA3-384", nullptr));
        SHA3_512RadioButton->setText(QCoreApplication::translate("MainWindow", "SHA3-512", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
