 #ifndef JEU_H
#define JEU_H
#include "tableau.h"

class Jeu
{
public:
    Jeu();
    ~Jeu();
    void play();
private:
    Tableau tab;
    void jouer1Tour(int player);
};

#endif // JEU_H
