#include "jeu.h"

Jeu::Jeu()
{

}

Jeu::~Jeu()
{

}

void Jeu::Play()
{
    int count = 0;
    int playerWin=-1;
    while(count<9 && playerWin==-1){
        Jouer1Tour(count%2);
        playerWin = tab.checkVictoire(count%2);
        cout<<playerWin<<endl;
        count++;
    }
    if(playerWin == 1){
        cout<<"Bravo player 2"<<endl;
    } else if (playerWin == 0){
        cout<<"Bravo player 1";
    } else {
        cout<<"Partie nulle"<<endl;
    }
}

void Jeu::Jouer1Tour(int player)
{
    cout<<"Au tour du joueur "<<player+1<<endl;
    tab.AfficherTableau();
    int ligne, colonne;
    cout<<"Entrez une ligne"<<endl;
    cin>>ligne;
    cout<<"Entrez une colonne"<<endl;
    cin>>colonne;
    ligne--;
    colonne--;
    if(ligne<0 || ligne>2 || colonne<0 || colonne>2){
        system("clear");
        Jouer1Tour(player);
    }
    if(tab.getCase(ligne, colonne) != ' ') {
        system("clear");
        Jouer1Tour(player);
        player = abs(player-1);
        tab.setCase(ligne, colonne, player==0 ? 'O': 'X');

    }
    tab.setCase(ligne, colonne, player==0 ? 'O': 'X');
    system("clear");
}
