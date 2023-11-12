#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tableView_clicked
(const QModelIndex &index);

    void on_pushButton_clicked210643();

private:
    Ui::MainWindow *ui;

    void  generateTable210643();
};
#endif // MAINWINDOW_H
