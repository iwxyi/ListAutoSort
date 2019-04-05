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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListAutoSortClass
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QPlainTextEdit *inputEdit;
    QPushButton *inputButton;
    QPushButton *pasteButton;
    QPushButton *addCol;
    QListWidget *titileList;
    QLineEdit *patternEdit;
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
        ListAutoSortClass->resize(596, 481);
        centralWidget = new QWidget(ListAutoSortClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(235, 10, 351, 401));
        inputEdit = new QPlainTextEdit(centralWidget);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));
        inputEdit->setGeometry(QRect(10, 280, 221, 101));
        inputButton = new QPushButton(centralWidget);
        inputButton->setObjectName(QStringLiteral("inputButton"));
        inputButton->setGeometry(QRect(20, 390, 75, 23));
        pasteButton = new QPushButton(centralWidget);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        pasteButton->setGeometry(QRect(150, 390, 75, 23));
        addCol = new QPushButton(centralWidget);
        addCol->setObjectName(QStringLiteral("addCol"));
        addCol->setGeometry(QRect(160, 250, 61, 23));
        titileList = new QListWidget(centralWidget);
        titileList->setObjectName(QStringLiteral("titileList"));
        titileList->setGeometry(QRect(10, 10, 221, 201));
        titileList->setContextMenuPolicy(Qt::CustomContextMenu);
        patternEdit = new QLineEdit(centralWidget);
        patternEdit->setObjectName(QStringLiteral("patternEdit"));
        patternEdit->setGeometry(QRect(10, 220, 221, 20));
        ListAutoSortClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ListAutoSortClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 23));
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
        inputButton->setText(QApplication::translate("ListAutoSortClass", "\346\231\272\350\203\275\346\267\273\345\212\240", nullptr));
        pasteButton->setText(QApplication::translate("ListAutoSortClass", "\345\211\252\350\264\264\346\235\277\350\257\273\345\217\226", nullptr));
        addCol->setText(QApplication::translate("ListAutoSortClass", "\346\267\273\345\212\240\346\226\260\345\210\227", nullptr));
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
