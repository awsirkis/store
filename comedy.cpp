//--------------------------------comedy.cpp---------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/05/2019
//Modified: 03/05/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------

#include "comedy.h"
using namespace std;

//-------------------------------Comedy--------------------------------------
//Description: Constructor - Calls constructor of parent class, Movie, and
//             default values for private variables of Classic.
//---------------------------------------------------------------------------
Comedy::Comedy()
: Movie()
{
}

//------------------------------~Comedy--------------------------------------
//Description: Deconstructor.
//---------------------------------------------------------------------------
Comedy::~Comedy()
{
}

//-------------------------------setData-------------------------------------
//Description: Public function -
//---------------------------------------------------------------------------
void Comedy::setData(istream& movieFile)
{
  Movie::setData(movieFile);
} //end of setData

//----------------------------displayHeader----------------------------------
//Description: Public function - Helper function for output operator to
//             display formatted information of the merchandise.
//---------------------------------------------------------------------------
void Comedy::displayHeader() const
{
  cout << "(IN) (OUT)                    COMEDY" << endl;
  Movie::displayHeader();
} //end of displayHeader

//-------------------------------operator<-----------------------------------
//Description: Operator overload -
//---------------------------------------------------------------------------
bool Comedy::operator<(const Merchandise &comedy) const
{
  const Comedy& aComedy = static_cast<const Comedy&>(comedy);
  if (title < aComedy.getTitle())
  {
    return true;
  }
  else if (title == aComedy.getTitle())
  {
    return (releasedYear < aComedy.getYear());
  }
  else
  {
    return false;
  }
} //end of operator<

//------------------------------operator==-----------------------------------
//Description: Operator overload -
//---------------------------------------------------------------------------
bool Comedy::operator==(const Merchandise &comedy) const
{
  Movie::operator==(comedy);
} //end of operator==
