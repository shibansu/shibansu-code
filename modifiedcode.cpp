#include <iostream>
using namespace std;

class item
{ 
  string itemname;
  int unitprice;
  int gstpercentage;
  int quantity;
  public:
  item(string itemname,int unitprice, int gstpercentage,int quantity)
  {
      this->itemname=itemname;
      this->unitprice=unitprice;
      this->gstpercentage=gstpercentage;
      this->quantity=quantity;
  }
  int bill(void)
  {
      int bill=0;
      if(unitprice>500)
      { 
          bill=unitprice-(unitprice*0.05);
          bill=bill+bill*(gstpercentage*0.01);
          bill=bill*quantity;
         
      }
      else
      {
        bill=unitprice+(unitprice+(gstpercentage*0.01));
        bill=bill*quantity;
        
      }
      return bill;
  }
};
void toalamountpaidbycustomer(item a, item b, item c, item d)
{
    int totalbill=a.bill()+b.bill()+c.bill()+d.bill();
    cout<<"your ciatette bill equal to "<<a.bill()<<endl;
    cout<<"your Umbrella bill equal to "<<b.bill()<<endl;
    cout<<"your ciatette bill equal to "<<c.bill()<<endl;
    cout<<"your Honey bill equal to " <<d.bill()<<endl;
    cout<<"your total bill is "<<totalbill<<endl;
}
int main()
{
    item Leatherwallet("leather rwallet" ,1100,18,1);
    item Umbrella("umbrella ",900,12,2);
    item Cigarette("cigarette ",200,28,3);
    item Honey(" honey ",100,0,4);
    
    toalamountpaidbycustomer(Leatherwallet,Umbrella,Cigarette,Honey);
    return 0;
}
