//--------------------------------classic.h----------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/04/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#ifndef CLASSIC_H
#define CLASSIC_H
#include <iostream>
#include "movie.h"
using namespace std;

class Classic: public Movie
{
public:
  //Constructors
  Classic();
  ~Classic();
  //Getters
  string getActorName() const; //Added
  int getMonth() const;
  virtual ostream& display(ostream&) const; //Added
  virtual void displayHeader() const; //Added
  //Setters
  virtual void setData(istream&);
  //Operator Overloads
  virtual bool operator==(const Merchandise&) const;
  virtual bool operator<(const Merchandise&) const;
private:
  string actorName;
  int releasedMonth;
};
#endif
