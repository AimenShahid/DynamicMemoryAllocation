#include <iostream>
using namespace std;
class dvd
{
  public:
  void setname()
  {
    this->name=name;
  }
  void setcost()
  {
    this->cost=cost;
  }
  string getname()
  {
    return this->name;
  }
  float getcost()
  {
    return this->cost;
  }
  dvd()
  {
    string name="";
    float cost=0;
  }
  dvd(string name,float cost)
  {
    this->name=name;
    this->cost=cost;
  }
  dvd(dvd &clonedvd)
  {
    this->name=clonedvd.name;
    this->cost=clonedvd.cost;
  }
  display()
  {
    cout << "NAME:" << this->name << endl << "COST:" << this->cost << endl;
  }

    private:
    string name;
    float cost;
};

ostream& operator <<(ostream& o , dvd& a) 
{
  return o << "NAME:" << a.getname() << endl << "COST:" << a.getcost() << endl;
};