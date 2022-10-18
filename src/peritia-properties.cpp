#pragma once

#include "peritia-properties.hpp"

void Peritia::showPreference() {
	
	QDialog *PropertiesDialog = new QDialog();
	
	PropertiesDialog->resize(700, 700);
	PropertiesDialog->setWindowTitle("Settings");


        QGridLayout *gridLayout_4 = new QGridLayout(PropertiesDialog);
	
	QDialogButtonBox *buttonBox = new QDialogButtonBox(PropertiesDialog);
	
	buttonBox->setOrientation(Qt::Horizontal);
	buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
       
	gridLayout_4->addWidget(buttonBox, 1, 0, 1, 2);

	//////////
	
	QListWidget *listWidget = new QListWidget(PropertiesDialog);
	QIcon icon(QIcon::fromTheme(QString::fromUtf8("preferences-desktop-theme")));
	
	QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
       	__qlistwidgetitem->setIcon(icon);
	__qlistwidgetitem->setText("Appearance");
			
      	QIcon icon1(QIcon::fromTheme(QString::fromUtf8("preferences-system")));
       	QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
       	__qlistwidgetitem1->setIcon(icon1);
	__qlistwidgetitem1->setText("Behavior");

       	QIcon icon2(QIcon::fromTheme(QString::fromUtf8("preferences-desktop-keyboard")));                                                QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
       	__qlistwidgetitem2->setIcon(icon2);
       
	QIcon icon3(QIcon::fromTheme(QString::fromUtf8("utilities-terminal")));
       	QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
	__qlistwidgetitem3->setIcon(icon3);
	
	QIcon icon4(QIcon::fromTheme(QString::fromUtf8("bookmark-new")));
      	QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
       	__qlistwidgetitem4->setIcon(icon4);
       
	gridLayout_4->addWidget(listWidget, 0, 0, 1, 1);
	
	QStackedWidget *stackedWidget = new QStackedWidget(PropertiesDialog);
      	stackedWidget->setFrameShape(QFrame::StyledPanel);
       

	QWidget *appearancePage = new QWidget();
	
	QVBoxLayout *verticalLayout_4 = new QVBoxLayout(appearancePage);
	verticalLayout_4->setSpacing(0);
	
	verticalLayout_4->setContentsMargins(0, 0, 0, 0);
	
	QScrollArea *scrollArea = new QScrollArea(appearancePage);
       	scrollArea->setFrameShape(QFrame::NoFrame);
	scrollArea->setWidgetResizable(true);
	
	QWidget *scrollAreaWidgetContents = new QWidget();
	scrollAreaWidgetContents->setGeometry(QRect(0, 0, 425, 688));
	
	QGridLayout *gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
	
	QSpinBox *appTransparencyBox = new QSpinBox(scrollAreaWidgetContents);
	appTransparencyBox->setMinimum(0);
	appTransparencyBox->setMaximum(99);
       	appTransparencyBox->setValue(0);
       
	gridLayout_3->addWidget(appTransparencyBox, 20, 1, 1, 1);
	
	QWidget *fontWidget = new QWidget(scrollAreaWidgetContents);
	
	QHBoxLayout *horizontalLayout_2 = new QHBoxLayout(fontWidget);
	horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
	
	QLabel *fontLabel = new QLabel(fontWidget);
	
	horizontalLayout_2->addWidget(fontLabel);
	
	QSpacerItem *fontSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
	
	horizontalLayout_2->addItem(fontSpacer);
	
	
	QLabel *fontSampleLabel = new QLabel(fontWidget);
	bool fontSelected;
	//QFont fonts = QFontDialog::getFont(&fontSelected, this);
//	QString cF = QString::fromStdString(fonts);
//	fontSampleLabel->setText(fonts.family());
        fontSampleLabel->setFrameShape(QFrame::StyledPanel);
        fontSampleLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(fontSampleLabel);

        QPushButton *changeFontButton = new QPushButton(fontWidget);
	changeFontButton->setText("Change...");
	
	QObject::connect(changeFontButton, &QPushButton::clicked, this, &Peritia::selectFont);


        horizontalLayout_2->addWidget(changeFontButton);


        gridLayout_3->addWidget(fontWidget, 0, 0, 2, 2);

        QCheckBox *showMenuCheckBox = new QCheckBox(scrollAreaWidgetContents);

        gridLayout_3->addWidget(showMenuCheckBox, 9, 0, 1, 2);

        QComboBox *colorSchemaCombo = new QComboBox(scrollAreaWidgetContents);

        gridLayout_3->addWidget(colorSchemaCombo, 2, 1, 1, 1);

        QLabel *label_9 = new QLabel(scrollAreaWidgetContents);

        gridLayout_3->addWidget(label_9, 24, 0, 1, 1);

        QComboBox *terminalPresetComboBox = new QComboBox(scrollAreaWidgetContents);
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->setObjectName(QString::fromUtf8("terminalPresetComboBox"));

        gridLayout_3->addWidget(terminalPresetComboBox, 24, 1, 1, 1);

        QLabel *label_6 = new QLabel(scrollAreaWidgetContents);

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        QLabel *label_15 = new QLabel(scrollAreaWidgetContents);

        gridLayout_3->addWidget(label_15, 25, 0, 1, 1);

        QCheckBox *hideTabBarCheckBox = new QCheckBox(scrollAreaWidgetContents);

        gridLayout_3->addWidget(hideTabBarCheckBox, 11, 0, 1, 2);

        QLabel *label_13 = new QLabel(scrollAreaWidgetContents);

        gridLayout_3->addWidget(label_13, 22, 0, 1, 1);

        QComboBox *scrollBarPos_comboBox = new QComboBox(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollBarPos_comboBox, 4, 1, 1, 1);

	QLabel *label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        QHBoxLayout *horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        QLineEdit *backgroundImageLineEdit = new QLineEdit(scrollAreaWidgetContents);
        backgroundImageLineEdit->setObjectName(QString::fromUtf8("backgroundImageLineEdit"));

        horizontalLayout_3->addWidget(backgroundImageLineEdit);

        QPushButton *chooseBackgroundImageButton = new QPushButton(scrollAreaWidgetContents);
        chooseBackgroundImageButton->setObjectName(QString::fromUtf8("chooseBackgroundImageButton"));

        horizontalLayout_3->addWidget(chooseBackgroundImageButton);


        gridLayout_3->addLayout(horizontalLayout_3, 22, 1, 1, 1);

        QLabel *label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 23, 0, 1, 1);

        QComboBox *backgroundModecomboBox = new QComboBox(scrollAreaWidgetContents);
        backgroundModecomboBox->addItem(QString());
        backgroundModecomboBox->addItem(QString());
        backgroundModecomboBox->addItem(QString());
        backgroundModecomboBox->addItem(QString());
        backgroundModecomboBox->addItem(QString());
        backgroundModecomboBox->setObjectName(QString::fromUtf8("backgroundModecomboBox"));

        gridLayout_3->addWidget(backgroundModecomboBox, 23, 1, 1, 1);

        QLabel *label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 6, 0, 1, 1);

        QComboBox *tabsPos_comboBox = new QComboBox(scrollAreaWidgetContents);
        tabsPos_comboBox->setObjectName(QString::fromUtf8("tabsPos_comboBox"));

        gridLayout_3->addWidget(tabsPos_comboBox, 5, 1, 1, 1);

        QSpacerItem *verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 26, 0, 1, 2);

        QCheckBox *closeTabButtonCheckBox = new QCheckBox(scrollAreaWidgetContents);
        closeTabButtonCheckBox->setObjectName(QString::fromUtf8("closeTabButtonCheckBox"));
        closeTabButtonCheckBox->setChecked(false);

        gridLayout_3->addWidget(closeTabButtonCheckBox, 14, 0, 1, 2);

        QLabel *label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 4, 0, 1, 1);

        QLabel *label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 21, 0, 1, 1);

        QComboBox *keybCursorShape_comboBox = new QComboBox(scrollAreaWidgetContents);
        keybCursorShape_comboBox->setObjectName(QString::fromUtf8("keybCursorShape_comboBox"));

        gridLayout_3->addWidget(keybCursorShape_comboBox, 6, 1, 1, 1);

	QLabel *label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 20, 0, 1, 1);

        QCheckBox *highlightCurrentCheckBox = new QCheckBox(scrollAreaWidgetContents);
        highlightCurrentCheckBox->setObjectName(QString::fromUtf8("highlightCurrentCheckBox"));

        gridLayout_3->addWidget(highlightCurrentCheckBox, 13, 0, 1, 2);

        QSpinBox *terminalMarginSpinBox = new QSpinBox(scrollAreaWidgetContents);
        terminalMarginSpinBox->setObjectName(QString::fromUtf8("terminalMarginSpinBox"));

        gridLayout_3->addWidget(terminalMarginSpinBox, 25, 1, 1, 1);

        QCheckBox *enabledBidiSupportCheckBox = new QCheckBox(scrollAreaWidgetContents);
        enabledBidiSupportCheckBox->setObjectName(QString::fromUtf8("enabledBidiSupportCheckBox"));

        gridLayout_3->addWidget(enabledBidiSupportCheckBox, 18, 0, 1, 2);

        QSpinBox *termTransparencyBox = new QSpinBox(scrollAreaWidgetContents);
        termTransparencyBox->setObjectName(QString::fromUtf8("termTransparencyBox"));
        termTransparencyBox->setMinimum(0);
        termTransparencyBox->setMaximum(100);
        termTransparencyBox->setValue(0);

        gridLayout_3->addWidget(termTransparencyBox, 21, 1, 1, 1);

        QSpinBox *fixedTabWidthSpinBox = new QSpinBox(scrollAreaWidgetContents);
        fixedTabWidthSpinBox->setObjectName(QString::fromUtf8("fixedTabWidthSpinBox"));
        fixedTabWidthSpinBox->setEnabled(false);
        fixedTabWidthSpinBox->setMaximum(1000);

        gridLayout_3->addWidget(fixedTabWidthSpinBox, 12, 1, 1, 1);

        QLabel *label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 5, 0, 1, 1);

        QCheckBox *changeWindowTitleCheckBox = new QCheckBox(scrollAreaWidgetContents);
        changeWindowTitleCheckBox->setObjectName(QString::fromUtf8("changeWindowTitleCheckBox"));

        gridLayout_3->addWidget(changeWindowTitleCheckBox, 15, 0, 1, 2);

        QCheckBox *fixedTabWidthCheckBox = new QCheckBox(scrollAreaWidgetContents);
        fixedTabWidthCheckBox->setObjectName(QString::fromUtf8("fixedTabWidthCheckBox"));

        gridLayout_3->addWidget(fixedTabWidthCheckBox, 12, 0, 1, 1);

        QComboBox *styleComboBox = new QComboBox(scrollAreaWidgetContents);
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        gridLayout_3->addWidget(styleComboBox, 3, 1, 1, 1);

        QCheckBox *changeWindowIconCheckBox = new QCheckBox(scrollAreaWidgetContents);
        changeWindowIconCheckBox->setObjectName(QString::fromUtf8("changeWindowIconCheckBox"));

        gridLayout_3->addWidget(changeWindowIconCheckBox, 16, 0, 1, 2);

        QCheckBox *showTerminalSizeHintCheckBox = new QCheckBox(scrollAreaWidgetContents);
        showTerminalSizeHintCheckBox->setObjectName(QString::fromUtf8("showTerminalSizeHintCheckBox"));

        gridLayout_3->addWidget(showTerminalSizeHintCheckBox, 17, 0, 1, 2);

        QCheckBox *useFontBoxDrawingCharsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        useFontBoxDrawingCharsCheckBox->setObjectName(QString::fromUtf8("useFontBoxDrawingCharsCheckBox"));

        gridLayout_3->addWidget(useFontBoxDrawingCharsCheckBox, 19, 0, 1, 2);

	QCheckBox *menuAccelCheckBox = new QCheckBox(scrollAreaWidgetContents);
        menuAccelCheckBox->setObjectName(QString::fromUtf8("menuAccelCheckBox"));

        gridLayout_3->addWidget(menuAccelCheckBox, 8, 0, 1, 2);

        QCheckBox *boldIntenseCheckBox = new QCheckBox(scrollAreaWidgetContents);
        boldIntenseCheckBox->setObjectName(QString::fromUtf8("boldIntenseCheckBox"));

        gridLayout_3->addWidget(boldIntenseCheckBox, 7, 0, 1, 2);

        QCheckBox *borderlessCheckBox = new QCheckBox(scrollAreaWidgetContents);
        borderlessCheckBox->setObjectName(QString::fromUtf8("borderlessCheckBox"));

        gridLayout_3->addWidget(borderlessCheckBox, 10, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        stackedWidget->addWidget(appearancePage);
        QWidget *behaviorPage = new QWidget();
        behaviorPage->setObjectName(QString::fromUtf8("behaviorPage"));
        QVBoxLayout *verticalLayout_5 = new QVBoxLayout(behaviorPage);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        QScrollArea *scrollArea1 = new QScrollArea(behaviorPage);
        scrollArea1->setObjectName(QString::fromUtf8("scrollArea1"));
        scrollArea1->setFrameShape(QFrame::NoFrame);
        scrollArea1->setWidgetResizable(true);
        QWidget *scrollAreaWidgetContents1 = new QWidget();
        scrollAreaWidgetContents1->setObjectName(QString::fromUtf8("scrollAreaWidgetContents1"));
        scrollAreaWidgetContents1->setGeometry(QRect(0, 0, 464, 633));
        QGridLayout *gridLayout_5 = new QGridLayout(scrollAreaWidgetContents1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        QSpacerItem *verticalSpacer_2 = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 1);

        QGroupBox *groupBox_4 = new QGroupBox(scrollAreaWidgetContents1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QGridLayout *gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        QComboBox *emulationComboBox = new QComboBox(groupBox_4);
        emulationComboBox->setObjectName(QString::fromUtf8("emulationComboBox"));

        gridLayout_6->addWidget(emulationComboBox, 0, 0, 1, 1);

        QLabel *label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 0, 1, 1);

	QGroupBox *groupBox_2 = new QGroupBox(scrollAreaWidgetContents1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QGridLayout *gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        QLabel *label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 14, 0, 1, 1);

        QHBoxLayout *horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        QLabel *fixedSizeLabel = new QLabel(groupBox_2);
        fixedSizeLabel->setObjectName(QString::fromUtf8("fixedSizeLabel"));

        horizontalLayout_4->addWidget(fixedSizeLabel);

        QSpinBox *fixedWithSpinBox = new QSpinBox(groupBox_2);
        fixedWithSpinBox->setObjectName(QString::fromUtf8("fixedWithSpinBox"));

        horizontalLayout_4->addWidget(fixedWithSpinBox);

        QLabel *xLabel = new QLabel(groupBox_2);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setText(QString::fromUtf8("\303\227"));

        horizontalLayout_4->addWidget(xLabel);

        QSpinBox *fixedHeightSpinBox = new QSpinBox(groupBox_2);
        fixedHeightSpinBox->setObjectName(QString::fromUtf8("fixedHeightSpinBox"));

        horizontalLayout_4->addWidget(fixedHeightSpinBox);

        QPushButton *getCurrentSizeButton = new QPushButton(groupBox_2);
        getCurrentSizeButton->setObjectName(QString::fromUtf8("getCurrentSizeButton"));

        horizontalLayout_4->addWidget(getCurrentSizeButton);

        QSpacerItem *horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 10, 0, 1, 2);

        QComboBox *termComboBox = new QComboBox(groupBox_2);
        termComboBox->addItem(QString::fromUtf8("xterm"));
        termComboBox->addItem(QString::fromUtf8("xterm-256color"));
        termComboBox->setObjectName(QString::fromUtf8("termComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(termComboBox->sizePolicy().hasHeightForWidth());
        termComboBox->setSizePolicy(sizePolicy);
        termComboBox->setEditable(true);

        gridLayout_2->addWidget(termComboBox, 13, 1, 1, 1);

        QLabel *label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        QComboBox *motionAfterPasting_comboBox = new QComboBox(groupBox_2);
        motionAfterPasting_comboBox->setObjectName(QString::fromUtf8("motionAfterPasting_comboBox"));

        gridLayout_2->addWidget(motionAfterPasting_comboBox, 2, 1, 1, 1);

        QCheckBox *useCwdCheckBox = new QCheckBox(groupBox_2);
        useCwdCheckBox->setObjectName(QString::fromUtf8("useCwdCheckBox"));

	gridLayout_2->addWidget(useCwdCheckBox, 11, 0, 1, 2);

        QCheckBox *openNewTabRightToActiveTabCheckBox = new QCheckBox(groupBox_2);
        openNewTabRightToActiveTabCheckBox->setObjectName(QString::fromUtf8("openNewTabRightToActiveTabCheckBox"));

        gridLayout_2->addWidget(openNewTabRightToActiveTabCheckBox, 12, 0, 1, 2);

        QLabel *label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 13, 0, 1, 1);

        QCheckBox *confirmMultilinePasteCheckBox = new QCheckBox(groupBox_2);
        confirmMultilinePasteCheckBox->setObjectName(QString::fromUtf8("confirmMultilinePasteCheckBox"));

        gridLayout_2->addWidget(confirmMultilinePasteCheckBox, 4, 0, 1, 2);

        QCheckBox *saveSizeOnExitCheckBox = new QCheckBox(groupBox_2);
        saveSizeOnExitCheckBox->setObjectName(QString::fromUtf8("saveSizeOnExitCheckBox"));

        gridLayout_2->addWidget(saveSizeOnExitCheckBox, 9, 0, 1, 2);

        QCheckBox *closeTabOnMiddleClickCheckBox = new QCheckBox(groupBox_2);
        closeTabOnMiddleClickCheckBox->setObjectName(QString::fromUtf8("closeTabOnMiddleClickCheckBox"));
        closeTabOnMiddleClickCheckBox->setChecked(true);

        gridLayout_2->addWidget(closeTabOnMiddleClickCheckBox, 6, 0, 1, 2);

        QCheckBox *askOnExitCheckBox = new QCheckBox(groupBox_2);
        askOnExitCheckBox->setObjectName(QString::fromUtf8("askOnExitCheckBox"));

        gridLayout_2->addWidget(askOnExitCheckBox, 7, 0, 1, 2);

        QLineEdit *handleHistoryLineEdit = new QLineEdit(groupBox_2);
        handleHistoryLineEdit->setObjectName(QString::fromUtf8("handleHistoryLineEdit"));

        gridLayout_2->addWidget(handleHistoryLineEdit, 14, 1, 1, 1);

        QRadioButton *historyLimited = new QRadioButton(groupBox_2);
        historyLimited->setObjectName(QString::fromUtf8("historyLimited"));

        gridLayout_2->addWidget(historyLimited, 0, 0, 1, 1);

        QCheckBox *trimPastedTrailingNewlinesCheckBox = new QCheckBox(groupBox_2);
        trimPastedTrailingNewlinesCheckBox->setObjectName(QString::fromUtf8("trimPastedTrailingNewlinesCheckBox"));

        gridLayout_2->addWidget(trimPastedTrailingNewlinesCheckBox, 5, 0, 1, 2);

        QCheckBox *savePosOnExitCheckBox = new QCheckBox(groupBox_2);
        savePosOnExitCheckBox->setObjectName(QString::fromUtf8("savePosOnExitCheckBox"));

        gridLayout_2->addWidget(savePosOnExitCheckBox, 8, 0, 1, 2);

        QSpinBox *historyLimitedTo = new QSpinBox(groupBox_2);
        historyLimitedTo->setObjectName(QString::fromUtf8("historyLimitedTo"));
        historyLimitedTo->setMinimum(100);
        historyLimitedTo->setMaximum(1000000);
        historyLimitedTo->setValue(1000);

        gridLayout_2->addWidget(historyLimitedTo, 0, 1, 1, 1);

        QRadioButton *historyUnlimited = new QRadioButton(groupBox_2);
        historyUnlimited->setObjectName(QString::fromUtf8("historyUnlimited"));

        gridLayout_2->addWidget(historyUnlimited, 1, 0, 1, 2);



	QCheckBox *disableBracketedPasteModeCheckBox = new QCheckBox(groupBox_2);
        disableBracketedPasteModeCheckBox->setObjectName(QString::fromUtf8("disableBracketedPasteModeCheckBox"));

        gridLayout_2->addWidget(disableBracketedPasteModeCheckBox, 3, 0, 1, 2);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        scrollArea1->setWidget(scrollAreaWidgetContents1);

        verticalLayout_5->addWidget(scrollArea1);

        stackedWidget->addWidget(behaviorPage);
        QWidget *shortcutsPage = new QWidget();
        shortcutsPage->setObjectName(QString::fromUtf8("shortcutsPage"));
        QVBoxLayout *verticalLayout = new QVBoxLayout(shortcutsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        QTableWidget *shortcutsWidget = new QTableWidget(shortcutsPage);
        if (shortcutsWidget->columnCount() < 2)
            shortcutsWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        shortcutsWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        shortcutsWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        shortcutsWidget->setObjectName(QString::fromUtf8("shortcutsWidget"));
        shortcutsWidget->setAlternatingRowColors(true);
        shortcutsWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        shortcutsWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        shortcutsWidget->setSortingEnabled(true);
        shortcutsWidget->horizontalHeader()->setDefaultSectionSize(105);
        shortcutsWidget->horizontalHeader()->setStretchLastSection(true);
        shortcutsWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(shortcutsWidget);

        stackedWidget->addWidget(shortcutsPage);
        QWidget *dropdownPage = new QWidget();
        dropdownPage->setObjectName(QString::fromUtf8("dropdownPage"));
        QVBoxLayout *verticalLayout_3 = new QVBoxLayout(dropdownPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        QCheckBox *dropShowOnStartCheckBox = new QCheckBox(dropdownPage);
        dropShowOnStartCheckBox->setObjectName(QString::fromUtf8("dropShowOnStartCheckBox"));

        verticalLayout_3->addWidget(dropShowOnStartCheckBox);

        QCheckBox *dropKeepOpenCheckBox = new QCheckBox(dropdownPage);
        dropKeepOpenCheckBox->setObjectName(QString::fromUtf8("dropKeepOpenCheckBox"));

        verticalLayout_3->addWidget(dropKeepOpenCheckBox);

        QGroupBox *groupBox_3 = new QGroupBox(dropdownPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QVBoxLayout *verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        QFormLayout *formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        QLabel *dropHeightLabel = new QLabel(groupBox_3);
        dropHeightLabel->setObjectName(QString::fromUtf8("dropHeightLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, dropHeightLabel);

	QSpinBox *dropHeightSpinBox = new QSpinBox(groupBox_3);
        dropHeightSpinBox->setObjectName(QString::fromUtf8("dropHeightSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dropHeightSpinBox);

        QLabel *dropWidthLabel = new QLabel(groupBox_3);
        dropWidthLabel->setObjectName(QString::fromUtf8("dropWidthLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dropWidthLabel);

        QSpinBox *dropWidthSpinBox = new QSpinBox(groupBox_3);
        dropWidthSpinBox->setObjectName(QString::fromUtf8("dropWidthSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dropWidthSpinBox);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addWidget(groupBox_3);

        QFormLayout *dropShortCutFormLayout = new QFormLayout();
        dropShortCutFormLayout->setObjectName(QString::fromUtf8("dropShortCutFormLayout"));
        QLabel *dropShortCutLabel = new QLabel(dropdownPage);
        dropShortCutLabel->setObjectName(QString::fromUtf8("dropShortCutLabel"));

        dropShortCutFormLayout->setWidget(0, QFormLayout::LabelRole, dropShortCutLabel);


        verticalLayout_3->addLayout(dropShortCutFormLayout);

        QSpacerItem *verticalSpacer_5 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        stackedWidget->addWidget(dropdownPage);
        QWidget *bookmarksPage = new QWidget();
        bookmarksPage->setObjectName(QString::fromUtf8("bookmarksPage"));
        QGridLayout *gridLayout_9 = new QGridLayout(bookmarksPage);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        QGroupBox *groupBox_5 = new QGroupBox(bookmarksPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QGridLayout *gridLayout_10 = new QGridLayout(groupBox_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        QPlainTextEdit *bookmarkPlainEdit = new QPlainTextEdit(groupBox_5);
        bookmarkPlainEdit->setObjectName(QString::fromUtf8("bookmarkPlainEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bera Sans Mono [bitstream]"));
        font.setPointSize(11);
        bookmarkPlainEdit->setFont(font);
        bookmarkPlainEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout_10->addWidget(bookmarkPlainEdit, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_5, 3, 0, 1, 1);

        QCheckBox *useBookmarksCheckBox = new QCheckBox(bookmarksPage);
        useBookmarksCheckBox->setObjectName(QString::fromUtf8("useBookmarksCheckBox"));

        gridLayout_9->addWidget(useBookmarksCheckBox, 0, 0, 1, 1);

        QHBoxLayout *FindBookmarkLayout = new QHBoxLayout();
        FindBookmarkLayout->setObjectName(QString::fromUtf8("FindBookmarkLayout"));

	QLabel *label_10 = new QLabel(bookmarksPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        FindBookmarkLayout->addWidget(label_10);

        QLineEdit *bookmarksLineEdit = new QLineEdit(bookmarksPage);
        bookmarksLineEdit->setObjectName(QString::fromUtf8("bookmarksLineEdit"));

        FindBookmarkLayout->addWidget(bookmarksLineEdit);

        QPushButton *bookmarksButton = new QPushButton(bookmarksPage);
        bookmarksButton->setObjectName(QString::fromUtf8("bookmarksButton"));

        FindBookmarkLayout->addWidget(bookmarksButton);


        gridLayout_9->addLayout(FindBookmarkLayout, 1, 0, 1, 1);

	QLabel *label_11 = new QLabel(bookmarksPage);
	label_11->setObjectName(QString::fromUtf8("label_11"));
	label_11->setWordWrap(true);

	gridLayout_9->addWidget(label_11, 2, 0, 1, 1);

	stackedWidget->addWidget(bookmarksPage);

	gridLayout_4->addWidget(stackedWidget, 0, 1, 1, 1);

//#if QT_CONFIG(shortcut)
        fontLabel->setText("Font");
	fontLabel->setBuddy(changeFontButton);
	label_9->setBuddy(terminalPresetComboBox);
	label_6->setBuddy(styleComboBox);
	label_15->setBuddy(terminalMarginSpinBox);
	label_5->setBuddy(colorSchemaCombo);
	label_2->setBuddy(keybCursorShape_comboBox);
	label_7->setBuddy(scrollBarPos_comboBox);
	label->setBuddy(termTransparencyBox);
	label_4->setBuddy(appTransparencyBox);
	label_8->setBuddy(tabsPos_comboBox);
	label_3->setBuddy(motionAfterPasting_comboBox);
        dropHeightLabel->setBuddy(dropHeightSpinBox);
        dropWidthLabel->setBuddy(dropWidthSpinBox);
        label_10->setBuddy(bookmarksLineEdit);


//	#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(listWidget, changeFontButton);
        QWidget::setTabOrder(changeFontButton, colorSchemaCombo);
        QWidget::setTabOrder(colorSchemaCombo, styleComboBox);
        QWidget::setTabOrder(styleComboBox, scrollBarPos_comboBox);
        QWidget::setTabOrder(scrollBarPos_comboBox, tabsPos_comboBox);
        QWidget::setTabOrder(tabsPos_comboBox, keybCursorShape_comboBox);
        QWidget::setTabOrder(keybCursorShape_comboBox, showMenuCheckBox);
        QWidget::setTabOrder(showMenuCheckBox, hideTabBarCheckBox);
        QWidget::setTabOrder(hideTabBarCheckBox, highlightCurrentCheckBox);
        QWidget::setTabOrder(highlightCurrentCheckBox, changeWindowTitleCheckBox);
        QWidget::setTabOrder(changeWindowTitleCheckBox, changeWindowIconCheckBox);
        QWidget::setTabOrder(changeWindowIconCheckBox, enabledBidiSupportCheckBox);
        QWidget::setTabOrder(enabledBidiSupportCheckBox, appTransparencyBox);
        QWidget::setTabOrder(appTransparencyBox, termTransparencyBox);
        QWidget::setTabOrder(termTransparencyBox, backgroundImageLineEdit);
        QWidget::setTabOrder(backgroundImageLineEdit, chooseBackgroundImageButton);
        QWidget::setTabOrder(chooseBackgroundImageButton, terminalPresetComboBox);
        QWidget::setTabOrder(terminalPresetComboBox, historyLimited);
        QWidget::setTabOrder(historyLimited, historyLimitedTo);
        QWidget::setTabOrder(historyLimitedTo, historyUnlimited);
        QWidget::setTabOrder(historyUnlimited, motionAfterPasting_comboBox);
        QWidget::setTabOrder(motionAfterPasting_comboBox, askOnExitCheckBox);
        QWidget::setTabOrder(askOnExitCheckBox, savePosOnExitCheckBox);
        QWidget::setTabOrder(savePosOnExitCheckBox, saveSizeOnExitCheckBox);
        QWidget::setTabOrder(saveSizeOnExitCheckBox, useCwdCheckBox);
        QWidget::setTabOrder(useCwdCheckBox, openNewTabRightToActiveTabCheckBox);
        QWidget::setTabOrder(openNewTabRightToActiveTabCheckBox, emulationComboBox);
        QWidget::setTabOrder(emulationComboBox, shortcutsWidget);
        QWidget::setTabOrder(shortcutsWidget, dropShowOnStartCheckBox);
        QWidget::setTabOrder(dropShowOnStartCheckBox, dropHeightSpinBox);
        QWidget::setTabOrder(dropHeightSpinBox, dropWidthSpinBox);
        QWidget::setTabOrder(dropWidthSpinBox, useBookmarksCheckBox);
        QWidget::setTabOrder(useBookmarksCheckBox, bookmarksLineEdit);
        QWidget::setTabOrder(bookmarksLineEdit, bookmarksButton);
        QWidget::setTabOrder(bookmarksButton, bookmarkPlainEdit);

        //retranslateUi(PropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertiesDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(fixedTabWidthCheckBox, SIGNAL(toggled(bool)), fixedTabWidthSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(historyUnlimited, SIGNAL(toggled(bool)), historyLimitedTo, SLOT(setDisabled(bool)));

        stackedWidget->setCurrentIndex(0);
        termComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PropertiesDialog);

	PropertiesDialog->show();


}

