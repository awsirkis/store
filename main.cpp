#include <iostream>
#include <fstream>
#include "merchandise.h"
#include "movie.h"
#include "classic.h"
#include "comedy.h"
#include "drama.h"
#include "bintree.h"
using namespace std;

int hashIt(char movieCode);

void stockIt(istream& movieFile, BinTree (&arr)[26])
{
  int stock = -1;
  int index;
  char movieCode = ' ';
  string temp;
  for (;;)
  {
    movieFile >> movieCode;
    if (movieFile.eof())
    {
      break;
    }
    Merchandise *moviePtr;
    movieFile.get();
    movieFile >> stock;
    if (movieCode == 'F')
    {
      moviePtr = new Comedy();
      moviePtr->setFormat("DVD");
      moviePtr->setMaxStock(stock);
      moviePtr->setStock(stock);
      moviePtr->setData(movieFile);
      index = hashIt(movieCode);
      arr[index].insert(moviePtr);
    }
    else if (movieCode == 'C')
    {
      moviePtr = new Classic();
      moviePtr->setFormat("DVD");
      moviePtr->setMaxStock(stock);
      moviePtr->setStock(stock);
      moviePtr->setData(movieFile);
      index = hashIt(movieCode);
      arr[index].insert(moviePtr);
    }
    else if (movieCode == 'D')
    {
      moviePtr = new Drama();
      moviePtr->setFormat("DVD");
      moviePtr->setMaxStock(stock);
      moviePtr->setStock(stock);
      moviePtr->setData(movieFile);
      index = hashIt(movieCode);
      arr[index].insert(moviePtr);
      //cout << "We made it to Drama." << endl;
    }
    else
    {
      getline(movieFile, temp, '\n');
    }
    moviePtr = nullptr;
    delete moviePtr;
  }
} //end of stockIt

int hashIt(char movieCode)
{
  return movieCode - 'A';
}

int main()
{
  ifstream movieFile("data4movies.txt");
  if (!movieFile)
  {
    cout << "Cannot open the file." << endl;
    return 1;
  }
  BinTree movieInventory[26];
  stockIt(movieFile, movieInventory);
  for (int i = 25; i >= 0; i--)
  {
    if (!movieInventory[i].isEmpty())
    {
      cout << movieInventory[i];
    }
  }
  return 0;
}
