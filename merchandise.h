//------------------------------merchandise.h--------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/04/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#ifndef MERCHANDISE_H
#define MERCHANDISE_H
#include <iostream>
using namespace std;

class Merchandise
{
public:
  //Constructors
  Merchandise();
  virtual ~Merchandise();
  //Getters
  int getStock() const;
  virtual ostream& display(ostream&) const; //Added
  virtual void displayHeader() const = 0; //Added
  string getFormat() const;
  //Setters
  virtual void setData(istream&) = 0;
  bool increaseStock();
  bool decreaseStock();
  void setStock(const int&);
  void setMaxStock(const int&);
  void setFormat(const string&);
  //Operator Overloads
  virtual bool operator==(const Merchandise&) const = 0;
  virtual bool operator<(const Merchandise&) const = 0;
  friend ostream& operator<<(ostream&, const Merchandise&); //Added
protected:
  int stock;
  int maxStock;
  string format;
};
#endif
