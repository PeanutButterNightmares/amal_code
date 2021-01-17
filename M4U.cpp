#include <iostream>
#include <string>
using namespace std;

int main()
{
    int option;
    int cd = 1;
    int dvd = 2;
    int m = 3;
    int b = 4;
    
    cout<<"Item added to inventory.\n";
    cout<<"Stock Updated!\n";
    cout<<"This is a quarterly sales report of M4U store: -\n";
    cout<<"Hello M4U Employee! What would you like to do?\n";
    cout<<"Type "<<cd<<" for selling CD.\n";
    cout<<"Type "<<dvd<<" for Selling DVD.\n";
    cout<<"Type "<<m<<" for Selling magazine\n";
    cout<<"Type "<<b<<" for Selling book\n";
    cin>>option; 
    cout<<"Item Sold.\n";

    return 0;
}
