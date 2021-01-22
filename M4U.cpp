#include <iostream>
#include <fstream>
#include <string>
#include "products.h"

/*
 M4U.cpp
 Author: M00734729 <aa4690@live.mdx.ac.uk>
 Created: 14/01/21
 Updated: 17/01/21
*/

int main()
{

  std::string aa ="No. of Cds sold = 2700\n";
  std::string ab ="No. of Dvds sold = 347\n";
  std::string ac ="No. of magazines sold = 49\n";
  std::string ad ="No. of books sold = 1235\n";

    int option;
    int c = 1;
    int d = 2;
    int m = 3;
    int b = 4;
    int a = 5;
    int s = 6;
    int r = 7;



   std::string calculateagain = "yes";
    do
    {

      std ::cout<<"___________________________________________________\n";
      std ::cout<<"Hello M4U Employee! What would you like to do?\n";
      std ::cout<<"Type "<<c<<" for selling CD.\n";
      std ::cout<<"Type "<<d<<" for Selling DVD.\n";
      std ::cout<<"Type "<<m<<" for Selling magazine\n";
      std ::cout<<"Type "<<b<<" for Selling book\n";
      std ::cout<<"Type "<<b<<" for Selling book\n";
      std ::cout<<"Type "<<a<<" for adding item\n";
      std ::cout<<"Type "<<s<<" for updating stock\n";
      std ::cout<<"Type "<<r<<" for seeing the sales report\n";
      std ::cout<<"___________________________________________________\n";

        std::cin>>option;
    switch (option)
    {
        case 1: std::cout<<"CD Sold.\n";
        break;
        case 2: std::cout<<"DVD Sold.\n";
        break;
        case 3: std::cout<<"Magazine Sold.\n";
        break;
        case 4: std::cout<<"Book Sold.\n";	
        break;
        case 5: std::cout<<"Item added to inventory.\n";
        break;
        case 6: std::cout<<"Stock Updated!\n";
        break;
        case 7: std::cout<<"This is a quarterly sales report of M4U store: -\n"\
;
          std::cout<<aa;
          std::cout<<ab;
          std::cout<<ac;
          std::cout<<ad;
        break;
        default: std::cout<<"Invalid Input.";
        }
    std ::cout << "Anything else? (yes/no)\n";
        std::cin >> calculateagain;
        continue;
    } while(calculateagain != "no");
    std ::cout<< "Program closed";


        return 0;
}


