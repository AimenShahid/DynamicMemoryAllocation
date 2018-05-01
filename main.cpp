#include<iostream>
#include "dvdcollection.h"
using namespace std;
int main()
{
  dvdcollection d1;
  d1.add(*(new dvd("Windows XP",100)));
  d1.add(*(new dvd("Windows 7",100)));
  d1.add(*(new dvd("Windows 8",100)));
  d1.add(*(new dvd("Windows 10",100)));

  d1.display();

  dvdcollection d2;
  d2.add(*(new dvd("Conjuring",150)));
  d2.add(*(new dvd("Ring",200)));
  d2.add(*(new dvd("Annabelle",300)));
  
  d2.display();
  cout << endl <<"Index :"<<d1.search(200)<<endl;
  d1.Delete("Ring");
  d1.display();
  system("pause");

};