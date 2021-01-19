#ifndef _PRODUCTS_H_
#define _PRODUCTS_H_
#include <string>
/*
products.h
Author: M00734729 <AA4690@live.mdx.ac.uk>
Created: 17/1/2020
Updated: 17/1/2020
*/

using std::string;

class products {
   private:
double cost; 

public:
product(double cost);

double getcost;

void setcost (double cost); 
};

class Cd : public products {
	private: 
	std::string CdName;
	std::string singerName;
	
	public:
	Cd( std::string CdName, std::string singerName, double cost);
	
	std::string getCdName;
	std::string getsingerName;
	
	void setCdName (std::string CdName);
	void setsingerName (std::string singerName);
	}
	
class Dvd : public products {
	private: 
	std::string DvdName;
		
	public:
	Cd( std::string DvdName, double cost);
	
	std::string getDvdName;
	
	void setDvdName (std::string DvdName);
	}	
	
class Magazine : public products{
	private: 
	std::string MagazineName;
		
	public:
	Cd( std::string MagazineName, double cost);
	
	std::string getMagazineName;
	
	void setMagazineName (std::string MagazineName);
	}	
}

#endif
