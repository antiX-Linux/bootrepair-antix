/********************************************************************************
** Form generated from reading UI file 'mxbootrepair.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MXBOOTREPAIR_H
#define UI_MXBOOTREPAIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mxbootrepair
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *startPage;
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QGroupBox *whatGroupBox;
    QGridLayout *_3;
    QRadioButton *bakRadioButton;
    QRadioButton *reinstallRadioButton;
    QRadioButton *repairRadioButton;
    QRadioButton *restoreBakRadioButton;
    QWidget *selectionPage;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *bootMethodGroup;
    QGridLayout *gridLayout_2;
    QRadioButton *grubMbrButton;
    QRadioButton *grubRootButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *spacerItem;
    QLabel *grubInsLabel;
    QLabel *grubBootDiskLabel;
    QLabel *rootLabel;
    QRadioButton *grubEspButton;
    QComboBox *grubBootCombo;
    QComboBox *rootCombo;
    QWidget *outputPage;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *outputBox;
    QLabel *outputLabel;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer4;
    QGridLayout *buttonBar;
    QPushButton *buttonAbout;
    QSpacerItem *horizontalSpacer1;
    QSpacerItem *horizontalSpacer2;
    QPushButton *buttonHelp;
    QLabel *label;
    QPushButton *buttonCancel;
    QPushButton *buttonApply;
    QSpacerItem *horizontalSpacer3;

    void setupUi(QDialog *mxbootrepair)
    {
        if (mxbootrepair->objectName().isEmpty())
            mxbootrepair->setObjectName(QStringLiteral("mxbootrepair"));
        mxbootrepair->resize(515, 320);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mxbootrepair->sizePolicy().hasHeightForWidth());
        mxbootrepair->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(mxbootrepair);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(mxbootrepair);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        startPage = new QWidget();
        startPage->setObjectName(QStringLiteral("startPage"));
        verticalLayout = new QVBoxLayout(startPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        infoLabel = new QLabel(startPage);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setTextFormat(Qt::PlainText);
        infoLabel->setWordWrap(true);

        verticalLayout->addWidget(infoLabel);

        whatGroupBox = new QGroupBox(startPage);
        whatGroupBox->setObjectName(QStringLiteral("whatGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(whatGroupBox->sizePolicy().hasHeightForWidth());
        whatGroupBox->setSizePolicy(sizePolicy1);
        _3 = new QGridLayout(whatGroupBox);
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(9, 9, 9, 9);
        bakRadioButton = new QRadioButton(whatGroupBox);
        bakRadioButton->setObjectName(QStringLiteral("bakRadioButton"));

        _3->addWidget(bakRadioButton, 3, 0, 1, 1);

        reinstallRadioButton = new QRadioButton(whatGroupBox);
        reinstallRadioButton->setObjectName(QStringLiteral("reinstallRadioButton"));
        reinstallRadioButton->setChecked(true);

        _3->addWidget(reinstallRadioButton, 1, 0, 1, 1);

        repairRadioButton = new QRadioButton(whatGroupBox);
        repairRadioButton->setObjectName(QStringLiteral("repairRadioButton"));

        _3->addWidget(repairRadioButton, 2, 0, 1, 1);

        restoreBakRadioButton = new QRadioButton(whatGroupBox);
        restoreBakRadioButton->setObjectName(QStringLiteral("restoreBakRadioButton"));

        _3->addWidget(restoreBakRadioButton, 4, 0, 1, 1);


        verticalLayout->addWidget(whatGroupBox);

        stackedWidget->addWidget(startPage);
        selectionPage = new QWidget();
        selectionPage->setObjectName(QStringLiteral("selectionPage"));
        verticalLayout_3 = new QVBoxLayout(selectionPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        bootMethodGroup = new QGroupBox(selectionPage);
        bootMethodGroup->setObjectName(QStringLiteral("bootMethodGroup"));
        sizePolicy1.setHeightForWidth(bootMethodGroup->sizePolicy().hasHeightForWidth());
        bootMethodGroup->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(bootMethodGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        grubMbrButton = new QRadioButton(bootMethodGroup);
        grubMbrButton->setObjectName(QStringLiteral("grubMbrButton"));
        sizePolicy1.setHeightForWidth(grubMbrButton->sizePolicy().hasHeightForWidth());
        grubMbrButton->setSizePolicy(sizePolicy1);
        grubMbrButton->setMinimumSize(QSize(80, 0));
        grubMbrButton->setChecked(true);

        gridLayout_2->addWidget(grubMbrButton, 0, 3, 1, 1);

        grubRootButton = new QRadioButton(bootMethodGroup);
        grubRootButton->setObjectName(QStringLiteral("grubRootButton"));
        sizePolicy1.setHeightForWidth(grubRootButton->sizePolicy().hasHeightForWidth());
        grubRootButton->setSizePolicy(sizePolicy1);
        grubRootButton->setMinimumSize(QSize(80, 0));
        grubRootButton->setChecked(false);

        gridLayout_2->addWidget(grubRootButton, 0, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 3, 1, 1);

        spacerItem = new QSpacerItem(16, 71, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 0, 0, 4, 1);

        grubInsLabel = new QLabel(bootMethodGroup);
        grubInsLabel->setObjectName(QStringLiteral("grubInsLabel"));
        sizePolicy1.setHeightForWidth(grubInsLabel->sizePolicy().hasHeightForWidth());
        grubInsLabel->setSizePolicy(sizePolicy1);
        grubInsLabel->setMinimumSize(QSize(170, 0));
        grubInsLabel->setWordWrap(false);

        gridLayout_2->addWidget(grubInsLabel, 0, 1, 1, 1);

        grubBootDiskLabel = new QLabel(bootMethodGroup);
        grubBootDiskLabel->setObjectName(QStringLiteral("grubBootDiskLabel"));
        sizePolicy1.setHeightForWidth(grubBootDiskLabel->sizePolicy().hasHeightForWidth());
        grubBootDiskLabel->setSizePolicy(sizePolicy1);
        QFont font;
        grubBootDiskLabel->setFont(font);
        grubBootDiskLabel->setWordWrap(false);

        gridLayout_2->addWidget(grubBootDiskLabel, 1, 1, 1, 1);

        rootLabel = new QLabel(bootMethodGroup);
        rootLabel->setObjectName(QStringLiteral("rootLabel"));
        sizePolicy1.setHeightForWidth(rootLabel->sizePolicy().hasHeightForWidth());
        rootLabel->setSizePolicy(sizePolicy1);
        rootLabel->setFont(font);
        rootLabel->setWordWrap(false);

        gridLayout_2->addWidget(rootLabel, 2, 1, 1, 1);

        grubEspButton = new QRadioButton(bootMethodGroup);
        grubEspButton->setObjectName(QStringLiteral("grubEspButton"));
        grubEspButton->setEnabled(true);

        gridLayout_2->addWidget(grubEspButton, 0, 5, 1, 1);

        grubBootCombo = new QComboBox(bootMethodGroup);
        grubBootCombo->setObjectName(QStringLiteral("grubBootCombo"));
        sizePolicy1.setHeightForWidth(grubBootCombo->sizePolicy().hasHeightForWidth());
        grubBootCombo->setSizePolicy(sizePolicy1);
        grubBootCombo->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(grubBootCombo, 1, 3, 1, 3);

        rootCombo = new QComboBox(bootMethodGroup);
        rootCombo->setObjectName(QStringLiteral("rootCombo"));
        sizePolicy1.setHeightForWidth(rootCombo->sizePolicy().hasHeightForWidth());
        rootCombo->setSizePolicy(sizePolicy1);
        rootCombo->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(rootCombo, 2, 3, 1, 3);


        verticalLayout_3->addWidget(bootMethodGroup);

        stackedWidget->addWidget(selectionPage);
        outputPage = new QWidget();
        outputPage->setObjectName(QStringLiteral("outputPage"));
        verticalLayout_2 = new QVBoxLayout(outputPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        outputBox = new QTextBrowser(outputPage);
        outputBox->setObjectName(QStringLiteral("outputBox"));

        verticalLayout_2->addWidget(outputBox);

        outputLabel = new QLabel(outputPage);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setTextFormat(Qt::RichText);
        outputLabel->setWordWrap(true);

        verticalLayout_2->addWidget(outputLabel);

        stackedWidget->addWidget(outputPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 3);

        progressBar = new QProgressBar(mxbootrepair);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar, 1, 1, 1, 1);

        horizontalSpacer4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer4, 1, 2, 1, 1);

        buttonBar = new QGridLayout();
        buttonBar->setSpacing(5);
        buttonBar->setObjectName(QStringLiteral("buttonBar"));
        buttonBar->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonBar->setContentsMargins(0, 0, 0, 0);
        buttonAbout = new QPushButton(mxbootrepair);
        buttonAbout->setObjectName(QStringLiteral("buttonAbout"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonAbout->sizePolicy().hasHeightForWidth());
        buttonAbout->setSizePolicy(sizePolicy2);
        QIcon icon;
        QString iconThemeName = QStringLiteral("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonAbout->setIcon(icon);
        buttonAbout->setAutoDefault(true);

        buttonBar->addWidget(buttonAbout, 0, 0, 1, 1);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer1, 0, 2, 1, 1);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer2, 0, 5, 1, 1);

        buttonHelp = new QPushButton(mxbootrepair);
        buttonHelp->setObjectName(QStringLiteral("buttonHelp"));
        sizePolicy2.setHeightForWidth(buttonHelp->sizePolicy().hasHeightForWidth());
        buttonHelp->setSizePolicy(sizePolicy2);
        QIcon icon1;
        iconThemeName = QStringLiteral("help-contents");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonHelp->setIcon(icon1);

        buttonBar->addWidget(buttonHelp, 0, 1, 1, 1);

        label = new QLabel(mxbootrepair);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(32, 32));
        label->setMidLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/antix-globe-3.png")));
        label->setScaledContents(true);

        buttonBar->addWidget(label, 0, 3, 1, 1);

        buttonCancel = new QPushButton(mxbootrepair);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        sizePolicy2.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy2);
        QIcon icon2;
        iconThemeName = QStringLiteral("window-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonCancel->setIcon(icon2);
        buttonCancel->setAutoDefault(true);

        buttonBar->addWidget(buttonCancel, 0, 7, 1, 1);

        buttonApply = new QPushButton(mxbootrepair);
        buttonApply->setObjectName(QStringLiteral("buttonApply"));
        sizePolicy2.setHeightForWidth(buttonApply->sizePolicy().hasHeightForWidth());
        buttonApply->setSizePolicy(sizePolicy2);
        QIcon icon3;
        iconThemeName = QStringLiteral("dialog-ok");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonApply->setIcon(icon3);
        buttonApply->setAutoDefault(true);

        buttonBar->addWidget(buttonApply, 0, 6, 1, 1);


        gridLayout->addLayout(buttonBar, 2, 0, 1, 3);

        horizontalSpacer3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer3, 1, 0, 1, 1);

        QWidget::setTabOrder(reinstallRadioButton, repairRadioButton);
        QWidget::setTabOrder(repairRadioButton, bakRadioButton);
        QWidget::setTabOrder(bakRadioButton, restoreBakRadioButton);
        QWidget::setTabOrder(restoreBakRadioButton, buttonAbout);
        QWidget::setTabOrder(buttonAbout, buttonHelp);
        QWidget::setTabOrder(buttonHelp, buttonApply);
        QWidget::setTabOrder(buttonApply, buttonCancel);
        QWidget::setTabOrder(buttonCancel, grubMbrButton);
        QWidget::setTabOrder(grubMbrButton, grubRootButton);
        QWidget::setTabOrder(grubRootButton, grubEspButton);
        QWidget::setTabOrder(grubEspButton, grubBootCombo);
        QWidget::setTabOrder(grubBootCombo, rootCombo);
        QWidget::setTabOrder(rootCombo, outputBox);

        retranslateUi(mxbootrepair);
        QObject::connect(buttonCancel, SIGNAL(pressed()), mxbootrepair, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);
        buttonApply->setDefault(false);


        QMetaObject::connectSlotsByName(mxbootrepair);
    } // setupUi

    void retranslateUi(QDialog *mxbootrepair)
    {
        mxbootrepair->setWindowTitle(QApplication::translate("mxbootrepair", "Boot Repair", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("mxbootrepair", "Boot Repair is a utility that can be used to reinstall GRUB bootloader on the MBR (Master Boot Record) or root partition. It provides the option to reconstruct the GRUB configuration file and to back up and restore MBR or PBR.", Q_NULLPTR));
        whatGroupBox->setTitle(QApplication::translate("mxbootrepair", "What would you like to do?", Q_NULLPTR));
        bakRadioButton->setText(QApplication::translate("mxbootrepair", "Backup MBR or PBR (legacy boot only)", Q_NULLPTR));
        reinstallRadioButton->setText(QApplication::translate("mxbootrepair", "Reinstall GRUB bootloader", Q_NULLPTR));
        repairRadioButton->setText(QApplication::translate("mxbootrepair", "Repair GRUB configuration file", Q_NULLPTR));
        restoreBakRadioButton->setText(QApplication::translate("mxbootrepair", "Restore MBR or PBR from backup (legacy boot only)", Q_NULLPTR));
        bootMethodGroup->setTitle(QApplication::translate("mxbootrepair", "Select Boot Method", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        grubMbrButton->setToolTip(QApplication::translate("mxbootrepair", "Master Boot Record", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grubMbrButton->setText(QApplication::translate("mxbootrepair", "MBR", Q_NULLPTR));
        grubMbrButton->setShortcut(QApplication::translate("mxbootrepair", "Alt+B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        grubRootButton->setToolTip(QApplication::translate("mxbootrepair", "Root (Partition Boot Record)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grubRootButton->setText(QApplication::translate("mxbootrepair", "root", Q_NULLPTR));
        grubInsLabel->setText(QApplication::translate("mxbootrepair", "Install on:", Q_NULLPTR));
        grubBootDiskLabel->setText(QApplication::translate("mxbootrepair", "Location:", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        rootLabel->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        rootLabel->setText(QApplication::translate("mxbootrepair", "Select /boot location:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        grubEspButton->setToolTip(QApplication::translate("mxbootrepair", "EFI System Partition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grubEspButton->setText(QApplication::translate("mxbootrepair", "ESP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonAbout->setToolTip(QApplication::translate("mxbootrepair", "About this application", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonAbout->setText(QApplication::translate("mxbootrepair", "About...", Q_NULLPTR));
        buttonAbout->setShortcut(QApplication::translate("mxbootrepair", "Alt+B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonHelp->setToolTip(QApplication::translate("mxbootrepair", "Display help ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonHelp->setText(QApplication::translate("mxbootrepair", "Help", Q_NULLPTR));
        buttonHelp->setShortcut(QApplication::translate("mxbootrepair", "Alt+H", Q_NULLPTR));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonCancel->setToolTip(QApplication::translate("mxbootrepair", "Cancel any changes then quit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonCancel->setText(QApplication::translate("mxbootrepair", "Cancel", Q_NULLPTR));
        buttonCancel->setShortcut(QApplication::translate("mxbootrepair", "Alt+N", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonApply->setToolTip(QApplication::translate("mxbootrepair", "Apply any changes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonApply->setText(QApplication::translate("mxbootrepair", "Apply", Q_NULLPTR));
        buttonApply->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class mxbootrepair: public Ui_mxbootrepair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MXBOOTREPAIR_H
