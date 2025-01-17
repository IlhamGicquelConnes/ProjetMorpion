#include <string>
#include "joueur.h"

Joueur::Joueur(std::string nom, std::string couleur, char symboleJoueur1, char symboleJoueur2)
{
    m_nom = nom;
    m_couleur = couleur;
    m_symboleJoueur1 = symboleJoueur1;
    m_symboleJoueur2 = symboleJoueur2;

}

std::string Joueur::nom() const
{
    return m_nom;
}

std::string Joueur::couleur() const
{
    return m_couleur;
}

char Joueur::symboleJoueur1() const
{
    return m_symboleJoueur1;
}

char Joueur::symboleJoueur2() const
{
    return m_symboleJoueur2;
}
