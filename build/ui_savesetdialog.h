/********************************************************************************
** Form generated from reading UI file 'savesetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVESETDIALOG_H
#define UI_SAVESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SaveSetDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *savepath_edit;
    QPushButton *BrowserBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *savefreq_edit;
    QLabel *label_2;
    QPushButton *ConfirmBtn;

    void setupUi(QDialog *SaveSetDialog)
    {
        if (SaveSetDialog->objectName().isEmpty())
            SaveSetDialog->setObjectName(QString::fromUtf8("SaveSetDialog"));
        SaveSetDialog->resize(408, 138);
        gridLayout = new QGridLayout(SaveSetDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        savepath_edit = new QLineEdit(SaveSetDialog);
        savepath_edit->setObjectName(QString::fromUtf8("savepath_edit"));
        savepath_edit->setReadOnly(true);

        horizontalLayout_2->addWidget(savepath_edit);

        BrowserBtn = new QPushButton(SaveSetDialog);
        BrowserBtn->setObjectName(QString::fromUtf8("BrowserBtn"));

        horizontalLayout_2->addWidget(BrowserBtn);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SaveSetDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        savefreq_edit = new QSpinBox(SaveSetDialog);
        savefreq_edit->setObjectName(QString::fromUtf8("savefreq_edit"));
        savefreq_edit->setFocusPolicy(Qt::WheelFocus);
        savefreq_edit->setMinimum(1);

        horizontalLayout->addWidget(savefreq_edit);

        label_2 = new QLabel(SaveSetDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        ConfirmBtn = new QPushButton(SaveSetDialog);
        ConfirmBtn->setObjectName(QString::fromUtf8("ConfirmBtn"));

        horizontalLayout->addWidget(ConfirmBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(SaveSetDialog);

        QMetaObject::connectSlotsByName(SaveSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveSetDialog)
    {
        SaveSetDialog->setWindowTitle(QApplication::translate("SaveSetDialog", "Dialog", nullptr));
        savepath_edit->setText(QString());
        BrowserBtn->setText(QApplication::translate("SaveSetDialog", "Browser", nullptr));
        label->setText(QApplication::translate("SaveSetDialog", "Save one image every", nullptr));
        label_2->setText(QApplication::translate("SaveSetDialog", "captures", nullptr));
        ConfirmBtn->setText(QApplication::translate("SaveSetDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveSetDialog: public Ui_SaveSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVESETDIALOG_H
