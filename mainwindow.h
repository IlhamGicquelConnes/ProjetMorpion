#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void push(QPushButton *pushButton, int x, int y);
    void testerFin();
    void stopJeux(int stop);
    void reinitialiserJeu();


private slots:
    void on_pushButton_1_1_clicked();

    void on_pushButton_1_2_clicked();

    void on_pushButton_1_3_clicked();

    void on_pushButton_2_1_clicked();

    void on_pushButton_2_2_clicked();

    void on_pushButton_2_3_clicked();

    void on_pushButton_3_1_clicked();

    void on_pushButton_3_2_clicked();

    void on_pushButton_3_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_reinitialiser_clicked();

private:
    Ui::MainWindow *ui;

    char tour;
    char joueur1;
    char joueur2;

    int m_grille[3][3];
};
#endif // MAINWINDOW_H
