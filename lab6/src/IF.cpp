void IF::insert(string key,int pos)
{
    fstream fp1;
    fp1.open("inde.txt",ios::out|ios::app);
    string pos1;
    string temp;
    stringstream out;
    out<<pos;
    pos1=out.str();
    int i;
    temp=key+'|'+pos1;
    for(i=temp.size();i<50;i++)
    {
    	temp+='$';
    }
    fp1<<temp;
    fp1<<endl;
    fp1.close();
}
int IF::search(string key)
{
   // cout<<"inside search"<<endl;
    fstream fp1;
    string buffer,unkey,unpos,s;
    int i;
    fp1.open("inde.txt",ios::in);
    while(!fp1.eof())
    {
     //   cout<<"*"<<endl;
	getline(fp1,buffer);
        int k=key.size();
        string sub=buffer.substr(0,k);
        //cout<<"sub string is : "<<sub<<endl;
        if(key==sub)
        {
       //     cout<<"almost found"<<endl;
            while(buffer[i]!='|')
            {
		unkey+=buffer[i];
		i++;
            }
            i++;
            while(buffer[i]!='$')
            {
		unpos+=buffer[i];
		i++;
            }
         //   cout<<"done unpacking"<<endl;
            s=unpos;
            stringstream convert(s);
            convert>>pos;
            cout<<"position in RF : "<<pos<<endl;
           // cout<<"out of search"<<endl;
            return 0;
        }
        else
        {
            cout<<"record not found"<<endl;
            
        }
    }
    return -1;
      //cout<<"out of search"<<endl;
}
void IF::rem(string key)
{
   //cout<<"started to remove record"<<endl; 
   //cout<<"back to remove"<<endl;
   string buffer,usn1;
   IF f;
   int i=pos;
   int j=0,l,siz1=0,loc1=0,pos1=0;
   cout<<"value of pos in rem function : "<<i<<endl;  
   fstream fp1,fp2,fp3;
   fp1.open("data.txt",ios::in);
   fp2.open("tempdata.txt",ios::out);
   fp2.close();
   fp2.open("tempdata.txt",ios::out|ios::app);
   l=0;
   while(!fp1.eof())
   {
   getline(fp1,buffer);
   l++;
   //cout<<"value of l is : "<<l<<endl;
   j=fp1.tellp();
   j=j-buffer.size();
   /*cout<<"value of i : "<<i<<endl<<"value of j : "<<j<<endl;*/
   if(j==i)
   {
       //cout<<"inside if"<<endl;
       continue;
   }
   else
   {
       //fp2.seekp(0,ios::beg);
       //int t=fp2.tellp();
      // cout<<"inside else at pos : "<<t<<endl;
       fp2<<buffer;
       fp2<<endl;
   }
   }
   l=l-2;
   //cout<<"value of l is : "<<l<<endl;
   fp1.close();
   fp2.close();
   fp1.open("data.txt",ios::out);
   fp1.close();
   fp1.open("data.txt",ios::out|ios::app);
   fp2.open("tempdata.txt",ios::in);
   fp3.open("inde.txt",ios::out);
   fp3.close();
   while(!fp2.eof())
   {
       i=0;
       if(l==0)
           break;
       getline(fp2,buffer);
       fp1<<buffer;
       fp1<<endl;
       l--;
       usn1.clear();
       while(buffer[i]!='|')
    {
	usn1+=buffer[i];
	i++;
    }
       siz1=buffer.size();
       loc1=fp1.tellp();
       pos1=loc1-siz1;
       f.insert(usn1,pos1);
       }
  // indrem(key);
  // cout<<"back to rem function"<<endl;
   fp1.close();
  // cout<<"fp1 closed"<<endl;
   fp2.close();
}
void IF::rem(string key)
{
   //cout<<"started to remove record"<<endl; 
   //cout<<"back to remove"<<endl;
   string buffer,usn1;
   IF f;
   int i=pos;
   int j=0,l,siz1=0,loc1=0,pos1=0;
   cout<<"value of pos in rem function : "<<i<<endl;  
   fstream fp1,fp2,fp3;
   fp1.open("data.txt",ios::in);
   fp2.open("tempdata.txt",ios::out);
   fp2.close();
   fp2.open("tempdata.txt",ios::out|ios::app);
   l=0;
   while(!fp1.eof())
   {
   getline(fp1,buffer);
   l++;
   //cout<<"value of l is : "<<l<<endl;
   j=fp1.tellp();
   j=j-buffer.size();
   /*cout<<"value of i : "<<i<<endl<<"value of j : "<<j<<endl;*/
   if(j==i)
   {
       //cout<<"inside if"<<endl;
       continue;
   }
   else
   {
       //fp2.seekp(0,ios::beg);
       //int t=fp2.tellp();
      // cout<<"inside else at pos : "<<t<<endl;
       fp2<<buffer;
       fp2<<endl;
   }
   }
   l=l-2;
   //cout<<"value of l is : "<<l<<endl;
   fp1.close();
   fp2.close();
   fp1.open("data.txt",ios::out);
   fp1.close();
   fp1.open("data.txt",ios::out|ios::app);
   fp2.open("tempdata.txt",ios::in);
   fp3.open("inde.txt",ios::out);
   fp3.close();
   while(!fp2.eof())
   {
       i=0;
       if(l==0)
           break;
       getline(fp2,buffer);
       fp1<<buffer;
       fp1<<endl;
       l--;
       usn1.clear();
       while(buffer[i]!='|')
    {
	usn1+=buffer[i];
	i++;
    }
       siz1=buffer.size();
       loc1=fp1.tellp();
       pos1=loc1-siz1;
       f.insert(usn1,pos1);
       }
  // indrem(key);
  // cout<<"back to rem function"<<endl;
   fp1.close();
  // cout<<"fp1 closed"<<endl;
   fp2.close();
}
void IF::rem(string key)
{
   //cout<<"started to remove record"<<endl; 
   //cout<<"back to remove"<<endl;
   string buffer,usn1;
   IF f;
   int i=pos;
   int j=0,l,siz1=0,loc1=0,pos1=0;
   cout<<"value of pos in rem function : "<<i<<endl;  
   fstream fp1,fp2,fp3;
   fp1.open("data.txt",ios::in);
   fp2.open("tempdata.txt",ios::out);
   fp2.close();
   fp2.open("tempdata.txt",ios::out|ios::app);
   l=0;
   while(!fp1.eof())
   {
   getline(fp1,buffer);
   l++;
   //cout<<"value of l is : "<<l<<endl;
   j=fp1.tellp();
   j=j-buffer.size();
   /*cout<<"value of i : "<<i<<endl<<"value of j : "<<j<<endl;*/
   if(j==i)
   {
       //cout<<"inside if"<<endl;
       continue;
   }
   else
   {
       //fp2.seekp(0,ios::beg);
       //int t=fp2.tellp();
      // cout<<"inside else at pos : "<<t<<endl;
       fp2<<buffer;
       fp2<<endl;
   }
   }
   l=l-2;
   //cout<<"value of l is : "<<l<<endl;
   fp1.close();
   fp2.close();
   fp1.open("data.txt",ios::out);
   fp1.close();
   fp1.open("data.txt",ios::out|ios::app);
   fp2.open("tempdata.txt",ios::in);
   fp3.open("inde.txt",ios::out);
   fp3.close();
   while(!fp2.eof())
   {
       i=0;
       if(l==0)
           break;
       getline(fp2,buffer);
       fp1<<buffer;
       fp1<<endl;
       l--;
       usn1.clear();
       while(buffer[i]!='|')
    {
	usn1+=buffer[i];
	i++;
    }
       siz1=buffer.size();
       loc1=fp1.tellp();
       pos1=loc1-siz1;
       f.insert(usn1,pos1);
       }
  // indrem(key);
  // cout<<"back to rem function"<<endl;
   fp1.close();
  // cout<<"fp1 closed"<<endl;
   fp2.close();
}
