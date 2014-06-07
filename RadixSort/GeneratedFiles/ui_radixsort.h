/********************************************************************************
** Form generated from reading UI file 'radixsort.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIXSORT_H
#define UI_RADIXSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadixSortClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *RedButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RadixSortClass)
    {
        if (RadixSortClass->objectName().isEmpty())
            RadixSortClass->setObjectName(QStringLiteral("RadixSortClass"));
        RadixSortClass->resize(895, 516);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RadixSortClass->sizePolicy().hasHeightForWidth());
        RadixSortClass->setSizePolicy(sizePolicy);
        RadixSortClass->setSizeIncrement(QSize(10, 0));
        centralWidget = new QWidget(RadixSortClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        RedButton = new QPushButton(centralWidget);
        RedButton->setObjectName(QStringLiteral("RedButton"));
        RedButton->setMaximumSize(QSize(881, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        RedButton->setPalette(palette);

        verticalLayout_3->addWidget(RedButton);

        RadixSortClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RadixSortClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RadixSortClass->setStatusBar(statusBar);

        retranslateUi(RadixSortClass);

        QMetaObject::connectSlotsByName(RadixSortClass);
    } // setupUi

    void retranslateUi(QMainWindow *RadixSortClass)
    {
        RadixSortClass->setWindowTitle(QApplication::translate("RadixSortClass", "RadixSort", 0));
        RedButton->setText(QApplication::translate("RadixSortClass", "Red Button", 0));
    } // retranslateUi

};

namespace Ui {
    class RadixSortClass: public Ui_RadixSortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIXSORT_H
