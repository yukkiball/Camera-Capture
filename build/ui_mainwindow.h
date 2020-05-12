/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionRecord;
    QAction *actionUploadParameters;
    QAction *actionSetSavePath;
    QAction *actionCalibrate;
    QAction *actionBoard;
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *parameter_tab;
    QGridLayout *gridLayout_3;
    QTreeWidget *parameter_tree;
    QWidget *control_tab;
    QtCharts::QChartView *graphicsView;
    QGroupBox *groupBox;
    QProgressBar *CurrentBar;
    QProgressBar *VoltageBar;
    QLabel *label;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLCDNumber *AI_Current;
    QLabel *label_3;
    QLCDNumber *AI_Voltage;
    QtCharts::QChartView *graphicsView_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QProgressBar *widthBar;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QProgressBar *lengthBar;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *processButton;
    QLabel *roi_wnd;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser;
    QLabel *display_wnd;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1531, 893);
        MainWindow->setMinimumSize(QSize(1175, 755));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/connect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionDisconnect->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/disconnect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionStop->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionRecord->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/record.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecord->setIcon(icon4);
        actionUploadParameters = new QAction(MainWindow);
        actionUploadParameters->setObjectName(QString::fromUtf8("actionUploadParameters"));
        actionUploadParameters->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/upload_para.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUploadParameters->setIcon(icon5);
        actionSetSavePath = new QAction(MainWindow);
        actionSetSavePath->setObjectName(QString::fromUtf8("actionSetSavePath"));
        actionSetSavePath->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/save_path.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetSavePath->setIcon(icon6);
        actionCalibrate = new QAction(MainWindow);
        actionCalibrate->setObjectName(QString::fromUtf8("actionCalibrate"));
        actionCalibrate->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/resources/calibration.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalibrate->setIcon(icon7);
        actionBoard = new QAction(MainWindow);
        actionBoard->setObjectName(QString::fromUtf8("actionBoard"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/circuit-board.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBoard->setIcon(icon8);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(450, 500));
        groupBox_3->setMaximumSize(QSize(450, 16777215));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(groupBox_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(440, 0));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        parameter_tab = new QWidget();
        parameter_tab->setObjectName(QString::fromUtf8("parameter_tab"));
        gridLayout_3 = new QGridLayout(parameter_tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        parameter_tree = new QTreeWidget(parameter_tab);
        new QTreeWidgetItem(parameter_tree);
        new QTreeWidgetItem(parameter_tree);
        new QTreeWidgetItem(parameter_tree);
        new QTreeWidgetItem(parameter_tree);
        new QTreeWidgetItem(parameter_tree);
        new QTreeWidgetItem(parameter_tree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(parameter_tree);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        parameter_tree->setObjectName(QString::fromUtf8("parameter_tree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(parameter_tree->sizePolicy().hasHeightForWidth());
        parameter_tree->setSizePolicy(sizePolicy1);
        parameter_tree->setIndentation(5);
        parameter_tree->header()->setStretchLastSection(true);

        gridLayout_3->addWidget(parameter_tree, 0, 0, 1, 1);

        tabWidget->addTab(parameter_tab, QString());
        control_tab = new QWidget();
        control_tab->setObjectName(QString::fromUtf8("control_tab"));
        graphicsView = new QtCharts::QChartView(control_tab);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 100, 411, 221));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(control_tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 620, 411, 121));
        CurrentBar = new QProgressBar(groupBox);
        CurrentBar->setObjectName(QString::fromUtf8("CurrentBar"));
        CurrentBar->setGeometry(QRect(30, 80, 118, 23));
        CurrentBar->setMinimum(100);
        CurrentBar->setMaximum(200);
        CurrentBar->setValue(150);
        VoltageBar = new QProgressBar(groupBox);
        VoltageBar->setObjectName(QString::fromUtf8("VoltageBar"));
        VoltageBar->setGeometry(QRect(240, 80, 118, 23));
        VoltageBar->setMaximum(25);
        VoltageBar->setValue(18);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 72, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 40, 72, 31));
        layoutWidget = new QWidget(control_tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(-10, 40, 421, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        AI_Current = new QLCDNumber(layoutWidget);
        AI_Current->setObjectName(QString::fromUtf8("AI_Current"));
        AI_Current->setSmallDecimalPoint(true);

        horizontalLayout_3->addWidget(AI_Current);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        AI_Voltage = new QLCDNumber(layoutWidget);
        AI_Voltage->setObjectName(QString::fromUtf8("AI_Voltage"));
        AI_Voltage->setSmallDecimalPoint(true);

        horizontalLayout_3->addWidget(AI_Voltage);

        graphicsView_3 = new QtCharts::QChartView(control_tab);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(10, 360, 411, 221));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(control_tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        groupBox_4->setMaximumSize(QSize(300, 16777215));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/width.png")));
        label_2->setScaledContents(true);

        verticalLayout->addWidget(label_2);

        widthBar = new QProgressBar(groupBox_4);
        widthBar->setObjectName(QString::fromUtf8("widthBar"));
        widthBar->setMaximum(30);
        widthBar->setValue(0);
        widthBar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(widthBar);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(28, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/length.png")));
        label_5->setScaledContents(true);

        verticalLayout_2->addWidget(label_5);

        lengthBar = new QProgressBar(groupBox_4);
        lengthBar->setObjectName(QString::fromUtf8("lengthBar"));
        lengthBar->setMaximum(30);
        lengthBar->setValue(0);
        lengthBar->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lengthBar);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        processButton = new QPushButton(groupBox_4);
        processButton->setObjectName(QString::fromUtf8("processButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        processButton->setFont(font);
        processButton->setCheckable(true);
        processButton->setChecked(false);

        verticalLayout_3->addWidget(processButton);

        roi_wnd = new QLabel(groupBox_4);
        roi_wnd->setObjectName(QString::fromUtf8("roi_wnd"));
        roi_wnd->setEnabled(false);
        sizePolicy1.setHeightForWidth(roi_wnd->sizePolicy().hasHeightForWidth());
        roi_wnd->setSizePolicy(sizePolicy1);
        roi_wnd->setMinimumSize(QSize(240, 240));
        roi_wnd->setMaximumSize(QSize(280, 280));
        roi_wnd->setAutoFillBackground(true);
        roi_wnd->setPixmap(QPixmap(QString::fromUtf8(":/pics/default.bmp")));

        verticalLayout_3->addWidget(roi_wnd);


        gridLayout_4->addLayout(verticalLayout_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(textBrowser, 1, 0, 1, 1);

        display_wnd = new QLabel(groupBox_2);
        display_wnd->setObjectName(QString::fromUtf8("display_wnd"));
        display_wnd->setEnabled(false);
        sizePolicy1.setHeightForWidth(display_wnd->sizePolicy().hasHeightForWidth());
        display_wnd->setSizePolicy(sizePolicy1);
        display_wnd->setMinimumSize(QSize(640, 480));
        display_wnd->setMaximumSize(QSize(16777215, 16777215));
        display_wnd->setAutoFillBackground(true);
        display_wnd->setPixmap(QPixmap(QString::fromUtf8(":/pics/default.bmp")));

        gridLayout_2->addWidget(display_wnd, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setIconSize(QSize(60, 35));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionBoard);
        toolBar->addAction(actionConnect);
        toolBar->addAction(actionDisconnect);
        toolBar->addSeparator();
        toolBar->addAction(actionUploadParameters);
        toolBar->addAction(actionStart);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionSetSavePath);
        toolBar->addAction(actionRecord);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        actionStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStart->setToolTip(QApplication::translate("MainWindow", "Start", nullptr));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        actionRecord->setText(QApplication::translate("MainWindow", "Record", nullptr));
        actionUploadParameters->setText(QApplication::translate("MainWindow", "UploadParameters", nullptr));
        actionSetSavePath->setText(QApplication::translate("MainWindow", "SetSavePath", nullptr));
        actionCalibrate->setText(QApplication::translate("MainWindow", "Calibrate", nullptr));
        actionBoard->setText(QApplication::translate("MainWindow", "Board", nullptr));
        groupBox_3->setTitle(QString());
        QTreeWidgetItem *___qtreewidgetitem = parameter_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Parameter", nullptr));

        const bool __sortingEnabled = parameter_tree->isSortingEnabled();
        parameter_tree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = parameter_tree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Width", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = parameter_tree->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Height", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = parameter_tree->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Frame rate", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = parameter_tree->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Exposure time", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = parameter_tree->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Trigger mode", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = parameter_tree->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Polarity", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = parameter_tree->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "ImageProcess", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "ROI.x", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "ROI.y", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "ROI.w", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem7->child(3);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "ROI.h", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem7->child(4);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "Threshold", nullptr));
        parameter_tree->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(parameter_tab), QApplication::translate("MainWindow", "Camera Parameters", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Suggest Parameters", nullptr));
        CurrentBar->setFormat(QApplication::translate("MainWindow", "%vA", nullptr));
        VoltageBar->setFormat(QApplication::translate("MainWindow", "%vV", nullptr));
        label->setText(QApplication::translate("MainWindow", "Current", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Voltage", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Current", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Voltage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(control_tab), QApplication::translate("MainWindow", "Weld Control", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Monitor Window", nullptr));
        label_2->setText(QString());
        widthBar->setFormat(QApplication::translate("MainWindow", "%vmm", nullptr));
        label_5->setText(QString());
        lengthBar->setFormat(QApplication::translate("MainWindow", "%vmm", nullptr));
        processButton->setText(QApplication::translate("MainWindow", "Image Process", nullptr));
        roi_wnd->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Display Window", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        display_wnd->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
