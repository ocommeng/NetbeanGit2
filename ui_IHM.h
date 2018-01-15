/********************************************************************************
** Form generated from reading UI file 'IHM.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_H
#define UI_IHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IHM
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *IHM)
    {
        if (IHM->objectName().isEmpty())
            IHM->setObjectName(QStringLiteral("IHM"));
        IHM->resize(296, 146);
        gridLayoutWidget = new QWidget(IHM);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 241, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);


        retranslateUi(IHM);

        QMetaObject::connectSlotsByName(IHM);
    } // setupUi

    void retranslateUi(QWidget *IHM)
    {
        IHM->setWindowTitle(QApplication::translate("IHM", "IHM", 0));
        label->setText(QApplication::translate("IHM", "Nom : ", 0));
        label_2->setText(QApplication::translate("IHM", "PR\303\251nom :", 0));
    } // retranslateUi

};

namespace Ui {
    class IHM: public Ui_IHM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
