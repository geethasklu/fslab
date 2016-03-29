# include<iostream.h>
int main()
{
    int choice,i,k;
    string buffer,key;
    student s;
    file f;
    indf ind;
    while(1)
    {
    cout<<"1) add\n2) search\n3)delete\n------------\nEnter your choice : ";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
        case 1:
        {
           key=s.read();
           buffer=s.pack();
           f.write(buffer);
           i=f.pos;
           ind.insert(key,i);
        }
        break;
        case 2:
        {
            cout<<"enter the usn to be searched :";
            cin>>key;
            k=ind.search(key);
            i=ind.pos;
            i=i-1;
            f.unpack(i);
        }
        break;
        case 3:
        {
            cout<<"enter the usn to be removed : ";
            cin>>key;
            cout<<endl;
            k=ind.search(key);
            if(k==-1)
                exit(0);
            ind.rem(key);
        }
        break;
        default : cout<<"invalid option"<<endl;
    }
    cout<<"enter 0 to exit else 1 to continue : ";
    cin>>choice;
    if(choice == 0)
        exit(0);
    else
        continue;
    }
}
