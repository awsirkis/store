//--------------------------------drama.h------------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/05/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H
#include <iostream>
#include "movie.h"
using namespace std;

class Drama: public Movie
{
public:
  //Constructors
  Drama();
  ~Drama();
  //Getters
  virtual ostream& display(ostream&) const;
  virtual void displayHeader() const;
  //Setters
  virtual void setData(istream&);
  //Operator Overloads
  virtual bool operator==(const Merchandise&) const;
  virtual bool operator<(const Merchandise&) const;
private:

};
#endif
