#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tour = 'X';
    joueur1 = 1;
    joueur2 = 2;

    for ( int x = 0; x != 3; x++)
        for ( int y = 0; y != 3; y++)
            m_grille[x][y] = 0;

    ui->pushButton_1_1->setVisible(false);
    ui->pushButton_1_2->setVisible(false);
    ui->pushButton_1_3->setVisible(false);
    ui->pushButton_2_1->setVisible(false);
    ui->pushButton_2_2->setVisible(false);
    ui->pushButton_2_3->setVisible(false);
    ui->pushButton_3_1->setVisible(false);
    ui->pushButton_3_2->setVisible(false);
    ui->pushButton_3_3->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::reinitialiserJeu()
{
    // Réinitialiser la grille
    for (int x = 0; x != 3; x++)
        for (int y = 0; y != 3; y++)
            m_grille[x][y] = 0;

    // Réactiver les boutons et les remettre à zéro
    ui->pushButton_1_1->setEnabled(true);
    ui->pushButton_1_1->setText("");
    ui->pushButton_1_2->setEnabled(true);
    ui->pushButton_1_2->setText("");
    ui->pushButton_1_3->setEnabled(true);
    ui->pushButton_1_3->setText("");
    ui->pushButton_2_1->setEnabled(true);
    ui->pushButton_2_1->setText("");
    ui->pushButton_2_2->setEnabled(true);
    ui->pushButton_2_2->setText("");
    ui->pushButton_2_3->setEnabled(true);
    ui->pushButton_2_3->setText("");
    ui->pushButton_3_1->setEnabled(true);
    ui->pushButton_3_1->setText("");
    ui->pushButton_3_2->setEnabled(true);
    ui->pushButton_3_2->setText("");
    ui->pushButton_3_3->setEnabled(true);
    ui->pushButton_3_3->setText("");

    // Réinitialiser le tour
    tour = 'X';

}

void MainWindow::on_pushButton_reinitialiser_clicked()
{
    reinitialiserJeu();
}

void MainWindow::push(QPushButton *pushButton, int x, int y)
{
    //pushButton->connect();

    if ((tour == 'X'))
    {
        pushButton->setText( QString( QChar('X') ) );
        tour = 'O';
        m_grille[x][y] = 1;

    }
    else if ((tour == 'O'))
    {
        pushButton->setText( QString( QChar('O') ) );
        tour = 'X';
        m_grille[x][y] = 2;
    }

    pushButton->disconnect();
    testerFin();
}

void MainWindow::testerFin() // Tester si un joueur a gagné
{
    int fin = 0;

    // Vérifier les lignes verticales
    for (int x = 0; x != 3; x++) {
        if (m_grille[x][0] == m_grille[x][1] && m_grille[x][1] == m_grille[x][2] && m_grille[x][0] != 0) {
            std::cout << "Le joueur " << m_grille[x][0] << " a gagné!" << std::endl;
            fin = 1;
        }
    }

    // Vérifier les lignes horizontales
    for (int y = 0; y != 3; y++) {
        if (m_grille[0][y] == m_grille[1][y] && m_grille[1][y] == m_grille[2][y] && m_grille[0][y] != 0) {
            std::cout << "Le joueur " << m_grille[0][y] << " a gagné!" << std::endl;
            fin = 1;
        }
    }

    // Vérifier les diagonales
    if (m_grille[0][0] == m_grille[1][1] && m_grille[1][1] == m_grille[2][2] && m_grille[0][0] != 0) {
        std::cout << "Le joueur " << m_grille[0][0] << " a gagné!" << std::endl;
        fin = 1;
    }
    if (m_grille[2][0] == m_grille[1][1] && m_grille[1][1] == m_grille[0][2] && m_grille[2][0] != 0) {
        std::cout << "Le joueur " << m_grille[2][0] << " a gagné!" << std::endl;
        fin = 1;
    }

    // Si un joueur a gagné, arrêter le jeu
    stopJeux(fin);
}


void MainWindow::stopJeux(int stop) //TEST
{
    if (stop == 1) {
        // Désactiver tous les boutons pour arrêter le jeu
        ui->pushButton_1_1->setEnabled(false);
        ui->pushButton_1_2->setEnabled(false);
        ui->pushButton_1_3->setEnabled(false);
        ui->pushButton_2_1->setEnabled(false);
        ui->pushButton_2_2->setEnabled(false);
        ui->pushButton_2_3->setEnabled(false);
        ui->pushButton_3_1->setEnabled(false);
        ui->pushButton_3_2->setEnabled(false);
        ui->pushButton_3_3->setEnabled(false);

        // Afficher un message ou quelque chose pour indiquer que la partie est finie.
        std::cout << "La partie est terminée!" << std::endl;
    }
}

void MainWindow::on_pushButton_1_1_clicked()
{
    push(ui->pushButton_1_1, 0, 0);
}


void MainWindow::on_pushButton_1_2_clicked()
{
    push(ui->pushButton_1_2, 0, 1);
}

void MainWindow::on_pushButton_1_3_clicked()
{
    push(ui->pushButton_1_3, 0, 2);
}

void MainWindow::on_pushButton_2_1_clicked()
{
    push(ui->pushButton_2_1, 1, 0);
}

void MainWindow::on_pushButton_2_2_clicked()
{
    push(ui->pushButton_2_2, 1, 1);
}

void MainWindow::on_pushButton_2_3_clicked()
{
    push(ui->pushButton_2_3, 1, 2);
}

void MainWindow::on_pushButton_3_1_clicked()
{
    push(ui->pushButton_3_1, 2, 0);
}

void MainWindow::on_pushButton_3_2_clicked()
{
    push(ui->pushButton_3_2, 2, 1);
}

void MainWindow::on_pushButton_3_3_clicked()
{
    push(ui->pushButton_3_3, 2, 2);
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_1_1->setVisible(true);
    ui->pushButton_1_2->setVisible(true);
    ui->pushButton_1_3->setVisible(true);
    ui->pushButton_2_1->setVisible(true);
    ui->pushButton_2_2->setVisible(true);
    ui->pushButton_2_3->setVisible(true);
    ui->pushButton_3_1->setVisible(true);
    ui->pushButton_3_2->setVisible(true);
    ui->pushButton_3_3->setVisible(true);
}
