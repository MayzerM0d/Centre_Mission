/********************************************************************************
** Form generated from reading UI file 'donnees_scientifiques.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONNEES_SCIENTIFIQUES_H
#define UI_DONNEES_SCIENTIFIQUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Donnees_Scientifiques
{
public:

    void setupUi(QDialog *Donnees_Scientifiques)
    {
        if (Donnees_Scientifiques->objectName().isEmpty())
            Donnees_Scientifiques->setObjectName("Donnees_Scientifiques");
        Donnees_Scientifiques->resize(400, 300);

        retranslateUi(Donnees_Scientifiques);

        QMetaObject::connectSlotsByName(Donnees_Scientifiques);
    } // setupUi

    void retranslateUi(QDialog *Donnees_Scientifiques)
    {
        Donnees_Scientifiques->setWindowTitle(QCoreApplication::translate("Donnees_Scientifiques", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Donnees_Scientifiques: public Ui_Donnees_Scientifiques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONNEES_SCIENTIFIQUES_H
