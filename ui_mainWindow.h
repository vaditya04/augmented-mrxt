/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Thu Mar 19 22:01:44 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPlay;
    QAction *actionStop;
    QAction *actionReset;
    QAction *actionOpen_Scenario;
    QAction *actionSave_Scenario;
    QAction *actionQuit;
    QAction *actionSceneProperties;
    QAction *actionRobotSettings;
    QAction *actionNearest_Frontier;
    QAction *actionCost_Utility;
    QAction *actionMarket_Based;
    QAction *actionBehaviour_Based;
    QAction *actionHybrid;
    QAction *actionCoordinated;
    QAction *actionIntegrated;
    QAction *actionEKF;
    QAction *actionRBPF;
    QAction *actionSaveVmap;
    QAction *actionAbout;
    QAction *actionConfiguration;
    QAction *actionStrategy_options;
    QAction *actionSLAM_options;
    QAction *actionNew_Scenario;
    QAction *actionSaveOmap;
    QAction *actionSaveSLAMlog;
    QAction *actionSaveGTlog;
    QAction *actionEKF2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mapLabel;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *slamMapLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *randomPosesButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *zoomSlider;
    QToolButton *playButton;
    QToolButton *stopButton;
    QLabel *label_2;
    QLCDNumber *timeDisplay;
    QMenuBar *menubar;
    QMenu *menuSimulator;
    QMenu *menuExploration;
    QMenu *menuExploration_Strategy;
    QMenu *menuSLAM_Algorithm;
    QMenu *menuHelp;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1395, 787);
        MainWindow->setDocumentMode(false);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionOpen_Scenario = new QAction(MainWindow);
        actionOpen_Scenario->setObjectName(QString::fromUtf8("actionOpen_Scenario"));
        actionSave_Scenario = new QAction(MainWindow);
        actionSave_Scenario->setObjectName(QString::fromUtf8("actionSave_Scenario"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSceneProperties = new QAction(MainWindow);
        actionSceneProperties->setObjectName(QString::fromUtf8("actionSceneProperties"));
        actionRobotSettings = new QAction(MainWindow);
        actionRobotSettings->setObjectName(QString::fromUtf8("actionRobotSettings"));
        actionNearest_Frontier = new QAction(MainWindow);
        actionNearest_Frontier->setObjectName(QString::fromUtf8("actionNearest_Frontier"));
        actionNearest_Frontier->setCheckable(true);
        actionNearest_Frontier->setChecked(false);
        actionCost_Utility = new QAction(MainWindow);
        actionCost_Utility->setObjectName(QString::fromUtf8("actionCost_Utility"));
        actionCost_Utility->setCheckable(true);
        actionMarket_Based = new QAction(MainWindow);
        actionMarket_Based->setObjectName(QString::fromUtf8("actionMarket_Based"));
        actionMarket_Based->setCheckable(true);
        actionBehaviour_Based = new QAction(MainWindow);
        actionBehaviour_Based->setObjectName(QString::fromUtf8("actionBehaviour_Based"));
        actionBehaviour_Based->setCheckable(true);
        actionHybrid = new QAction(MainWindow);
        actionHybrid->setObjectName(QString::fromUtf8("actionHybrid"));
        actionHybrid->setCheckable(true);
        actionCoordinated = new QAction(MainWindow);
        actionCoordinated->setObjectName(QString::fromUtf8("actionCoordinated"));
        actionCoordinated->setCheckable(true);
        actionIntegrated = new QAction(MainWindow);
        actionIntegrated->setObjectName(QString::fromUtf8("actionIntegrated"));
        actionIntegrated->setCheckable(true);
        actionEKF = new QAction(MainWindow);
        actionEKF->setObjectName(QString::fromUtf8("actionEKF"));
        actionEKF->setCheckable(true);
        actionEKF->setChecked(true);
        actionRBPF = new QAction(MainWindow);
        actionRBPF->setObjectName(QString::fromUtf8("actionRBPF"));
        actionRBPF->setCheckable(true);
        actionRBPF->setEnabled(true);
        actionSaveVmap = new QAction(MainWindow);
        actionSaveVmap->setObjectName(QString::fromUtf8("actionSaveVmap"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionConfiguration = new QAction(MainWindow);
        actionConfiguration->setObjectName(QString::fromUtf8("actionConfiguration"));
        actionStrategy_options = new QAction(MainWindow);
        actionStrategy_options->setObjectName(QString::fromUtf8("actionStrategy_options"));
        actionSLAM_options = new QAction(MainWindow);
        actionSLAM_options->setObjectName(QString::fromUtf8("actionSLAM_options"));
        actionNew_Scenario = new QAction(MainWindow);
        actionNew_Scenario->setObjectName(QString::fromUtf8("actionNew_Scenario"));
        actionSaveOmap = new QAction(MainWindow);
        actionSaveOmap->setObjectName(QString::fromUtf8("actionSaveOmap"));
        actionSaveSLAMlog = new QAction(MainWindow);
        actionSaveSLAMlog->setObjectName(QString::fromUtf8("actionSaveSLAMlog"));
        actionSaveGTlog = new QAction(MainWindow);
        actionSaveGTlog->setObjectName(QString::fromUtf8("actionSaveGTlog"));
        actionEKF2 = new QAction(MainWindow);
        actionEKF2->setObjectName(QString::fromUtf8("actionEKF2"));
        actionEKF2->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 684, 665));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mapLabel = new QLabel(scrollAreaWidgetContents);
        mapLabel->setObjectName(QString::fromUtf8("mapLabel"));
        mapLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mapLabel->sizePolicy().hasHeightForWidth());
        mapLabel->setSizePolicy(sizePolicy1);
        mapLabel->setLayoutDirection(Qt::LeftToRight);
        mapLabel->setAutoFillBackground(false);
        mapLabel->setScaledContents(true);
        mapLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(mapLabel);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        sizePolicy.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 683, 665));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        slamMapLabel = new QLabel(scrollAreaWidgetContents_2);
        slamMapLabel->setObjectName(QString::fromUtf8("slamMapLabel"));
        slamMapLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(slamMapLabel);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea_2, 0, 1, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(5);

        horizontalLayout->addWidget(spinBox);

        randomPosesButton = new QPushButton(frame);
        randomPosesButton->setObjectName(QString::fromUtf8("randomPosesButton"));

        horizontalLayout->addWidget(randomPosesButton);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        zoomSlider = new QSlider(frame);
        zoomSlider->setObjectName(QString::fromUtf8("zoomSlider"));
        zoomSlider->setEnabled(true);
        zoomSlider->setMinimum(1);
        zoomSlider->setMaximum(100);
        zoomSlider->setSingleStep(1);
        zoomSlider->setValue(20);
        zoomSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(zoomSlider);

        playButton = new QToolButton(frame);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout->addWidget(playButton);

        stopButton = new QToolButton(frame);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout->addWidget(stopButton);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        timeDisplay = new QLCDNumber(frame);
        timeDisplay->setObjectName(QString::fromUtf8("timeDisplay"));
        timeDisplay->setSmallDecimalPoint(false);
        timeDisplay->setNumDigits(7);
        timeDisplay->setMode(QLCDNumber::Dec);
        timeDisplay->setSegmentStyle(QLCDNumber::Flat);
        timeDisplay->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(timeDisplay);


        gridLayout->addWidget(frame, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1395, 25));
        menuSimulator = new QMenu(menubar);
        menuSimulator->setObjectName(QString::fromUtf8("menuSimulator"));
        menuExploration = new QMenu(menubar);
        menuExploration->setObjectName(QString::fromUtf8("menuExploration"));
        menuExploration_Strategy = new QMenu(menuExploration);
        menuExploration_Strategy->setObjectName(QString::fromUtf8("menuExploration_Strategy"));
        menuSLAM_Algorithm = new QMenu(menuExploration);
        menuSLAM_Algorithm->setObjectName(QString::fromUtf8("menuSLAM_Algorithm"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuExploration->menuAction());
        menubar->addAction(menuSimulator->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuSimulator->addAction(actionPlay);
        menuSimulator->addAction(actionStop);
        menuSimulator->addAction(actionReset);
        menuSimulator->addSeparator();
        menuSimulator->addAction(actionSaveVmap);
        menuSimulator->addAction(actionSaveOmap);
        menuSimulator->addAction(actionSaveSLAMlog);
        menuSimulator->addAction(actionSaveGTlog);
        menuExploration->addAction(menuExploration_Strategy->menuAction());
        menuExploration->addAction(menuSLAM_Algorithm->menuAction());
        menuExploration->addSeparator();
        menuExploration->addAction(actionStrategy_options);
        menuExploration->addAction(actionSLAM_options);
        menuExploration_Strategy->addAction(actionNearest_Frontier);
        menuExploration_Strategy->addAction(actionCost_Utility);
        menuExploration_Strategy->addAction(actionMarket_Based);
        menuExploration_Strategy->addAction(actionBehaviour_Based);
        menuExploration_Strategy->addAction(actionCoordinated);
        menuExploration_Strategy->addAction(actionIntegrated);
        menuExploration_Strategy->addAction(actionHybrid);
        menuSLAM_Algorithm->addAction(actionEKF);
        menuSLAM_Algorithm->addAction(actionEKF2);
        menuSLAM_Algorithm->addAction(actionRBPF);
        menuHelp->addAction(actionAbout);
        menuFile->addAction(actionNew_Scenario);
        menuFile->addAction(actionOpen_Scenario);
        menuFile->addAction(actionSave_Scenario);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionSceneProperties);
        menuEdit->addAction(actionRobotSettings);
        menuEdit->addSeparator();
        menuEdit->addAction(actionConfiguration);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MRXT: Multi-Robot eXploration Tool (ARVC-UMH)", 0, QApplication::UnicodeUTF8));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
        actionOpen_Scenario->setText(QApplication::translate("MainWindow", "Open Scenario...", 0, QApplication::UnicodeUTF8));
        actionSave_Scenario->setText(QApplication::translate("MainWindow", "Save Scenario...", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionSceneProperties->setText(QApplication::translate("MainWindow", "Scene properties...", 0, QApplication::UnicodeUTF8));
        actionRobotSettings->setText(QApplication::translate("MainWindow", "Robot settings...", 0, QApplication::UnicodeUTF8));
        actionNearest_Frontier->setText(QApplication::translate("MainWindow", "Nearest Frontier", 0, QApplication::UnicodeUTF8));
        actionCost_Utility->setText(QApplication::translate("MainWindow", "Cost-Utility", 0, QApplication::UnicodeUTF8));
        actionMarket_Based->setText(QApplication::translate("MainWindow", "Market-Based", 0, QApplication::UnicodeUTF8));
        actionBehaviour_Based->setText(QApplication::translate("MainWindow", "Behaviour-Based", 0, QApplication::UnicodeUTF8));
        actionHybrid->setText(QApplication::translate("MainWindow", "Hybrid", 0, QApplication::UnicodeUTF8));
        actionCoordinated->setText(QApplication::translate("MainWindow", "Coordinated", 0, QApplication::UnicodeUTF8));
        actionIntegrated->setText(QApplication::translate("MainWindow", "Integrated", 0, QApplication::UnicodeUTF8));
        actionEKF->setText(QApplication::translate("MainWindow", "EKF", 0, QApplication::UnicodeUTF8));
        actionRBPF->setText(QApplication::translate("MainWindow", "FastSLAM 1", 0, QApplication::UnicodeUTF8));
        actionSaveVmap->setText(QApplication::translate("MainWindow", "Save Landmarks Map as...", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0, QApplication::UnicodeUTF8));
        actionConfiguration->setText(QApplication::translate("MainWindow", "Configuration...", 0, QApplication::UnicodeUTF8));
        actionStrategy_options->setText(QApplication::translate("MainWindow", "Strategy options...", 0, QApplication::UnicodeUTF8));
        actionSLAM_options->setText(QApplication::translate("MainWindow", "SLAM options...", 0, QApplication::UnicodeUTF8));
        actionNew_Scenario->setText(QApplication::translate("MainWindow", "New Scenario...", 0, QApplication::UnicodeUTF8));
        actionSaveOmap->setText(QApplication::translate("MainWindow", "Save Occupancy Grid Map as...", 0, QApplication::UnicodeUTF8));
        actionSaveSLAMlog->setText(QApplication::translate("MainWindow", "Save SLAM log as ...", 0, QApplication::UnicodeUTF8));
        actionSaveGTlog->setText(QApplication::translate("MainWindow", "Save Ground Truth log as...", 0, QApplication::UnicodeUTF8));
        actionEKF2->setText(QApplication::translate("MainWindow", "EKF (no odometry)", 0, QApplication::UnicodeUTF8));
        mapLabel->setText(QApplication::translate("MainWindow", "No simulation environment loaded", 0, QApplication::UnicodeUTF8));
        slamMapLabel->setText(QApplication::translate("MainWindow", "No created map", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Num. Robots", 0, QApplication::UnicodeUTF8));
        randomPosesButton->setText(QApplication::translate("MainWindow", "Random Poses", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "x: 0.00 m", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "y: 0.00 m", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "zoom:", 0, QApplication::UnicodeUTF8));
        playButton->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("MainWindow", "||", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Elapsed Time", 0, QApplication::UnicodeUTF8));
        menuSimulator->setTitle(QApplication::translate("MainWindow", "Simulation", 0, QApplication::UnicodeUTF8));
        menuExploration->setTitle(QApplication::translate("MainWindow", "Exploration", 0, QApplication::UnicodeUTF8));
        menuExploration_Strategy->setTitle(QApplication::translate("MainWindow", "Exploration strategy", 0, QApplication::UnicodeUTF8));
        menuSLAM_Algorithm->setTitle(QApplication::translate("MainWindow", "SLAM algorithm", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
