#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include "joueur.h"

class Joueur
{
public:
    Joueur(std::string nom, std::string couleur, char symboleJoueur1, char symboleJoueur2);

    std::string nom() const;

    std::string couleur() const;

private:
    std::string m_nom;
    std::string m_couleur;
    char symboleJoueur1;
    char symboleJoueur2;

};

#endif // JOUEUR_H
