#include "case.h"

Case::Case()
{
    contenu = ' ' ;
}

Case::~Case()
{

}

char Case::getContenu() const
{
    return contenu;
}

void Case::setContenu(char value)
{
    contenu = value;
}
