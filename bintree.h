//--------------------------------bintree.h--------------------------------
//Johnathan Hewit
//Created: 01/20/2019
//Modified: 01/28/2019
//---------------------------------------------------------------------------
//Purpose: Header file for BinTree, a Binary Search Tree. It uses a separate
//         object class called Merchandise to hold its data, and a struct called
//         Node for each node in the Binary Tree.
//---------------------------------------------------------------------------
//Notes: Assumption: Merchandise provides proper data checking and overloads
//       appropriate operators for comparison.
//---------------------------------------------------------------------------
#ifndef BINTREE_H
#define BINTREE_H
#include <iostream>
#include "merchandise.h"
using namespace std;

class BinTree
{
public:
  //Constructors
  BinTree();
  ~BinTree();

  //Getters
  bool retrieve(const Merchandise &target, Merchandise* &location) const;
  bool isEmpty() const;

  //Setters
  bool insert(Merchandise* data);
  void makeEmpty();

  //Operator Overloads
  //Equality
  //bool operator==(const BinTree &bin) const;
  //bool operator!=(const BinTree &bin) const;
  //Output
  friend ostream& operator<<(ostream &print, const BinTree &bin);

private:
  struct Node
  {
    Merchandise* data;
    Node* left;
    Node* right;
  };
  Node* root;

  //Private and Helper Functions
  void inOrderPrint(Node* root, ostream &print) const;
  void emptyTree(Node* &root);
  bool findEquality(Node* root, Node* otherRoot) const;
  bool findData(Node* root, const Merchandise &target, Merchandise* &location, Node* &nodeLocation) const;
};

#endif
