// From zetcode.com

#include "mainwindow.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    // Each Qt5 application must create this object. (Except for console applications)
    QApplication a(argc, argv);

    //MainWindow w; // Note that this includes predefined (toolbars?) ...
    QWidget window;

    window.resize(450, 350);
    window.setWindowTitle("Simple example");
    window.show();

    // Starts the main loop of the application
    return a.exec();
}
