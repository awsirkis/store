//--------------------------------comedy.h-----------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/05/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H
#include <iostream>
#include "movie.h"
using namespace std;

class Comedy: public Movie
{
public:
  //Constructors
  Comedy();
  ~Comedy();
  //Getters
  virtual void displayHeader() const;
  //Setters
  virtual void setData(istream&);
  //Operator Overloads
  virtual bool operator==(const Merchandise&) const;
  virtual bool operator<(const Merchandise&) const;
private:
  
};
#endif
