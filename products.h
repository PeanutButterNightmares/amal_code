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
		
		products(double cost);

		void setcost (double cost);
		
		double getcost(); 
};

class Cd : public products {			//CD Declaration
	private: 
		std::string CdName;
		std::string singerName;
	
	public:
		Cd( std::string CdName, std::string singerName, double cost);
		
		void setCdName (std::string CdName);
		void setsingerName (std::string singerName);
	
		std::string getCdName();		//here missing brackets '()'
		std::string getSingerName();	//and here too
	
	};
		
class Dvd : public products {			//DVD Declaration
	private: 
		std::string DvdName;

	public:
		Dvd(std::string DvdName, double cost);
			
		void setDvdName (std::string DvdName);
		
		std::string getDvdName(); 		// again missing brackets for method

};	
	
class Magazine : public products{		//Magazine Declaration
	private: 
		std::string MagazineName;
		
	public:
		
		Magazine(std::string MagazineName, double cost);
			
		void setMagazineName (std::string MagazineName);
		
		std::string getMagazineName(); 	//yet again
	};

class Book : public products {			//Book Declaration
	private: 
		std::string BookName;
		
	public:
		Book(std::string BookName, double cost);
		
		void setBookName (std::string BookName);
		
		std::string getBookName(); 		//one for the road
	
	};	

#endif

