#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void ReadToFile1(const QString &filePath);
    void ReadToFile2(const QString &filePath);
    void ReadToFile3(const QString &filePath);

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
