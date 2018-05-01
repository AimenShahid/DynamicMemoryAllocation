#include <iostream>
#include<string>
#include "dvd.h"
using namespace std;
int i;
class dvdcollection
{
  public:
  dvdcollection()
  {
    this->count=0;
    this->size=5;
    this->totalcost=0;
    list=new dvd[5];
  }
  dvdcollection(float tc,dvd *list)
  {
    //this->count=c;
    //this->size=s;
    this->totalcost=tc;
    this->list=list;
  }
  dvdcollection(dvdcollection &clone)
  {
    this->count=clone.count;
    this->size=clone.size;
    this->totalcost=clone.totalcost;
    this->list=clone.list;
  }
  void setcount(int count)
  {
    this->count=count;
  }
  void settotalcost(float cost)
  {
    this->totalcost=cost;
  }
  void setlist(dvd *list)
  {
    this->list=list;
  }
  int getcount()
  {
    return this->count;
  }
  float gettotalcost()
  {
    return this->totalcost;
  }
  void add(dvd &d)
  {
    if(count < size)
    {
      list[count]=d;
      count++;
    }
    else
    {
      incsize(d);
    }
    this->totalcost=totalcost+d.getcost();
  }
  void display()  
  {
    
    cout<< "    *******MY COLLECTION*******    "<<endl;
    for(i=0;i<count;i++)
    {
      cout << this->list[i] <<endl;
    }
    cout<<"Total Cost :" <<this->totalcost<<endl;
  }

  int search(string  name) 
  {
    dvd d1;
    int temp=0;
    for(i=1;i<=count;i++)
    {
       d1 = this->list[i-1];
      if(name == d1.getname())
      {
        temp=i;
        break;
      }
    }
      return temp;
  };
  float search(float cost) 
  {
    dvd d1;
    int temp=0;
    for(i = 1 ; i <= count ; i++)
    {
       d1 = this->list[i];
      if(cost == d1.getcost())
      {
        temp=i;
        break;
      }
    }
      return temp;
  };
void Delete(string name)  
{
  int temp = search(name) ;
  if(temp > 0)
  { 
    for(i=temp-1 ; i < count-1 ; i++)
    {
      this->list[i] = this->list[i+1]; 
    }
    count--;
  }
  else
  {
    cout<<"Not found!!"<<endl;
  }
};
  
  protected:     
  void incsize(dvd &d)  
  {
    size = size * 2;
    dvd *newlist = new dvd[size];
    for(i=0 ; i < (size/2) ; i++)
    {
      newlist[i] = list[i]  ;
    }
    delete [] list;
    list = newlist ;
    list[count] = d;
    count++;
  };
  


  private:
  int count;
  int size;
  float totalcost;
  dvd *list;
};