#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QCryptographicHash>
#include <QProgressBar>
#include <QtMath>

/* Olivier Michel - 9 may 2023 - change to support full file name on Linux and Windows
 *
 */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->ui->cancelButton->hide();
    this->ui->progressBar->hide();
    this->ui->verifyLabel->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString fileName=NULL;
QCryptographicHash::Algorithm algo = QCryptographicHash::Md5;
bool cancel_calculation;
QByteArray fileChecksum;

void MainWindow::on_filePushButton_clicked()
{
    this->ui->verifyLabel->hide();
    this->ui->hashResultLineEdit->setText("");
#if defined(Q_WS_WIN) || defined(Q_OS_WIN)
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Open file to hash"), "/", tr("All Files (*.*)"));
#elif defined(Q_WS_X11) || defined(Q_OS_LINUX)
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Open file to hash"), "/", tr("All Files (*)"));

#endif
     this->ui->fileLineEdit->setText(fileName);
}

void MainWindow::on_hashPushButton_clicked()
{
     if (QFileInfo::exists(fileName));
     {
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);

        const int block_size = (file.size() > 512*1024) ? 512*1024 : 1024;
        char buffer[512*1024];

        //char buffer[8192];
        int bytes_read;

        int progress_max = file.size()/block_size;
        progress_max = (progress_max > 0) ? progress_max : 1;


        this->ui->progressBar->setMaximum(progress_max);
        this->ui->progressBar->reset();
        this->ui->progressBar->show();
        this->ui->cancelButton->show();

        QCryptographicHash::Algorithm hash_alg = algo;
        QCryptographicHash hash(hash_alg);


        cancel_calculation = false;

        while( (!cancel_calculation && (bytes_read = file.read(buffer, block_size))>0) ) {

               hash.addData(buffer, bytes_read);
               fileChecksum = hash.result().toHex().toUpper();
               this->ui->progressBar->setValue(this->ui->progressBar->value()+1);
               QCoreApplication::processEvents();
        }
        fileChecksum = hash.result().toHex().toUpper();


      //  this->ui->progressBar->hide();
     //   this->ui->cancelButton->hide();

        if (!cancel_calculation) {
            this->ui->hashResultLineEdit->setText(fileChecksum);
        }

        this->ui->progressBar->hide();
        this->ui->cancelButton->hide();
        file.close();

     }
}

void MainWindow::on_cancelButton_clicked()
{
    cancel_calculation = true;
}

void MainWindow::on_rmd5RadioButton_clicked()
{
    algo = QCryptographicHash::Md5;
}

void MainWindow::on_sha1RadioButton_2_clicked()
{
    algo = QCryptographicHash::Sha1;
}

void MainWindow::on_sha224RadioButton_3_clicked()
{
    algo = QCryptographicHash::Sha224;
}

void MainWindow::on_sha256RadioButton_4_clicked()
{
     algo = QCryptographicHash::Sha256;
}

void MainWindow::on_sha384RadioButton_clicked()
{
     algo = QCryptographicHash::Sha384;
}

void MainWindow::on_sha512RadioButton_5_clicked()
{
    algo = QCryptographicHash::Sha512;
}


void MainWindow::on_sha3_224RadioButton_clicked()
{
    algo = QCryptographicHash::Sha3_224;
}


void MainWindow::on_SHA3_256RadioButton_clicked()
{
    algo = QCryptographicHash::Sha3_256;
}

void MainWindow::on_SHA_384RadioButton_clicked()
{
    algo = QCryptographicHash::Sha3_384;
}

void MainWindow::on_SHA3_512RadioButton_clicked()
{
    algo = QCryptographicHash::Sha3_512;
}


void MainWindow::on_comparePushButton_clicked()
{
    QString verify = "";
    verify = this->ui->verifyLineEdit->text().toUpper();

    this->ui->verifyLineEdit->setText(verify);


    if (verify == fileChecksum)
    {
        this->ui->verifyLabel->setText("<font color=\"#2E821A\">Verify OK</font>");
        this->ui->verifyLabel->show();
    }
    else
    {
        this->ui->verifyLabel->setText("<font color=\"#FF0000\">Verify not OK</font>");
        this->ui->verifyLabel->show();
    }
}







