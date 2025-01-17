#include "mainwindow.h"
#include "joueur.h"
#include <iostream>
#include <string>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Déclaration des variables pour les joueurs.
/*
    std::string nomJoueur1, nomJoueur2;
    std::string couleurJoueur1, couleurJoueur2;

    // Demander les informations pour le joueur 1.

    std::cout << "Joueur 1, entrez votre nom : ";
    std::getline(std::cin, nomJoueur1);
    std::cout << "Joueur 1, choisissez une couleur : ";
    std::getline(std::cin, couleurJoueur1);

    // Demander les informations pour le joueur 2.

    std::cout << "Joueur 2, entrez votre nom : ";
    std::getline(std::cin, nomJoueur2);
    std::cout << "Joueur 2, choisissez une couleur : ";
    std::getline(std::cin, couleurJoueur2);
*/

    return a.exec();
}
