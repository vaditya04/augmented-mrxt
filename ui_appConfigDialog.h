/********************************************************************************
** Form generated from reading UI file 'appConfigDialog.ui'
**
** Created: Thu Feb 5 16:15:28 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPCONFIGDIALOG_H
#define UI_APPCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AppConfigDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *sampleTimeSpinBox;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *maxIniPoseDistSpinBox;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QDoubleSpinBox *minIniPoseDistSpinBox;
    QLabel *label_4;
    QCheckBox *groupPosesCheckBox;

    void setupUi(QDialog *AppConfigDialog)
    {
        if (AppConfigDialog->objectName().isEmpty())
            AppConfigDialog->setObjectName(QString::fromUtf8("AppConfigDialog"));
        AppConfigDialog->resize(364, 172);
        gridLayout = new QGridLayout(AppConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AppConfigDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sampleTimeSpinBox = new QDoubleSpinBox(AppConfigDialog);
        sampleTimeSpinBox->setObjectName(QString::fromUtf8("sampleTimeSpinBox"));

        gridLayout->addWidget(sampleTimeSpinBox, 0, 1, 1, 2);

        label_2 = new QLabel(AppConfigDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(AppConfigDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        maxIniPoseDistSpinBox = new QDoubleSpinBox(AppConfigDialog);
        maxIniPoseDistSpinBox->setObjectName(QString::fromUtf8("maxIniPoseDistSpinBox"));
        maxIniPoseDistSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(maxIniPoseDistSpinBox, 2, 1, 1, 2);

        label_5 = new QLabel(AppConfigDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        buttonBox = new QDialogButtonBox(AppConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 4);

        label_6 = new QLabel(AppConfigDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 3, 1, 1);

        minIniPoseDistSpinBox = new QDoubleSpinBox(AppConfigDialog);
        minIniPoseDistSpinBox->setObjectName(QString::fromUtf8("minIniPoseDistSpinBox"));
        minIniPoseDistSpinBox->setSingleStep(0.05);

        gridLayout->addWidget(minIniPoseDistSpinBox, 3, 1, 1, 2);

        label_4 = new QLabel(AppConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        groupPosesCheckBox = new QCheckBox(AppConfigDialog);
        groupPosesCheckBox->setObjectName(QString::fromUtf8("groupPosesCheckBox"));

        gridLayout->addWidget(groupPosesCheckBox, 1, 0, 1, 4);


        retranslateUi(AppConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AppConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AppConfigDialog, SLOT(reject()));
        QObject::connect(groupPosesCheckBox, SIGNAL(clicked(bool)), maxIniPoseDistSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AppConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *AppConfigDialog)
    {
        AppConfigDialog->setWindowTitle(QApplication::translate("AppConfigDialog", "Application configuration", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AppConfigDialog", "Sample Time", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AppConfigDialog", "s", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AppConfigDialog", "Initial Poses Max. Separation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AppConfigDialog", "m", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AppConfigDialog", "m", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AppConfigDialog", "Initial Poses Min. Separation", 0, QApplication::UnicodeUTF8));
        groupPosesCheckBox->setText(QApplication::translate("AppConfigDialog", "Group Initial Poses", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AppConfigDialog: public Ui_AppConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCONFIGDIALOG_H
