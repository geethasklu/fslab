//#include "RF.h"
//#include "RF.cpp"
IF::IF(int maxkeys)
{
  max=maxkeys;
  key[]=keys[];
  addr-i=addr;
 }
 IF::insert(string key,int addr)
  {
    for(int i=0;i<max;i++)
    {
      key[i+1]=keys[i];
      addr-i=addr;
      nokeys++;
    }
  }  
  
