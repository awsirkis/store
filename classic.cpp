//--------------------------------classic.cpp--------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Author: Johnathan Hewit
//Created: 03/04/2019
//Modified: 03/04/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------
#include <iomanip>
#include "classic.h"
using namespace std;

//------------------------------Classic--------------------------------------
//Description: Constructor - Calls constructor of parent class, Movie, and
//             default values for private variables of Classic.
//---------------------------------------------------------------------------
Classic::Classic()
: Movie(), actorName(""), releasedMonth(0)
{
} //end of Classic

//-----------------------------~Classic--------------------------------------
//Description: Deconstructor.
//---------------------------------------------------------------------------
Classic::~Classic()
{
} //end of ~Classic

//------------------------------setData--------------------------------------
//Description: Public function -
//---------------------------------------------------------------------------
void Classic::setData(istream& movieFile)
{
  string actorFirstName, actorLastName;
  movieFile.get();                         //Discards whitespace
  getline(movieFile, director, ','); //Grabs and inserts director
  movieFile.get();                         //Discards whitespace
  getline(movieFile, title, ',');    //Grabs and inserts title
  movieFile.get();                         //Discards whitespace
  movieFile >> actorFirstName >> actorLastName >> releasedMonth >> releasedYear;
  actorName = actorFirstName + " " + actorLastName;
} //end of setData             //Grabs and inserts actor's name, month and year

//----------------------------getActorName-----------------------------------
//Description: Public function - Returns actor's name.
//---------------------------------------------------------------------------
string Classic::getActorName() const
{
  return this->actorName;
} //end of getActorName

//-----------------------------getMonth--------------------------------------
//Description: Public function - Returns month the movie was released.
//---------------------------------------------------------------------------
int Classic::getMonth() const
{
  return this->releasedMonth;
} //end of getMonth

//------------------------------operator==-----------------------------------
//Description: Operator overload - Compares the current Classic with the
//             incoming Classic to determine if they are the same. Returns
//             true if yes, false if no.
//---------------------------------------------------------------------------
bool Classic::operator==(const Merchandise& merch) const
{
  const Classic& classic = static_cast<const Classic&>(merch);
  return (releasedYear == classic.getYear() && releasedMonth == classic.getMonth()
          && actorName == classic.getActorName() &&
          title == classic.getTitle() && director == classic.getDirector());

} //end of operator==

//------------------------------operator<------------------------------------
//Description: Operator overload - Compares the current Classic with the
//             incoming Classic to determine if they are the same. Returns
//             true if yes, false if no.
//---------------------------------------------------------------------------
bool Classic::operator<(const Merchandise& merch) const
{
  const Classic& classic = static_cast<const Classic&>(merch);
  if (releasedYear < classic.getYear())
  {
    return true;
  }
  else if (releasedYear == classic.getYear())
  {
    if (releasedMonth < classic.getMonth())
    {
      return true;
    }
    else if (releasedMonth == classic.getMonth())
    {
      if (actorName < classic.getActorName())
      {
        return true;
      }
      else
      {
        return false;
      }
    }
  }
  else
  {
    return false;
  }
} //end of operator<

//---------------------------------display-----------------------------------
//Description: Public function - Returns ostream back to parent class for
//             printing.
//---------------------------------------------------------------------------
ostream& Classic::display(ostream& output) const
{
  output << " " << stock << "    " << maxStock - stock << "    ";
  output << left << setw(26) << title << setw(20) << director;
  output << setw(20) << actorName << releasedYear << "    " << releasedMonth << endl;
  return output;
} //end of display

//----------------------------displayHeader----------------------------------
//Description: Public function - Output function to format a header above
//             Movie information. Only for Drama and Comedy at the moment.
//---------------------------------------------------------------------------
void Classic::displayHeader() const
{
  cout << "(IN) (OUT)                    CLASSIC" << endl;
  cout << format << "   " << format << "   TITLE                      DIRECTOR";
  cout << "           ACTOR               YEAR  MONTH" << endl;
} //end of displayHeader
