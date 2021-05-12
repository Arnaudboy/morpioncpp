#ifndef CASE_H
#define CASE_H


class Case
{
public:
    Case();
    ~Case();
    char getContenu() const;
    void setContenu(char value);

private:
    char contenu;
};

#endif // CASE_H
