/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu 15. Mar 15:02:26 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(276, 117);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 \321\204\320\260\320\271\320\273\320\260:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
