//------------------------------merchandise.cpp------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/04/2019
//---------------------------------------------------------------------------
//Purpose: Implementation file for a Merchandise object. This class is
//         designed to create and
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------
#include "merchandise.h"
using namespace std;

//-------------------------------Merchandise---------------------------------
//Description: Constructor - Sets default values of private variables.
//---------------------------------------------------------------------------
Merchandise::Merchandise()
{
  this->stock = 0;
  this->maxStock = 0;
  this->format = "";
} //end of Merchandise

//-------------------------------Merchandise---------------------------------
//Description: Deconstructor.
//---------------------------------------------------------------------------
Merchandise::~Merchandise()
{
} //end of ~Merchandise

//--------------------------------getStock-----------------------------------
//Description: Public function - Returns stock of current Merchandise item.
//---------------------------------------------------------------------------
int Merchandise::getStock() const
{
  return this->stock;
} //end of getStock

//--------------------------------getFormat----------------------------------
//Description: Public function - Returns format of current Merchandise item.
//---------------------------------------------------------------------------
string Merchandise::getFormat() const
{
  return this->format;
} //end of getFormat

//------------------------------setFormat------------------------------------
//Description: Public function - Sets the format of the Merchandise.
//             Assumption: Incoming char is valid and capitlized per correct
//             formatting.
//---------------------------------------------------------------------------
void Merchandise::setFormat(const string &format)
{
  this->format = format;
} //end of setFormat

//--------------------------------setStock-----------------------------------
//Description: Public function - Sets stock as long as the requested value is
//             greater than 0 and is less than the maximum stock.
//---------------------------------------------------------------------------
void Merchandise::setStock(const int &stock)
{
  if (stock >= 0 && stock <= this->maxStock)
  {
    this->stock = stock;
  }
} //end of setStock

//-----------------------------setMaxStock-----------------------------------
//Description: Public function - Sets maximum stock as long as the requested
//             value is greater than 0.
//---------------------------------------------------------------------------
void Merchandise::setMaxStock(const int &maxStock)
{
  if (maxStock >= 0)
  {
    this->maxStock = maxStock;
  }
} //end of setMaxStock

//---------------------------increaseStock-----------------------------------
//Description: Public function - Increments the stock by 1 if the current
//             stock doesn't exceed its maximum and returns true. Otherwise,
//             returns false.
//---------------------------------------------------------------------------
bool Merchandise::increaseStock()
{
  if (this->stock < this->maxStock)
  {
    this->stock++;
    return true;
  }
  return false;
} //end of increaseStock

//----------------------------decreaseStock----------------------------------
//Description: Public function - Decrements the stock by 1 if the current
//             stock is above 0 and returns true. Otherwise, return false.
//---------------------------------------------------------------------------
bool Merchandise::decreaseStock()
{
  if (this->stock > 0)
  {
    this->stock--;
    return true;
  }
  return false;
} //end of decreaseStock

//------------------------------operator<<-----------------------------------
//Description: Operator overload - Overloads output operator to print formatted
//             class object information. Uses helper class print because
//             operators cannot be virtualized for child classes.
//---------------------------------------------------------------------------
ostream& operator<<(ostream &output, const Merchandise &merch)
{
  return merch.display(output);
} //end of operator<<

//-------------------------------display-------------------------------------
//Description: Public function - Helper function for output operator to
//             display formatted information of the merchandise.
//---------------------------------------------------------------------------
ostream& Merchandise::display(ostream& output) const
{
  return output;
} //end of display
