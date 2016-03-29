string student::read()
{
    cin.clear();
    cin.ignore(255,'\n');
    cout<<"enter the name :"<<endl;
    getline(cin,name);
    cout<<"enter the usn :"<<endl;
    cin>>usn;
    cin.clear();
    cin.ignore(255,'\n');
    cout<<"enter the branch :"<<endl;
    getline(cin,branch);
    cout<<"enter the semester :"<<endl;
    cin>>sem;
    cin.clear();
    cin.ignore(255,'\n');
    cout<<endl;
    return usn;
}
string student::pack()
{
    string sem1;
    string temp;
    stringstream out;
    out<<sem;
    sem1=out.str();
    int i;
    temp=usn+'|'+name+'|'+branch+'|'+sem1;
    for(i=temp.size();i<100;i++)
    {
    	temp+='$';
    }
    cout<<temp<<endl;
    buffer=temp;
    return buffer;
}
