#include <iostream>
#include <string>
#include <stdlib.h>

/* 
 M4U.cpp
 Author: M00734729 <aa4690@live.mdx.ac.uk>
 Created: 14/01/21 
 Updated: 17/01/21 
*/

using namespace std;

class Items {       // The class
  private:             // Access specifier
    int id;        // Attribute (int variable)
   std::string title;  // Attribute (string variable)
};

int main()
{
    int option;
    int c = 1;
    int d = 2;
    int m = 3;
    int b = 4;
    int a = 5;
    int s = 6;
    int r = 7;
    
   
   string calculateagain = "yes";
    do
    { 
    
    cout<<"Hello M4U Employee! What would you like to do?\n";
    cout<<"Type "<<c<<" for selling CD.\n";
    cout<<"Type "<<d<<" for Selling DVD.\n";
    cout<<"Type "<<m<<" for Selling magazine\n";
    cout<<"Type "<<b<<" for Selling book\n";
    cout<<"Type "<<a<<" for adding item\n";
    cout<<"Type "<<s<<" for updating stock\n";
    cout<<"Type "<<r<<" for seeing the sales report\n";
    
    
    cin>>option;
    switch (option)
    { 
        case 1 : cout<<"CD Sold.\n";
        break;
        case 2 : cout<<"DVD Sold.\n";
        break; 
        case 3 : cout<<"Magazine Sold.\n";
        break; 
        case 4 : cout<<"Book Sold.\n";
        break;
        case 5 : cout<<"Item added to inventory.\n";
        break;
        case 6 : cout<<"Stock Updated!\n";
        break; 
        case 7 : cout<<"This is a quarterly sales report of M4U store: -\n";
        break;
        default : cout<<"Invalid Input.";
        }
       cout << "Anything else? (yes/no)\n";
        cin >> calculateagain;
        continue; 
    } while(calculateagain != "no"); 
    cout<< "Program closed";
    
   
        return 0;
}


