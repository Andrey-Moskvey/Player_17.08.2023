/********************************************************************************
** Form generated from reading UI file 'selectfilewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFILEWINDOW_H
#define UI_SELECTFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectFileWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonSelectLeft;
    QPushButton *pushButtonSelectRight;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelPathLeft;
    QLabel *labelPathRight;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonPlay;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpinBox *spinBox_LeftHalf;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpinBox *spinBox_RightHalf;

    void setupUi(QDialog *selectFileWindow)
    {
        if (selectFileWindow->objectName().isEmpty())
            selectFileWindow->setObjectName("selectFileWindow");
        selectFileWindow->resize(623, 323);
        verticalLayoutWidget = new QWidget(selectFileWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 40, 221, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSelectLeft = new QPushButton(verticalLayoutWidget);
        pushButtonSelectLeft->setObjectName("pushButtonSelectLeft");

        verticalLayout->addWidget(pushButtonSelectLeft);

        pushButtonSelectRight = new QPushButton(verticalLayoutWidget);
        pushButtonSelectRight->setObjectName("pushButtonSelectRight");

        verticalLayout->addWidget(pushButtonSelectRight);

        verticalLayoutWidget_2 = new QWidget(selectFileWindow);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(260, 60, 291, 204));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPathLeft = new QLabel(verticalLayoutWidget_2);
        labelPathLeft->setObjectName("labelPathLeft");

        verticalLayout_2->addWidget(labelPathLeft);

        labelPathRight = new QLabel(verticalLayoutWidget_2);
        labelPathRight->setObjectName("labelPathRight");

        verticalLayout_2->addWidget(labelPathRight);

        horizontalLayoutWidget = new QWidget(selectFileWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(341, 279, 271, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonExit = new QPushButton(horizontalLayoutWidget);
        pushButtonExit->setObjectName("pushButtonExit");

        horizontalLayout_2->addWidget(pushButtonExit);

        pushButtonPlay = new QPushButton(horizontalLayoutWidget);
        pushButtonPlay->setObjectName("pushButtonPlay");

        horizontalLayout_2->addWidget(pushButtonPlay);

        verticalLayoutWidget_3 = new QWidget(selectFileWindow);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(560, 77, 53, 151));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        spinBox_LeftHalf = new QSpinBox(verticalLayoutWidget_3);
        spinBox_LeftHalf->setObjectName("spinBox_LeftHalf");
        spinBox_LeftHalf->setMaximum(1000);

        verticalLayout_3->addWidget(spinBox_LeftHalf);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        spinBox_RightHalf = new QSpinBox(verticalLayoutWidget_3);
        spinBox_RightHalf->setObjectName("spinBox_RightHalf");
        spinBox_RightHalf->setMaximum(1000);

        verticalLayout_3->addWidget(spinBox_RightHalf);


        retranslateUi(selectFileWindow);

        QMetaObject::connectSlotsByName(selectFileWindow);
    } // setupUi

    void retranslateUi(QDialog *selectFileWindow)
    {
        selectFileWindow->setWindowTitle(QCoreApplication::translate("selectFileWindow", "Dialog", nullptr));
        pushButtonSelectLeft->setText(QCoreApplication::translate("selectFileWindow", "Select left half of video", nullptr));
        pushButtonSelectRight->setText(QCoreApplication::translate("selectFileWindow", "Select right half of video", nullptr));
        labelPathLeft->setText(QCoreApplication::translate("selectFileWindow", "PathL", nullptr));
        labelPathRight->setText(QCoreApplication::translate("selectFileWindow", "PathR", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("selectFileWindow", "Exit", nullptr));
        pushButtonPlay->setText(QCoreApplication::translate("selectFileWindow", "Play", nullptr));
        label->setText(QCoreApplication::translate("selectFileWindow", "Frames:", nullptr));
        label_2->setText(QCoreApplication::translate("selectFileWindow", "Frames:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectFileWindow: public Ui_selectFileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFILEWINDOW_H
