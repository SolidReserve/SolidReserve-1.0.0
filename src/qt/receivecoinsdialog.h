// Copyright (c) 2011-2014 The Solidreserve developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SOLIDRESERVE_QT_RECEIVECOINSDIALOG_H
#define SOLIDRESERVE_QT_RECEIVECOINSDIALOG_H

#include "guiutil.h"

#include <QDialog>
#include <QHeaderView>
#include <QItemSelection>
#include <QKeyEvent>
#include <QMenu>
#include <QPoint>
#include <QVariant>

class OptionsModel;
class WalletModel;

namespace Ui
{
class ReceiveCoinsDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog for requesting payment of solidreserves */
class ReceiveCoinsDialog : public QDialog
{
    Q_OBJECT

public:
    enum ColumnWidths {
        DATE_COLUMN_WIDTH = 130,
        LABEL_COLUMN_WIDTH = 120,
        AMOUNT_MINIMUM_COLUMN_WIDTH = 160,
        MINIMUM_COLUMN_WIDTH = 130
    };

    explicit ReceiveCoinsDialog(QWidget* parent = 0);
    ~ReceiveCoinsDialog();

    void setModel(WalletModel* model);

public slots:
    void clear();
    void reject();
    void accept();

protected:
    virtual void keyPressEvent(QKeyEvent* event);

private:
    Ui::ReceiveCoinsDialog* ui;
    GUIUtil::TableViewLastColumnResizingFixer* columnResizingFixer;
    WalletModel* model;
    QMenu* contextMenu;
    void copyColumnToClipboard(int column);
    virtual void resizeEvent(QResizeEvent* event);

private slots:
    void on_receiveButton_clicked();
    void on_showRequestButton_clicked();
    void on_removeRequestButton_clicked();
    void on_recentRequestsView_doubleClicked(const QModelIndex& index);
    void recentRequestsView_selectionChanged(const QItemSelection& selected, const QItemSelection& deselected);
    void updateDisplayUnit();
    void showMenu(const QPoint& point);
    void copyLabel();
    void copyMessage();
    void copyAmount();
};

#endif // SOLIDRESERVE_QT_RECEIVECOINSDIALOG_H
