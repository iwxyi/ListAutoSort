/********************************************************************************
** Form generated from reading UI file 'ListAutoSort.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAUTOSORT_H
#define UI_LISTAUTOSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListAutoSortClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *inputVLayout;
    QListWidget *fieldsList;
    QLineEdit *patternEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *addCol;
    QPlainTextEdit *inputEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *inputButton;
    QPushButton *insertButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pasteButton;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *copyExcelButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ListAutoSortClass)
    {
        if (ListAutoSortClass->objectName().isEmpty())
            ListAutoSortClass->setObjectName(QStringLiteral("ListAutoSortClass"));
        ListAutoSortClass->resize(705, 509);
        centralWidget = new QWidget(ListAutoSortClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        inputVLayout = new QVBoxLayout();
        inputVLayout->setSpacing(6);
        inputVLayout->setObjectName(QStringLiteral("inputVLayout"));
        inputVLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        fieldsList = new QListWidget(centralWidget);
        fieldsList->setObjectName(QStringLiteral("fieldsList"));
        fieldsList->setContextMenuPolicy(Qt::CustomContextMenu);

        inputVLayout->addWidget(fieldsList);

        patternEdit = new QLineEdit(centralWidget);
        patternEdit->setObjectName(QStringLiteral("patternEdit"));

        inputVLayout->addWidget(patternEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        addCol = new QPushButton(centralWidget);
        addCol->setObjectName(QStringLiteral("addCol"));

        horizontalLayout_4->addWidget(addCol);


        inputVLayout->addLayout(horizontalLayout_4);

        inputEdit = new QPlainTextEdit(centralWidget);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));

        inputVLayout->addWidget(inputEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        inputButton = new QPushButton(centralWidget);
        inputButton->setObjectName(QStringLiteral("inputButton"));

        horizontalLayout_3->addWidget(inputButton);

        insertButton = new QPushButton(centralWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));

        horizontalLayout_3->addWidget(insertButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pasteButton = new QPushButton(centralWidget);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));

        horizontalLayout_3->addWidget(pasteButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        inputVLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(inputVLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        copyExcelButton = new QPushButton(centralWidget);
        copyExcelButton->setObjectName(QStringLiteral("copyExcelButton"));

        horizontalLayout_5->addWidget(copyExcelButton);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        horizontalLayout_2->addLayout(horizontalLayout);

        ListAutoSortClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ListAutoSortClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 705, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        ListAutoSortClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ListAutoSortClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ListAutoSortClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ListAutoSortClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ListAutoSortClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());

        retranslateUi(ListAutoSortClass);

        QMetaObject::connectSlotsByName(ListAutoSortClass);
    } // setupUi

    void retranslateUi(QMainWindow *ListAutoSortClass)
    {
        ListAutoSortClass->setWindowTitle(QApplication::translate("ListAutoSortClass", "ListAutoSort", nullptr));
        addCol->setText(QApplication::translate("ListAutoSortClass", "\346\267\273\345\212\240\345\255\227\346\256\265", nullptr));
        inputButton->setText(QApplication::translate("ListAutoSortClass", "\346\267\273\345\212\240", nullptr));
        insertButton->setText(QApplication::translate("ListAutoSortClass", "\346\217\222\345\205\245", nullptr));
        pasteButton->setText(QApplication::translate("ListAutoSortClass", "\350\257\206\345\210\253\345\211\252\350\264\264\346\235\277", nullptr));
        copyExcelButton->setText(QApplication::translate("ListAutoSortClass", "\345\244\215\345\210\266\344\270\272Excel", nullptr));
        menu->setTitle(QApplication::translate("ListAutoSortClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("ListAutoSortClass", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QApplication::translate("ListAutoSortClass", "\350\256\276\347\275\256", nullptr));
        menu_4->setTitle(QApplication::translate("ListAutoSortClass", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListAutoSortClass: public Ui_ListAutoSortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAUTOSORT_H
