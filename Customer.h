#ifndef CSS343_ASG4_CUSTOMER_H
#define CSS343_ASG4_CUSTOMER_H
//------------------------------------------- Customer.h -------------------------------------------------------------
// Jenny Troyan CSS 343 C
// Creation Date 2019-03-05
// Date of Last Modification 
//----------------------------------------------------------------------------------------------------------------------
// Purpose:
//----------------------------------------------------------------------------------------------------------------------
// Notes:
//----------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Customer
{
				friend ostream &operator<<(ostream &, const Customer &);
		private:
				int id;
				string firstName;
				string lastName;
				vector<Transaction*> transactionHistory;
				
		public:
				//Customer();
				Customer(int, string, string);
				~Customer();
				string getName() const;
				int getID() const;
				vector<Transaction*> getHistory() const;
				void addTransaction(Transaction*);
};

#endif //CSS343_ASG4_CUSTOMER_H


