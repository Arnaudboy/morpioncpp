#include "tableau.h"

Tableau::Tableau()
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            Case *c = new Case();
            tableau[i][j] = c;
        }
    }
}

Tableau::~Tableau()
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            delete tableau[i][j];
        }
    }
}

void Tableau::AfficherTableau()
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<tableau[i][j]->getContenu();
        }
        cout<<endl;
    }
}

void Tableau::setCase(int x, int y, char val)
{
    tableau[x][y]->setContenu(val);
}

char Tableau::getCase(int x, int y)
{
    return tableau[x][y]->getContenu();
}

int Tableau::checkVictoire(int player)
{
    if(tableau[0][0]->getContenu()==tableau[0][1]->getContenu() && tableau[0][0]->getContenu()==tableau[0][2]->getContenu() && tableau[0][0]->getContenu() != ' '){return player;}
    else if(tableau[1][0]->getContenu()==tableau[1][1]->getContenu() && tableau[1][0]->getContenu()==tableau[1][2]->getContenu() && tableau[1][0]->getContenu() != ' '){return player;}
    else if(tableau[2][0]->getContenu()==tableau[2][1]->getContenu() && tableau[2][0]->getContenu()==tableau[2][2]->getContenu() && tableau[2][0]->getContenu() != ' '){return player;}
    else if(tableau[0][0]->getContenu()==tableau[1][0]->getContenu() && tableau[0][0]->getContenu()==tableau[2][0]->getContenu() && tableau[0][0]->getContenu() != ' '){return player;}
    else if(tableau[0][1]->getContenu()==tableau[1][1]->getContenu() && tableau[0][1]->getContenu()==tableau[2][1]->getContenu() && tableau[0][1]->getContenu() != ' '){return player;}
    else if(tableau[0][2]->getContenu()==tableau[1][2]->getContenu() && tableau[0][2]->getContenu()==tableau[2][2]->getContenu() && tableau[0][2]->getContenu() != ' '){return player;}
    else if(tableau[0][0]->getContenu()==tableau[1][1]->getContenu() && tableau[0][0]->getContenu()==tableau[2][2]->getContenu() && tableau[0][0]->getContenu() != ' '){return player;}
    else if(tableau[0][2]->getContenu()==tableau[1][1]->getContenu() && tableau[0][2]->getContenu()==tableau[2][0]->getContenu() && tableau[0][2]->getContenu() != ' '){return player;}
    else {return -1;}
}
