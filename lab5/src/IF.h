class IF
{
public :
  IF(int maxkeys =100);
  int insert(string key,int addr);
  int del(string key);
  int search(string key);
private:
    int maxkeys;
    int nokeys;
    };
