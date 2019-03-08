//--------------------------------movie.h------------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Created: 03/04/2019
//Modified: 03/04/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------
#include <iomanip>
#include "movie.h"
using namespace std;

//--------------------------------Movie--------------------------------------
//Description: Constructor - Calls constructor of parent class, Merchandise,
//             and sets default values for variables of Movie.
//---------------------------------------------------------------------------
Movie::Movie()
: Merchandise(), director(""), title(""), releasedYear(0)
{
} //end of Movie

//--------------------------------~Movie-------------------------------------
//Description: Deconstructor.
//---------------------------------------------------------------------------
Movie::~Movie()
{
} //end of ~Movie

//-------------------------------setData-------------------------------------
//Description: Public function - Receives an istream object (text file), and
//             inserts the director, title and year into the movie's private
//             data variables. Assumption: The text file is formatted properly.
//---------------------------------------------------------------------------
void Movie::setData(istream& movieFile)
{
  movieFile.get();                         //Discards whitespace
  getline(movieFile, this->director, ','); //Grabs and inserts director
  movieFile.get();                         //Discards whitespace
  getline(movieFile, this->title, ',');    //Grabs and inserts title
  movieFile.get();                         //Discards whitespace
  movieFile >> releasedYear;               //Grabs and inserts year
} //end of setData

//-----------------------------getDirector-----------------------------------
//Description: Public function - Returns the name of the director.
//---------------------------------------------------------------------------
string Movie::getDirector() const
{
  return this->director;
} //end of getDirector

//--------------------------------getTitle-----------------------------------
//Description: Public function - Returns the title of the movie.
//---------------------------------------------------------------------------
string Movie::getTitle() const
{
  return this->title;
} //end of getTitle

//---------------------------------getYear-----------------------------------
//Description: Public function - Returns the year the movie released.
//---------------------------------------------------------------------------
int Movie::getYear() const
{
  return this->releasedYear;
} //end of getYear

//------------------------------operator==-----------------------------------
//Description: Operator overload -
//---------------------------------------------------------------------------
bool Movie::operator==(const Merchandise &movie) const
{
  const Movie& aMovie = static_cast<const Movie&>(movie);
  return (title == aMovie.getTitle() && director == aMovie.getDirector() &&
          releasedYear == aMovie.getYear());
} //end of operator==

//-------------------------------display-------------------------------------
//Description: Public function - Helper function for output operator to
//             display formatted information of the merchandise.
//---------------------------------------------------------------------------
ostream& Movie::display(ostream& output) const
{
  output << " " << stock << "    " << maxStock - stock << "    ";
  output << left << setw(33) << title << setw(22) << director << setw(5);
  output << releasedYear << endl;
  return output;
} //end of display

//----------------------------displayHeader----------------------------------
//Description: Public function - Output function to format a header above
//             Movie information. Only for Drama and Comedy at the moment.
//---------------------------------------------------------------------------
void Movie::displayHeader() const
{
  cout << format << "   " << format << "   TITLE                             DIRECTOR";
  cout << "             YEAR" << endl;
} //end of displayHeader
