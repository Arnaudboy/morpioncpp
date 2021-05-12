#ifndef JEU_H
#define JEU_H
#include "tableau.h"

class Jeu
{
public:
    Jeu();
    ~Jeu();
    void Play();
private:
    Tableau tab;
    void Jouer1Tour(int player);
};

#endif // JEU_H
