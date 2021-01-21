#include "products.h"
#include <string>
#include <iostream>

/* 
products.cpp
Author: M00734729
Created: 19/01/21
Last Updated: 19/01/21
*/

products::products(double cost){
	this->cost=cost;
}

double products::getcost(){
	return this->cost;
}

void products::setcost(double cost){
	this->cost=cost;
}


//CD in this section
Cd::Cd(std::string CdName, std::string singerName, double cost): products(cost){ //only one colon is needed, not two 
	this->CdName=CdName;
	this->singerName=singerName;
}
	
		
void Cd::setCdName(std::string CdName){
	this->CdName=CdName;
}

void Cd::setsingerName(std::string singerName){
	this->singerName=singerName;
}
std::string Cd::getCdName(){
	return  CdName;
	}
	
std::string Cd::getSingerName(){
	return singerName;
}


//DVD in this section
Dvd::Dvd(std::string DvdName, double cost): products(cost){						//only one colon plis
	this->DvdName=DvdName;
}
	
void Dvd::setDvdName(std::string DvdName){
	this->DvdName=DvdName;
}

std::string Dvd::getDvdName(){
	return DvdName;
}


//Magazine in this section
Magazine::Magazine(std::string MagazineName, double cost): products(cost){		//colon error here
	this->MagazineName=MagazineName;
}

void Magazine::setMagazineName(std::string MagazineName){
	this->MagazineName=MagazineName;
}

std::string Magazine::getMagazineName(){
	return MagazineName;
}

	
//Book in this section
Book::Book(std::string BookName, double cost): products(cost){					//last time, colon
	this->BookName=BookName;
}
		
void Book::setBookName(std::string BookName){
	this->BookName=BookName;
}

std::string Book::getBookName(){
	return BookName;
}

