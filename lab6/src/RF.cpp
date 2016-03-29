void RF :: write(string buf)
{
    fstream fp1;
    //char flname[max];
    //cout<<"enter the RF name to write the read record"<<endl;
    //cin>>flname;
    fp1.open("data.txt",ios::out|ios::app);
    fp1<<buf;
    fp1<<endl;
    int sz=buf.size();
    int loc=fp1.tellp();
    pos=loc-sz;
    fp1.close();
}
void RF::unpack(int pos1)
{
    fstream fp1;
    string buffer;
    fp1.open("data.txt",ios::in);
    fp1.seekp(pos1,ios::beg);
    getline(fp1,buffer);
    string s;
    int i=0;
    cout<<endl<<endl;
    usn.erase();
    while(buffer[i]!='|')
    {
	usn+=buffer[i];
	i++;
    }
    i++;
    name.erase();
    while(buffer[i]!='|')
    {
	name+=buffer[i];
	i++;
    }
    i++;
    branch.erase();
    while(buffer[i]!='|')
    {
	branch+=buffer[i];
	i++;
    }
    i++;
    sem=0;
    while(buffer[i]!='$')
    {
	s=buffer[i];
	stringstream convert(s);
	convert>>sem;
	i++;
    }
    cout<<"usn is : "<<usn<<endl;
    cout<<"name is : "<<name<<endl;
    cout<<"branch is : "<<branch<<endl;
    cout<<"sem is : "<<sem<<endl;
}
