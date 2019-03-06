//------------------------------------------- Customer.cpp -------------------------------------------------------------
// Jenny Troyan CSS 343 C
// Creation Date 2019-03-05
// Date of Last Modification 
//----------------------------------------------------------------------------------------------------------------------
// Purpose:
//----------------------------------------------------------------------------------------------------------------------
// Notes:
//----------------------------------------------------------------------------------------------------------------------
#include "Customer.h"

ostream &operator<< (ostream &output, const Customer &customer)
{
	output << customer.id << " " << customer.firstName << " " << customer.lastName << endl;
	return output;
}

Customer::Customer (int id, string firstName, string lastName)
{
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

Customer::~Customer ()
{
}

string Customer::getName () const
{
	return (this->firstName + " " + this->lastName);
}

int Customer::getID () const
{
	return this->id;
}

vector<Transaction*> Customer::getHistory () const
{
	return this->transactionHistory;
}

void Customer::addTransaction (Transaction *transaction)
{
	this->transactionHistory.push_back(transaction);
}





