// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#pragma once

#include <QWidget>
#include <QDialog>
#include <QTableView>
#include <QVBoxLayout>
#include <QAction>
#include <noggit/DBCTableModel.h>

class DBCEditor : public QWidget
{
    Q_OBJECT

public:
    explicit DBCEditor(const QString& filename, QWidget *parent = 0);

private:
    QTableView *view;
    QVBoxLayout* layout;
    QAction *editColumn;
    DBCTableModel *model;
    int columnToEdit;

signals:

public slots:
    void showContextMenu(const QPoint& point);
    void editColumnSettings();

friend class columnEditor;


};

class columnEditor : public QDialog
{
    Q_OBJECT

public:
    explicit columnEditor(int column, DBCEditor *parent = 0);
    QLineEdit *name;
    QLineEdit *type;

private:

signals:

public slots:

};
