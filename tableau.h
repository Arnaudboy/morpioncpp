#ifndef TABLEAU_H
#define TABLEAU_H
#include "case.h"
#include <iostream>
using namespace std;

class Tableau
{
public:
    Tableau();
    ~Tableau();
    void AfficherTableau();
    void setCase(int x, int y, char val);
    char getCase(int x, int y);
    int checkVictoire(int player);
private:
    Case *tableau[3][3];
};

#endif // TABLEAU_H
