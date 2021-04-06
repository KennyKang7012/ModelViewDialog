#ifndef MODELVIEWDIALOG_H
#define MODELVIEWDIALOG_H

#include <QDialog>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>

QT_BEGIN_NAMESPACE
namespace Ui { class ModelViewDialog; }
QT_END_NAMESPACE

class ModelViewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModelViewDialog(QWidget *parent = nullptr);
    ~ModelViewDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ModelViewDialog *ui;
    QStringListModel *model;
};
#endif // MODELVIEWDIALOG_H
