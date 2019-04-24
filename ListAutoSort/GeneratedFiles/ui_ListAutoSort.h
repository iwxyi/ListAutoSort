/********************************************************************************
** Form generated from reading UI file 'ListAutoSort.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListAutoSortClass
{
public:
    QAction *resortAction;
    QAction *helpAction;
    QAction *aboutAction;
    QAction *workspaceAction;
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
    QPushButton *resortButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *copyExcelButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ListAutoSortClass)
    {
        if (ListAutoSortClass->objectName().isEmpty())
            ListAutoSortClass->setObjectName(QString::fromUtf8("ListAutoSortClass"));
        ListAutoSortClass->resize(669, 489);
        resortAction = new QAction(ListAutoSortClass);
        resortAction->setObjectName(QString::fromUtf8("resortAction"));
        helpAction = new QAction(ListAutoSortClass);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        aboutAction = new QAction(ListAutoSortClass);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        workspaceAction = new QAction(ListAutoSortClass);
        workspaceAction->setObjectName(QString::fromUtf8("workspaceAction"));
        centralWidget = new QWidget(ListAutoSortClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        inputVLayout = new QVBoxLayout();
        inputVLayout->setSpacing(6);
        inputVLayout->setObjectName(QString::fromUtf8("inputVLayout"));
        inputVLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        fieldsList = new QListWidget(centralWidget);
        fieldsList->setObjectName(QString::fromUtf8("fieldsList"));
        fieldsList->setContextMenuPolicy(Qt::CustomContextMenu);

        inputVLayout->addWidget(fieldsList);

        patternEdit = new QLineEdit(centralWidget);
        patternEdit->setObjectName(QString::fromUtf8("patternEdit"));

        inputVLayout->addWidget(patternEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        addCol = new QPushButton(centralWidget);
        addCol->setObjectName(QString::fromUtf8("addCol"));

        horizontalLayout_4->addWidget(addCol);


        inputVLayout->addLayout(horizontalLayout_4);

        inputEdit = new QPlainTextEdit(centralWidget);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));

        inputVLayout->addWidget(inputEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        inputButton = new QPushButton(centralWidget);
        inputButton->setObjectName(QString::fromUtf8("inputButton"));

        horizontalLayout_3->addWidget(inputButton);

        insertButton = new QPushButton(centralWidget);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        horizontalLayout_3->addWidget(insertButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pasteButton = new QPushButton(centralWidget);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));

        horizontalLayout_3->addWidget(pasteButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        inputVLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(inputVLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        resortButton = new QPushButton(centralWidget);
        resortButton->setObjectName(QString::fromUtf8("resortButton"));

        horizontalLayout_5->addWidget(resortButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        copyExcelButton = new QPushButton(centralWidget);
        copyExcelButton->setObjectName(QString::fromUtf8("copyExcelButton"));

        horizontalLayout_5->addWidget(copyExcelButton);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        horizontalLayout_2->addLayout(horizontalLayout);

        ListAutoSortClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ListAutoSortClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        ListAutoSortClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ListAutoSortClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ListAutoSortClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(workspaceAction);
        menu_2->addAction(resortAction);
        menu_3->addAction(helpAction);
        menu_3->addAction(aboutAction);

        retranslateUi(ListAutoSortClass);

        QMetaObject::connectSlotsByName(ListAutoSortClass);
    } // setupUi

    void retranslateUi(QMainWindow *ListAutoSortClass)
    {
        ListAutoSortClass->setWindowTitle(QApplication::translate("ListAutoSortClass", "ListAutoSort", nullptr));
        resortAction->setText(QApplication::translate("ListAutoSortClass", "\351\207\215\346\226\260\345\210\206\346\213\243", nullptr));
        helpAction->setText(QApplication::translate("ListAutoSortClass", "\346\225\231\347\250\213", nullptr));
        aboutAction->setText(QApplication::translate("ListAutoSortClass", "\345\205\263\344\272\216", nullptr));
        workspaceAction->setText(QApplication::translate("ListAutoSortClass", "\345\267\245\344\275\234\347\233\256\345\275\225", nullptr));
#ifndef QT_NO_TOOLTIP
        addCol->setToolTip(QApplication::translate("ListAutoSortClass", "\346\267\273\345\212\240\344\270\200\345\210\227\343\200\202\346\267\273\345\212\240\345\220\216\357\274\214\345\273\272\350\256\256\345\257\271\345\267\262\346\234\211\346\225\260\346\215\256\351\207\215\346\226\260\345\210\206\346\213\243", nullptr));
#endif // QT_NO_TOOLTIP
        addCol->setText(QApplication::translate("ListAutoSortClass", "\346\267\273\345\212\240\345\255\227\346\256\265", nullptr));
        inputButton->setText(QApplication::translate("ListAutoSortClass", "\346\267\273\345\212\240", nullptr));
#ifndef QT_NO_TOOLTIP
        insertButton->setToolTip(QApplication::translate("ListAutoSortClass", "\345\220\214\346\267\273\345\212\240\357\274\214\344\275\206\346\230\257\344\275\215\347\275\256\345\234\250\350\241\250\346\240\274\345\275\223\345\211\215\350\241\214\347\232\204\344\270\212\346\226\271", nullptr));
#endif // QT_NO_TOOLTIP
        insertButton->setText(QApplication::translate("ListAutoSortClass", "\346\217\222\345\205\245", nullptr));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("ListAutoSortClass", "\347\233\264\346\216\245\344\273\216\345\211\252\350\264\264\346\235\277\346\267\273\345\212\240\357\274\214\347\234\201\345\216\273\346\211\213\345\212\250\347\262\230\350\264\264\347\232\204\346\255\245\351\252\244", nullptr));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QApplication::translate("ListAutoSortClass", "\350\257\206\345\210\253\345\211\252\350\264\264\346\235\277", nullptr));
#ifndef QT_NO_TOOLTIP
        resortButton->setToolTip(QApplication::translate("ListAutoSortClass", "\345\257\271\346\211\200\346\234\211\350\256\260\345\275\225\351\207\215\346\226\260\345\210\206\347\261\273\357\274\233\344\274\232\344\270\242\345\244\261\346\211\200\346\234\211\346\211\213\345\212\250\344\277\256\346\224\271\343\200\202\357\274\210\345\273\272\350\256\256\346\267\273\345\212\240\345\255\227\346\256\265\345\220\216\345\206\215\344\275\277\347\224\250\357\274\211", nullptr));
#endif // QT_NO_TOOLTIP
        resortButton->setText(QApplication::translate("ListAutoSortClass", "\351\207\215\346\226\260\345\210\206\346\213\243", nullptr));
        copyExcelButton->setText(QApplication::translate("ListAutoSortClass", "\345\244\215\345\210\266\344\270\272Excel", nullptr));
        menu->setTitle(QApplication::translate("ListAutoSortClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("ListAutoSortClass", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QApplication::translate("ListAutoSortClass", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListAutoSortClass: public Ui_ListAutoSortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAUTOSORT_H
