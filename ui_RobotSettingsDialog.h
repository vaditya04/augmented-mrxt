/********************************************************************************
** Form generated from reading UI file 'RobotSettingsDialog.ui'
**
** Created: Thu Feb 5 16:15:28 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTSETTINGSDIALOG_H
#define UI_ROBOTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_RobotSettingsDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_40;
    QLabel *label_46;
    QLabel *label_45;
    QLabel *label_47;
    QLabel *label_37;
    QLabel *label_48;
    QLabel *label_38;
    QLabel *label_49;
    QLabel *label_39;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_54;
    QLabel *label_52;
    QLabel *label_55;
    QLabel *label_53;
    QLabel *label_56;
    QDoubleSpinBox *fSpinBox;
    QDoubleSpinBox *bSpinBox;
    QDoubleSpinBox *MaxDistSpinBox;
    QDoubleSpinBox *MinDistSpinBox;
    QDoubleSpinBox *widthSpinBox;
    QDoubleSpinBox *heightSpinBox;
    QDoubleSpinBox *sigmacSpinBox;
    QDoubleSpinBox *sigmarSpinBox;
    QDoubleSpinBox *sigmadSpinBox;
    QDoubleSpinBox *cameraxSpinBox;
    QDoubleSpinBox *cameraySpinBox;
    QDoubleSpinBox *camerazSpinBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_41;
    QLabel *label_43;
    QLabel *label_42;
    QLabel *label_44;
    QLabel *label_32;
    QLabel *label_31;
    QLabel *label_34;
    QLabel *label_33;
    QLabel *label_36;
    QLabel *label_35;
    QDoubleSpinBox *laserMinAngleSpinBox;
    QDoubleSpinBox *laserSigmaSpinBox;
    QDoubleSpinBox *laserxSpinBox;
    QDoubleSpinBox *laserySpinBox;
    QDoubleSpinBox *laserzSpinBox;
    QDoubleSpinBox *laserMaxAngleSpinBox;
    QLabel *label_57;
    QLabel *label_58;
    QDoubleSpinBox *laserMaxDistSpinBox;
    QLabel *label_27;
    QLabel *label_28;
    QDoubleSpinBox *laserMinDistSpinBox;
    QLabel *label_29;
    QLabel *label_30;
    QSpinBox *laserPointsSpinBox;
    QLabel *label_26;
    QLabel *label_25;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QDoubleSpinBox *alfa1SpinBox;
    QLabel *label_14;
    QLabel *label_15;
    QDoubleSpinBox *alfa2SpinBox;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *alfa3SpinBox;
    QLabel *label_18;
    QLabel *label_19;
    QDoubleSpinBox *alfa4SpinBox;
    QLabel *label_20;
    QLabel *label_21;
    QDoubleSpinBox *vmaxSpinBox;
    QLabel *label_22;
    QLabel *label_23;
    QDoubleSpinBox *wmaxSpinBox;
    QLabel *label_24;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableWidget *footprintTable;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QToolButton *addPoint;
    QToolButton *remPoint;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RobotSettingsDialog)
    {
        if (RobotSettingsDialog->objectName().isEmpty())
            RobotSettingsDialog->setObjectName(QString::fromUtf8("RobotSettingsDialog"));
        RobotSettingsDialog->resize(551, 711);
        gridLayout_4 = new QGridLayout(RobotSettingsDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_5 = new QGroupBox(RobotSettingsDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 2, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 3, 2, 1, 1);

        label_40 = new QLabel(groupBox_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout->addWidget(label_40, 4, 0, 1, 1);

        label_46 = new QLabel(groupBox_5);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout->addWidget(label_46, 4, 2, 1, 1);

        label_45 = new QLabel(groupBox_5);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout->addWidget(label_45, 5, 0, 1, 1);

        label_47 = new QLabel(groupBox_5);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout->addWidget(label_47, 5, 2, 1, 1);

        label_37 = new QLabel(groupBox_5);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout->addWidget(label_37, 6, 0, 1, 1);

        label_48 = new QLabel(groupBox_5);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout->addWidget(label_48, 6, 2, 1, 1);

        label_38 = new QLabel(groupBox_5);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout->addWidget(label_38, 7, 0, 1, 1);

        label_49 = new QLabel(groupBox_5);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout->addWidget(label_49, 7, 2, 1, 1);

        label_39 = new QLabel(groupBox_5);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout->addWidget(label_39, 8, 0, 1, 1);

        label_50 = new QLabel(groupBox_5);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout->addWidget(label_50, 8, 2, 1, 1);

        label_51 = new QLabel(groupBox_5);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout->addWidget(label_51, 9, 0, 1, 1);

        label_54 = new QLabel(groupBox_5);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout->addWidget(label_54, 9, 2, 1, 1);

        label_52 = new QLabel(groupBox_5);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout->addWidget(label_52, 10, 0, 1, 1);

        label_55 = new QLabel(groupBox_5);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout->addWidget(label_55, 10, 2, 1, 1);

        label_53 = new QLabel(groupBox_5);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout->addWidget(label_53, 11, 0, 1, 1);

        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout->addWidget(label_56, 11, 2, 1, 1);

        fSpinBox = new QDoubleSpinBox(groupBox_5);
        fSpinBox->setObjectName(QString::fromUtf8("fSpinBox"));
        fSpinBox->setMaximum(2000);
        fSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(fSpinBox, 0, 1, 1, 1);

        bSpinBox = new QDoubleSpinBox(groupBox_5);
        bSpinBox->setObjectName(QString::fromUtf8("bSpinBox"));
        bSpinBox->setMaximum(200);
        bSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(bSpinBox, 1, 1, 1, 1);

        MaxDistSpinBox = new QDoubleSpinBox(groupBox_5);
        MaxDistSpinBox->setObjectName(QString::fromUtf8("MaxDistSpinBox"));
        MaxDistSpinBox->setMaximum(20);
        MaxDistSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(MaxDistSpinBox, 2, 1, 1, 1);

        MinDistSpinBox = new QDoubleSpinBox(groupBox_5);
        MinDistSpinBox->setObjectName(QString::fromUtf8("MinDistSpinBox"));
        MinDistSpinBox->setMaximum(20);
        MinDistSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(MinDistSpinBox, 3, 1, 1, 1);

        widthSpinBox = new QDoubleSpinBox(groupBox_5);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setDecimals(0);
        widthSpinBox->setMaximum(1500);

        gridLayout->addWidget(widthSpinBox, 4, 1, 1, 1);

        heightSpinBox = new QDoubleSpinBox(groupBox_5);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setDecimals(0);
        heightSpinBox->setMaximum(1500);

        gridLayout->addWidget(heightSpinBox, 5, 1, 1, 1);

        sigmacSpinBox = new QDoubleSpinBox(groupBox_5);
        sigmacSpinBox->setObjectName(QString::fromUtf8("sigmacSpinBox"));
        sigmacSpinBox->setMaximum(20);
        sigmacSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(sigmacSpinBox, 6, 1, 1, 1);

        sigmarSpinBox = new QDoubleSpinBox(groupBox_5);
        sigmarSpinBox->setObjectName(QString::fromUtf8("sigmarSpinBox"));
        sigmarSpinBox->setMaximum(20);
        sigmarSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(sigmarSpinBox, 7, 1, 1, 1);

        sigmadSpinBox = new QDoubleSpinBox(groupBox_5);
        sigmadSpinBox->setObjectName(QString::fromUtf8("sigmadSpinBox"));
        sigmadSpinBox->setMaximum(20);
        sigmadSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(sigmadSpinBox, 8, 1, 1, 1);

        cameraxSpinBox = new QDoubleSpinBox(groupBox_5);
        cameraxSpinBox->setObjectName(QString::fromUtf8("cameraxSpinBox"));
        cameraxSpinBox->setMinimum(-2);
        cameraxSpinBox->setMaximum(2);
        cameraxSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(cameraxSpinBox, 9, 1, 1, 1);

        cameraySpinBox = new QDoubleSpinBox(groupBox_5);
        cameraySpinBox->setObjectName(QString::fromUtf8("cameraySpinBox"));
        cameraySpinBox->setMinimum(-2);
        cameraySpinBox->setMaximum(2);
        cameraySpinBox->setSingleStep(0.01);

        gridLayout->addWidget(cameraySpinBox, 10, 1, 1, 1);

        camerazSpinBox = new QDoubleSpinBox(groupBox_5);
        camerazSpinBox->setObjectName(QString::fromUtf8("camerazSpinBox"));
        camerazSpinBox->setMaximum(2);
        camerazSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(camerazSpinBox, 11, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_5, 0, 0, 1, 2);

        groupBox_3 = new QGroupBox(RobotSettingsDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(438, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_41 = new QLabel(groupBox_3);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_2->addWidget(label_41, 3, 0, 1, 2);

        label_43 = new QLabel(groupBox_3);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_2->addWidget(label_43, 3, 3, 1, 1);

        label_42 = new QLabel(groupBox_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_2->addWidget(label_42, 9, 0, 1, 1);

        label_44 = new QLabel(groupBox_3);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_2->addWidget(label_44, 9, 3, 1, 1);

        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_2->addWidget(label_32, 10, 3, 1, 1);

        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_2->addWidget(label_31, 10, 0, 1, 1);

        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_2->addWidget(label_34, 11, 3, 1, 1);

        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_2->addWidget(label_33, 11, 0, 1, 1);

        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_2->addWidget(label_36, 12, 3, 1, 1);

        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_2->addWidget(label_35, 12, 0, 1, 1);

        laserMinAngleSpinBox = new QDoubleSpinBox(groupBox_3);
        laserMinAngleSpinBox->setObjectName(QString::fromUtf8("laserMinAngleSpinBox"));
        laserMinAngleSpinBox->setMinimum(-180);
        laserMinAngleSpinBox->setMaximum(0);

        gridLayout_2->addWidget(laserMinAngleSpinBox, 3, 2, 1, 1);

        laserSigmaSpinBox = new QDoubleSpinBox(groupBox_3);
        laserSigmaSpinBox->setObjectName(QString::fromUtf8("laserSigmaSpinBox"));

        gridLayout_2->addWidget(laserSigmaSpinBox, 9, 2, 1, 1);

        laserxSpinBox = new QDoubleSpinBox(groupBox_3);
        laserxSpinBox->setObjectName(QString::fromUtf8("laserxSpinBox"));
        laserxSpinBox->setMinimum(-2);
        laserxSpinBox->setMaximum(2);
        laserxSpinBox->setSingleStep(0.01);

        gridLayout_2->addWidget(laserxSpinBox, 10, 2, 1, 1);

        laserySpinBox = new QDoubleSpinBox(groupBox_3);
        laserySpinBox->setObjectName(QString::fromUtf8("laserySpinBox"));
        laserySpinBox->setMinimum(-2);
        laserySpinBox->setMaximum(2);
        laserySpinBox->setSingleStep(0.01);

        gridLayout_2->addWidget(laserySpinBox, 11, 2, 1, 1);

        laserzSpinBox = new QDoubleSpinBox(groupBox_3);
        laserzSpinBox->setObjectName(QString::fromUtf8("laserzSpinBox"));
        laserzSpinBox->setMaximum(2);
        laserzSpinBox->setSingleStep(0.01);

        gridLayout_2->addWidget(laserzSpinBox, 12, 2, 1, 1);

        laserMaxAngleSpinBox = new QDoubleSpinBox(groupBox_3);
        laserMaxAngleSpinBox->setObjectName(QString::fromUtf8("laserMaxAngleSpinBox"));
        laserMaxAngleSpinBox->setMaximum(180);

        gridLayout_2->addWidget(laserMaxAngleSpinBox, 4, 2, 1, 1);

        label_57 = new QLabel(groupBox_3);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_2->addWidget(label_57, 4, 0, 1, 1);

        label_58 = new QLabel(groupBox_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_2->addWidget(label_58, 4, 3, 1, 1);

        laserMaxDistSpinBox = new QDoubleSpinBox(groupBox_3);
        laserMaxDistSpinBox->setObjectName(QString::fromUtf8("laserMaxDistSpinBox"));

        gridLayout_2->addWidget(laserMaxDistSpinBox, 5, 2, 1, 1);

        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_2->addWidget(label_27, 5, 0, 1, 1);

        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 5, 3, 1, 1);

        laserMinDistSpinBox = new QDoubleSpinBox(groupBox_3);
        laserMinDistSpinBox->setObjectName(QString::fromUtf8("laserMinDistSpinBox"));

        gridLayout_2->addWidget(laserMinDistSpinBox, 6, 2, 1, 1);

        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_2->addWidget(label_29, 6, 0, 1, 1);

        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_2->addWidget(label_30, 6, 3, 1, 1);

        laserPointsSpinBox = new QSpinBox(groupBox_3);
        laserPointsSpinBox->setObjectName(QString::fromUtf8("laserPointsSpinBox"));
        laserPointsSpinBox->setMaximum(360);

        gridLayout_2->addWidget(laserPointsSpinBox, 1, 2, 1, 1);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 1, 3, 1, 1);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(RobotSettingsDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        alfa1SpinBox = new QDoubleSpinBox(groupBox_4);
        alfa1SpinBox->setObjectName(QString::fromUtf8("alfa1SpinBox"));
        alfa1SpinBox->setDecimals(3);
        alfa1SpinBox->setMaximum(1);
        alfa1SpinBox->setSingleStep(0.001);

        gridLayout_3->addWidget(alfa1SpinBox, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 2, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 1, 0, 1, 1);

        alfa2SpinBox = new QDoubleSpinBox(groupBox_4);
        alfa2SpinBox->setObjectName(QString::fromUtf8("alfa2SpinBox"));
        alfa2SpinBox->setDecimals(3);
        alfa2SpinBox->setMaximum(1);
        alfa2SpinBox->setSingleStep(0.001);

        gridLayout_3->addWidget(alfa2SpinBox, 1, 1, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 1, 2, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        alfa3SpinBox = new QDoubleSpinBox(groupBox_4);
        alfa3SpinBox->setObjectName(QString::fromUtf8("alfa3SpinBox"));
        alfa3SpinBox->setDecimals(3);
        alfa3SpinBox->setMaximum(1);
        alfa3SpinBox->setSingleStep(0.001);

        gridLayout_3->addWidget(alfa3SpinBox, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 2, 2, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 3, 0, 1, 1);

        alfa4SpinBox = new QDoubleSpinBox(groupBox_4);
        alfa4SpinBox->setObjectName(QString::fromUtf8("alfa4SpinBox"));
        alfa4SpinBox->setDecimals(3);
        alfa4SpinBox->setMaximum(1);
        alfa4SpinBox->setSingleStep(0.001);

        gridLayout_3->addWidget(alfa4SpinBox, 3, 1, 1, 1);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 3, 2, 1, 1);

        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 4, 0, 1, 1);

        vmaxSpinBox = new QDoubleSpinBox(groupBox_4);
        vmaxSpinBox->setObjectName(QString::fromUtf8("vmaxSpinBox"));
        vmaxSpinBox->setMaximum(0.5);
        vmaxSpinBox->setSingleStep(0.01);

        gridLayout_3->addWidget(vmaxSpinBox, 4, 1, 1, 1);

        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 4, 2, 1, 1);

        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 5, 0, 1, 1);

        wmaxSpinBox = new QDoubleSpinBox(groupBox_4);
        wmaxSpinBox->setObjectName(QString::fromUtf8("wmaxSpinBox"));
        wmaxSpinBox->setMaximum(0.5);
        wmaxSpinBox->setSingleStep(0.01);

        gridLayout_3->addWidget(wmaxSpinBox, 5, 1, 1, 1);

        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 5, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox = new QGroupBox(RobotSettingsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        footprintTable = new QTableWidget(groupBox);
        if (footprintTable->columnCount() < 2)
            footprintTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        footprintTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        footprintTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (footprintTable->rowCount() < 4)
            footprintTable->setRowCount(4);
        footprintTable->setObjectName(QString::fromUtf8("footprintTable"));
        sizePolicy.setHeightForWidth(footprintTable->sizePolicy().hasHeightForWidth());
        footprintTable->setSizePolicy(sizePolicy);
        footprintTable->setBaseSize(QSize(0, 0));
        footprintTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        footprintTable->setAutoScrollMargin(16);
        footprintTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        footprintTable->setRowCount(4);
        footprintTable->horizontalHeader()->setVisible(true);
        footprintTable->verticalHeader()->setVisible(true);
        footprintTable->verticalHeader()->setCascadingSectionResizes(false);
        footprintTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(footprintTable);

        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        addPoint = new QToolButton(frame);
        addPoint->setObjectName(QString::fromUtf8("addPoint"));
        sizePolicy.setHeightForWidth(addPoint->sizePolicy().hasHeightForWidth());
        addPoint->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(addPoint, 1, 0, 1, 1);

        remPoint = new QToolButton(frame);
        remPoint->setObjectName(QString::fromUtf8("remPoint"));
        sizePolicy.setHeightForWidth(remPoint->sizePolicy().hasHeightForWidth());
        remPoint->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(remPoint, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 1, 1);


        horizontalLayout->addWidget(frame);


        gridLayout_4->addWidget(groupBox, 1, 1, 1, 2);

        buttonBox = new QDialogButtonBox(RobotSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 2, 2, 1, 1);


        retranslateUi(RobotSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RobotSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RobotSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RobotSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *RobotSettingsDialog)
    {
        RobotSettingsDialog->setWindowTitle(QApplication::translate("RobotSettingsDialog", "Robot Settings", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("RobotSettingsDialog", "Camera", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RobotSettingsDialog", "focal length", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RobotSettingsDialog", "px", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RobotSettingsDialog", "baseline", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RobotSettingsDialog", "Max Distance", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RobotSettingsDialog", "Min Distance", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("RobotSettingsDialog", "width", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("RobotSettingsDialog", "px", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("RobotSettingsDialog", "height", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("RobotSettingsDialog", "px", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("RobotSettingsDialog", "sigmac", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("RobotSettingsDialog", "px", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("RobotSettingsDialog", "sigmar", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("RobotSettingsDialog", "px", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("RobotSettingsDialog", "sigmad", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("RobotSettingsDialog", "px", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("RobotSettingsDialog", "camera x", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("RobotSettingsDialog", "camera y", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("RobotSettingsDialog", "camera z", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("RobotSettingsDialog", "Laser", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("RobotSettingsDialog", "Min Angle", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("RobotSettingsDialog", "deg", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("RobotSettingsDialog", "sigma", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("RobotSettingsDialog", "laser x", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("RobotSettingsDialog", "laser y", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("RobotSettingsDialog", "laser z", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("RobotSettingsDialog", "Max Angle", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("RobotSettingsDialog", "deg", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("RobotSettingsDialog", "Max Distance", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("RobotSettingsDialog", "Min Distance", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("RobotSettingsDialog", "m", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("RobotSettingsDialog", "points", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("RobotSettingsDialog", "Num. Points", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("RobotSettingsDialog", "Motion", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RobotSettingsDialog", "Alfa 1:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RobotSettingsDialog", "rad/rad", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("RobotSettingsDialog", "Alfa 2:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("RobotSettingsDialog", "rad/m", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("RobotSettingsDialog", "Alfa 3:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("RobotSettingsDialog", "m/m", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("RobotSettingsDialog", "Alfa 4:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("RobotSettingsDialog", "m/rad", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("RobotSettingsDialog", "VMax", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("RobotSettingsDialog", "m/s", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("RobotSettingsDialog", "WMax", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("RobotSettingsDialog", "rad/s", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RobotSettingsDialog", "Footprint", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = footprintTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RobotSettingsDialog", "x (m)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = footprintTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RobotSettingsDialog", "y (m)", 0, QApplication::UnicodeUTF8));
        addPoint->setText(QApplication::translate("RobotSettingsDialog", "+", 0, QApplication::UnicodeUTF8));
        remPoint->setText(QApplication::translate("RobotSettingsDialog", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RobotSettingsDialog: public Ui_RobotSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTSETTINGSDIALOG_H
