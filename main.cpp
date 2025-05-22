 /**
* @file main.cpp
*
* @brief Programme principal Centre de Mission
* @details Crée et affiche la fenêtre principale de l'application Centre de Mission
*
* @param argc
* @param argv[]
* @return int
*
*/



#include "mainwindow.h"

#include "connexion.h"
#include <QThread>
#include <QApplication>
#include <boost/asio.hpp>
#include <memory>
#include <iostream>

using namespace std;

namespace net = boost::asio;

int main(int argc, char *argv[])
{


    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
    }
