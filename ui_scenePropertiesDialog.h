/********************************************************************************
** Form generated from reading UI file 'scenePropertiesDialog.ui'
**
** Created: Thu Feb 5 16:15:28 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEPROPERTIESDIALOG_H
#define UI_SCENEPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ScenePropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *wallsLab;
    QLabel *label_2;
    QLabel *landmarksLab;
    QLabel *label_3;
    QLabel *descLengthLab;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ScenePropertiesDialog)
    {
        if (ScenePropertiesDialog->objectName().isEmpty())
            ScenePropertiesDialog->setObjectName(QString::fromUtf8("ScenePropertiesDialog"));
        ScenePropertiesDialog->resize(239, 146);
        gridLayout = new QGridLayout(ScenePropertiesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ScenePropertiesDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        wallsLab = new QLabel(ScenePropertiesDialog);
        wallsLab->setObjectName(QString::fromUtf8("wallsLab"));

        gridLayout->addWidget(wallsLab, 0, 1, 1, 1);

        label_2 = new QLabel(ScenePropertiesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        landmarksLab = new QLabel(ScenePropertiesDialog);
        landmarksLab->setObjectName(QString::fromUtf8("landmarksLab"));

        gridLayout->addWidget(landmarksLab, 1, 1, 1, 1);

        label_3 = new QLabel(ScenePropertiesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        descLengthLab = new QLabel(ScenePropertiesDialog);
        descLengthLab->setObjectName(QString::fromUtf8("descLengthLab"));

        gridLayout->addWidget(descLengthLab, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ScenePropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(ScenePropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ScenePropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ScenePropertiesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ScenePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *ScenePropertiesDialog)
    {
        ScenePropertiesDialog->setWindowTitle(QApplication::translate("ScenePropertiesDialog", "Scene Properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ScenePropertiesDialog", "Number of walls:", 0, QApplication::UnicodeUTF8));
        wallsLab->setText(QApplication::translate("ScenePropertiesDialog", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ScenePropertiesDialog", "Number of landmarks:", 0, QApplication::UnicodeUTF8));
        landmarksLab->setText(QApplication::translate("ScenePropertiesDialog", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ScenePropertiesDialog", "Landmark descriptor length:", 0, QApplication::UnicodeUTF8));
        descLengthLab->setText(QApplication::translate("ScenePropertiesDialog", "1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScenePropertiesDialog: public Ui_ScenePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEPROPERTIESDIALOG_H
