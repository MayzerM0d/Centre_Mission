/********************************************************************************
** Form generated from reading UI file 'formulaire.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIRE_H
#define UI_FORMULAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Formulaire
{
public:

    void setupUi(QDialog *Formulaire)
    {
        if (Formulaire->objectName().isEmpty())
            Formulaire->setObjectName("Formulaire");
        Formulaire->resize(800, 800);

        retranslateUi(Formulaire);

        QMetaObject::connectSlotsByName(Formulaire);
    } // setupUi

    void retranslateUi(QDialog *Formulaire)
    {
        Formulaire->setWindowTitle(QCoreApplication::translate("Formulaire", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formulaire: public Ui_Formulaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIRE_H
