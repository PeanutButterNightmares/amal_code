#include "products.h"
#include <string>
#include <iostream>

/* 
products.cpp
Author: M00734729
Created: 19/01/21
Last Updated: 19/01/21
*/

products::products(){};
products::products(double cost){
	this->cost=cost;
}

double products::getcost(){
	return this->cost;
}

void products::setcost(double cost){
	this->cost=cost;
}
	
	Cd::Cd(){}
	
Cd::Cd(std::string CdName, std::string singerName, double cost)::products(cost){
	this->CdName=CdName;
	this->singerName=singerName;
	}
	
		
void Cd::setCdName(std::string CdName){
	this->CdName=CdName;
}

void Cd::setsingerName(std::string singerName){
	this->singerName=singerName;
}
std::string Cd::getName(){
	return  Cdname;
	}
	
std::string singer::getName(){
	return singerName;
}

	Dvd::Dvd(){}
Dvd::Dvd(std::string DvdName, double cost)::products(cost){
	this->DvdName=DvdName;
	}
	
void Dvd::setDvdName(std::string DvdName){
	this->DvdName=DvdName;
}

std::string Dvd::getName(){
	return Dvdname;
	}

Magazine::Magazine (){}
(std::string MagazineName, double cost)::products(cost){
	this->MagazineName=MagazineName;
	}

std::string Magazine::getName(){
	return Magazinename;
	}
	
	Book::Book(){}
	
Book::Book(std::string BookName, double cost)::products(cost){
	this->BookName=BookName;
	}
		
void Book::setBookName(std::string BookName){
	this->BookName=BookName;
}

std::string Book::getName(){
	return Bookname;
	}

