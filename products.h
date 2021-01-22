#ifndef _PRODUCTS_H_
#define _PRODUCTS_H_
#include <string>

/* 
products.h
Author: M00734729
Created: 17/01/21
Last Updated: 18/01/21
*/

class products {
private:
	double cost; 

public:
	products();
	products(double cost);

void setcost (double cost);
double getcost (); 
};

class Cd : public products {
	private: 
	std::string CdName;
	std::string singerName;
	
	public:
	Cd( std::string CdName, std::string singerName, double cost);
	
	void setCdName (std::string CdName);
	void setsingerName (std::string singerName);
	
	std::string getCdName;
	std::string getsingerName;
	
	};
	
class Dvd : public products {
	private: 
	std::string DvdName;
		
	public:
	Dvd( std::string DvdName, double cost);
		
	void setDvdName (std::string DvdName);
	
	std::string getDvdName;
	};	
	
class Magazine : public products{
	private: 
	std::string MagazineName;
		
	public:
	Magazine();
	Magazine(std::string MagazineName, double cost);
		
	void setMagazineName (std::string MagazineName);
	
	std::string getMagazineName;
	};

class Book : public products {
	private: 
	std::string BookName;
		
	public:
	Book(std::string BookName, double cost);
	
	void setBookName (std::string BookName);
	
	std::string getBookName;
	
	};	

#endif

