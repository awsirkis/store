//-------------------------------drama.cpp------------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/05/2019
//Modified: 03/05/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#include "drama.h"
using namespace std;

//-------------------------------Drama---------------------------------------
//Description: Constructor - Calls constructor of parent class, Movie, and
//             default values for private variables of Classic.
//---------------------------------------------------------------------------
Drama::Drama()
: Movie()
{
}

//------------------------------~Drama---------------------------------------
//Description: Deconstructor.
//---------------------------------------------------------------------------
Drama::~Drama()
{
}

//-------------------------------setData-------------------------------------
//Description: Public function -
//---------------------------------------------------------------------------
void Drama::setData(istream& movieFile)
{
  Movie::setData(movieFile);
} //end of setData

//-------------------------------display-------------------------------------
//Description: Public function -
//---------------------------------------------------------------------------
ostream& Drama::display(ostream& output) const
{
  //Movie:displayHeader();
  Movie::display(output);
  //output << "  " << title << "  " << director << "  " << releasedYear << endl;
  return output;
} //end of display

//----------------------------displayHeader----------------------------------
//Description: Public function - Helper function for output operator to
//             display formatted information of the merchandise.
//---------------------------------------------------------------------------
void Drama::displayHeader() const
{
  cout << "(IN) (OUT)                    DRAMA" << endl;
  Movie::displayHeader();
} //end of displayHeader

//-------------------------------operator<-----------------------------------
//Description: Operator overload -
//---------------------------------------------------------------------------
bool Drama::operator<(const Merchandise &drama) const
{
  const Drama& aDrama = static_cast<const Drama&>(drama);
  if (director < aDrama.getDirector())
  {
    return true;
  }
  else if (director == aDrama.getDirector())
  {
    return (title < aDrama.getTitle());
  }
  else
  {
    return false;
  }
} //end of operator<

//------------------------------operator==-----------------------------------
//Description: Operator overload -
//---------------------------------------------------------------------------
bool Drama::operator==(const Merchandise &drama) const
{
  Movie::operator==(drama);
} //end of operator==
