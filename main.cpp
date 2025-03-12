#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGuiApplication::setAttribute(Qt::AA_SynthesizeTouchForUnhandledMouseEvents);
    QGuiApplication::setAttribute(Qt::AA_SynthesizeMouseForUnhandledTouchEvents);
    MainWindow w;
    w.show();
    return a.exec();
}
