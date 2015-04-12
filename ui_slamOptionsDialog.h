/********************************************************************************
** Form generated from reading UI file 'slamOptionsDialog.ui'
**
** Created: Thu Feb 5 16:15:28 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAMOPTIONSDIALOG_H
#define UI_SLAMOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SlamOptionsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_3;
    QLabel *label_2;
    QDoubleSpinBox *resolutionSpinBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *xOriginSpinBox;
    QDoubleSpinBox *yOriginSpinBox;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *widthSpinBox;
    QDoubleSpinBox *heightSpinBox;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QDoubleSpinBox *MahalanobisThSpinBox;
    QLabel *label_13;
    QDoubleSpinBox *DescriptorThSpinBox;
    QRadioButton *MatchByDescriptorRadioButton;
    QRadioButton *MatchByDistanceRadioButton;
    QRadioButton *EKFRadioButton;
    QRadioButton *RBPFRadioButton;
    QLabel *label;
    QSpinBox *particlesSpinBox;
    QCheckBox *MultiplyPerRobotsCheckBox;
    QRadioButton *EKF2RadioButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QDoubleSpinBox *lowThSpinBox;
    QLabel *label_15;
    QDoubleSpinBox *highThSpinBox;

    void setupUi(QDialog *SlamOptionsDialog)
    {
        if (SlamOptionsDialog->objectName().isEmpty())
            SlamOptionsDialog->setObjectName(QString::fromUtf8("SlamOptionsDialog"));
        SlamOptionsDialog->resize(655, 464);
        gridLayout = new QGridLayout(SlamOptionsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(SlamOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setChecked(true);

        gridLayout_3->addWidget(radioButton_3, 0, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        resolutionSpinBox = new QDoubleSpinBox(groupBox);
        resolutionSpinBox->setObjectName(QString::fromUtf8("resolutionSpinBox"));
        resolutionSpinBox->setMinimum(0.01);
        resolutionSpinBox->setMaximum(2);
        resolutionSpinBox->setSingleStep(0.01);
        resolutionSpinBox->setValue(0.01);

        gridLayout_3->addWidget(resolutionSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 3, 2, 1, 1);

        xOriginSpinBox = new QDoubleSpinBox(groupBox);
        xOriginSpinBox->setObjectName(QString::fromUtf8("xOriginSpinBox"));
        xOriginSpinBox->setMinimum(-100);
        xOriginSpinBox->setMaximum(100);
        xOriginSpinBox->setSingleStep(0.05);

        gridLayout_3->addWidget(xOriginSpinBox, 4, 1, 1, 1);

        yOriginSpinBox = new QDoubleSpinBox(groupBox);
        yOriginSpinBox->setObjectName(QString::fromUtf8("yOriginSpinBox"));
        yOriginSpinBox->setMinimum(-100);
        yOriginSpinBox->setMaximum(100);
        yOriginSpinBox->setSingleStep(0.05);

        gridLayout_3->addWidget(yOriginSpinBox, 5, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 5, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 4, 2, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 5, 2, 1, 1);

        widthSpinBox = new QDoubleSpinBox(groupBox);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMaximum(100);

        gridLayout_3->addWidget(widthSpinBox, 2, 1, 1, 1);

        heightSpinBox = new QDoubleSpinBox(groupBox);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMaximum(100);

        gridLayout_3->addWidget(heightSpinBox, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 1, 2, 1);

        buttonBox = new QDialogButtonBox(SlamOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(SlamOptionsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font;
        font.setStrikeOut(false);
        groupBox_2->setFont(font);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        MahalanobisThSpinBox = new QDoubleSpinBox(groupBox_3);
        MahalanobisThSpinBox->setObjectName(QString::fromUtf8("MahalanobisThSpinBox"));
        MahalanobisThSpinBox->setMaximum(500);
        MahalanobisThSpinBox->setValue(0);

        gridLayout_4->addWidget(MahalanobisThSpinBox, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        DescriptorThSpinBox = new QDoubleSpinBox(groupBox_3);
        DescriptorThSpinBox->setObjectName(QString::fromUtf8("DescriptorThSpinBox"));
        DescriptorThSpinBox->setValue(0);

        gridLayout_4->addWidget(DescriptorThSpinBox, 1, 1, 1, 1);

        MatchByDescriptorRadioButton = new QRadioButton(groupBox_3);
        MatchByDescriptorRadioButton->setObjectName(QString::fromUtf8("MatchByDescriptorRadioButton"));
        MatchByDescriptorRadioButton->setChecked(true);
        MatchByDescriptorRadioButton->setAutoRepeat(false);

        gridLayout_4->addWidget(MatchByDescriptorRadioButton, 2, 0, 1, 2);

        MatchByDistanceRadioButton = new QRadioButton(groupBox_3);
        MatchByDistanceRadioButton->setObjectName(QString::fromUtf8("MatchByDistanceRadioButton"));

        gridLayout_4->addWidget(MatchByDistanceRadioButton, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_3, 4, 0, 1, 3);

        EKFRadioButton = new QRadioButton(groupBox_2);
        EKFRadioButton->setObjectName(QString::fromUtf8("EKFRadioButton"));
        EKFRadioButton->setChecked(true);
        EKFRadioButton->setAutoRepeat(false);

        gridLayout_2->addWidget(EKFRadioButton, 0, 0, 1, 3);

        RBPFRadioButton = new QRadioButton(groupBox_2);
        RBPFRadioButton->setObjectName(QString::fromUtf8("RBPFRadioButton"));
        RBPFRadioButton->setAutoRepeat(false);

        gridLayout_2->addWidget(RBPFRadioButton, 2, 0, 1, 3);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        particlesSpinBox = new QSpinBox(groupBox_2);
        particlesSpinBox->setObjectName(QString::fromUtf8("particlesSpinBox"));
        particlesSpinBox->setMinimum(1);
        particlesSpinBox->setMaximum(2000);

        gridLayout_2->addWidget(particlesSpinBox, 3, 1, 1, 1);

        MultiplyPerRobotsCheckBox = new QCheckBox(groupBox_2);
        MultiplyPerRobotsCheckBox->setObjectName(QString::fromUtf8("MultiplyPerRobotsCheckBox"));

        gridLayout_2->addWidget(MultiplyPerRobotsCheckBox, 3, 2, 1, 1);

        EKF2RadioButton = new QRadioButton(groupBox_2);
        EKF2RadioButton->setObjectName(QString::fromUtf8("EKF2RadioButton"));

        gridLayout_2->addWidget(EKF2RadioButton, 1, 0, 1, 3);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(SlamOptionsDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        lowThSpinBox = new QDoubleSpinBox(groupBox_4);
        lowThSpinBox->setObjectName(QString::fromUtf8("lowThSpinBox"));
        lowThSpinBox->setDecimals(3);
        lowThSpinBox->setMaximum(50);
        lowThSpinBox->setSingleStep(0.01);
        lowThSpinBox->setValue(0);

        gridLayout_5->addWidget(lowThSpinBox, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        highThSpinBox = new QDoubleSpinBox(groupBox_4);
        highThSpinBox->setObjectName(QString::fromUtf8("highThSpinBox"));
        highThSpinBox->setDecimals(3);
        highThSpinBox->setMaximum(500);
        highThSpinBox->setSingleStep(0.01);
        highThSpinBox->setValue(0);

        gridLayout_5->addWidget(highThSpinBox, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_4, 2, 0, 1, 1);


        retranslateUi(SlamOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SlamOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SlamOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SlamOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *SlamOptionsDialog)
    {
        SlamOptionsDialog->setWindowTitle(QApplication::translate("SlamOptionsDialog", "SLAM Options", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SlamOptionsDialog", "Grid Mapping:", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("SlamOptionsDialog", "Reflection Model", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SlamOptionsDialog", "Resolution", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SlamOptionsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">m<span style=\" vertical-align:super;\">2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SlamOptionsDialog", "Width", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SlamOptionsDialog", "Height", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SlamOptionsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SlamOptionsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SlamOptionsDialog", "X Origin", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SlamOptionsDialog", "Y Origin", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SlamOptionsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SlamOptionsDialog", "m", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SlamOptionsDialog", "Visual SLAM Algorithm", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("SlamOptionsDialog", "Data Association", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("SlamOptionsDialog", "- Mahalanobis Distance Threshold ", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("SlamOptionsDialog", "- Descriptor Distance Threshold", 0, QApplication::UnicodeUTF8));
        MatchByDescriptorRadioButton->setText(QApplication::translate("SlamOptionsDialog", "Nearest Neighbour by Descriptor", 0, QApplication::UnicodeUTF8));
        MatchByDistanceRadioButton->setText(QApplication::translate("SlamOptionsDialog", "Nearest Neightbour by Mahalanobis Distance", 0, QApplication::UnicodeUTF8));
        EKFRadioButton->setText(QApplication::translate("SlamOptionsDialog", "Select EKF as SLAM Algorithm", 0, QApplication::UnicodeUTF8));
        RBPFRadioButton->setText(QApplication::translate("SlamOptionsDialog", "Select FastSLAM 1.0 as SLAM Algorithm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SlamOptionsDialog", "Particles", 0, QApplication::UnicodeUTF8));
        MultiplyPerRobotsCheckBox->setText(QApplication::translate("SlamOptionsDialog", "Multiply by Number of Robots", 0, QApplication::UnicodeUTF8));
        EKF2RadioButton->setText(QApplication::translate("SlamOptionsDialog", "Select EKF without odometry as SLAM Algorithm", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("SlamOptionsDialog", "Good and Poor Localization Parameters (Hysteresis Model)", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("SlamOptionsDialog", "Low Threshold", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("SlamOptionsDialog", "High Threshold", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SlamOptionsDialog: public Ui_SlamOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAMOPTIONSDIALOG_H
