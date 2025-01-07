#include <string>
#include "joueur.h"

Joueur::Joueur(std::string nom, std::string couleur, char symbole)
{
    m_nom = nom;
    m_couleur = couleur;
    m_symbole = symbole;

}

std::string Joueur::nom() const
{
    return m_nom;
}

std::string Joueur::couleur() const
{
    return m_couleur;
}
