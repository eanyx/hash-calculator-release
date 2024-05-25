#include "mainwindow.h"
#include <QApplication>

/* TO DO
 *
 * verify proper compilation on MacOSX / Linux and Windows
 * Try to import in Amazon compute cloud
 *
 */

/* By Olivier MICHEL
 * 16 may 2022 - v 1.0 - Initial version
 * 	       - corrections for Qt6
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
