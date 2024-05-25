#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_filePushButton_clicked();

    void on_hashPushButton_clicked();

    void on_rmd5RadioButton_clicked();

    void on_sha1RadioButton_2_clicked();

    void on_sha224RadioButton_3_clicked();

    void on_sha256RadioButton_4_clicked();

    void on_sha512RadioButton_5_clicked();

    void on_cancelButton_clicked();

    void on_sha384RadioButton_clicked();

    void on_comparePushButton_clicked();

    void on_sha3_224RadioButton_clicked();

    void on_SHA3_256RadioButton_clicked();

    void on_SHA_384RadioButton_clicked();

    void on_SHA3_512RadioButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
