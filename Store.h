#pragma once

#include <array>
#include <map>
#include "hash_map.h"
#include <iostream>
#include <fstream>

using namespace std;
class Store
{
	map<int, Merchandise>* mediaTreeTable[26];
	HASH_MAP<int, Customer> customerTable;
	string storename;
public:
	Store();
	~Store();
	void setMerchandise(ifstream&);
	void setCustomers(ifstream&);
	void setCommands(ifstream&);
	Customer& getCustomer(int) const;
	ostream& allInventory() const noexcept;
	inline string getStoreName() const noexcept;
};

