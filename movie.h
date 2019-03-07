//--------------------------------movie.h------------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/04/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <iomanip>
#include "merchandise.h"
using namespace std;

class Movie: public Merchandise
{
public:
  //Constructors
  Movie();
  virtual ~Movie();
  //Getters
  string getDirector() const;
  string getTitle() const;
  int getYear() const;
  virtual ostream& display(ostream&) const;
  virtual void displayHeader() const; //Added
  //Setters
  virtual void setData(istream&);
  //Operator Overloads
  virtual bool operator==(const Merchandise&) const;
  virtual bool operator<(const Merchandise&) const = 0;
protected:
  string director;
  string title;
  int releasedYear;
};
#endif
