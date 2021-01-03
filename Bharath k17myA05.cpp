#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class login
{
        int user,i,f;
		char pass[20],a,z,l;
	    public : int loginpage();
};
class icecream
{
		protected:
			string icecream_type,icecream_flavour,icecream_quantity,price;
};
class choose:public icecream
{
		public:
		void add_icecream();
		void show_icecreams();
		void sale_icecream();
};
int login::loginpage()
{       f=0;
		li3:cout<<"\n   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  LOGIN FIRST  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  "<<endl;
        cout<<" \n\n                  ENTER USERNAME:=";
		cin>>user;
		cout<<" \n\n                  ENTER PASSWORD:=";
		for(i=0;i<7;i++)
		{
				    a=getch();
					pass[i]=a;
					cout<<"*";
		}
		pass[8]='\0';
		cout<<"\n\n\t\tENTER ANY KEY TO LOGIN";
		cin>>z;
		if(user==11706469&&strcmp(pass,"bharath")==0)
		{
            cout<<"\n\n\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		    cout<<"\n\t        WELCOME TO ICECREAM PARLOUR !!!! LOGIN IS SUCCESSFUL";
            cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        	cout<<"\n\n\n\t\t\t\tPRESS ANY KEY TO CONTINUE\n";
        	cin>>l;
	        system("CLS");
	        return 0;
		}
		else
		{
		cout<<"\n>>>>>>>>> SORRY !!!!  LOGIN IS UNSUCESSFUL.....TRY AGAIN!!!";
		f++;
		getch();
		system("CLS");
		if(f>3)
        {
            cout<<" \n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
            cout<<"\n       YOU HAD INCORRECTLY ENTERED PASSWORD MORE THAN 3 TIMES!!! PLEASE TRY AGAIN AFTER SOMETIME";
            cout<<" \n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
            return 4;
        }
        else
		goto li3;
		}
}
void choose::add_icecream()
{
		ofstream f1;
		char v;
		f1.open("ICECREAM23",ios::app);
		system("CLS");
		cout<<"\n\t\tENTER ICECREAM TYPE"<<endl;
		cin>>icecream_type;
		cout<<"\n\t\tENTER ICECREAM FLAVOUR"<<endl;
		cin>>icecream_flavour;
		cout<<"\n\t\tENTER THE QUANTITY"<<endl;
		cin>>icecream_quantity;
		cout<<"\n\t\tENTER THE PRICE"<<endl;
		cin>>price;
		f1<<icecream_type<<setw(25);
		f1<<icecream_flavour<<setw(25);
		f1<<icecream_quantity<<setw(25);
		f1<<price<<setw(25);
		f1<<"\n";
		cout<<"\n\t\t---------------ICECREAM ADDED SUCCESSFULLY----------------"<<endl;
		cout<<"\t\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"<<endl;
		cout<<"\t\t      ICECREAM TYPE   : "<<icecream_type<<endl;
		cout<<"\t\t      FLAVOUR         : "<<icecream_flavour<<endl;
		cout<<"\t\t      QUANTITY        : "<<icecream_quantity<<endl;
		cout<<"\t\t      PRICE           : "<<price<<"  "<<endl;
		cout<<"\t\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"<<endl;
        cout<<"\n\n\t\tENTER ANY KEY TO PERFORM ACTION AGAIN.........";
        cin>>v;
        system("CLS");
		f1.close();
}
void  choose::show_icecreams()
{
	ifstream f2;
	system("CLS");
    f2.open("ICECREAM23",ios::in);
    string line;
    char v;
    system("CLS");
    cout<<"\n\n";
    cout<<"\t\t*************** ICECREAM LIST ***************";
    cout<<"\n\n";
    cout<<"\n\n\t\tICECREAM"<<setw(25)<<"FLAVOUR"<<setw(25)<<"QUANTITY"<<setw(25)<<"PRICE";
    cout<<"\n\t\t---------"<<setw(25)<<"-----------"<<setw(25)<<"--------"<<setw(25)<<"------"<<endl;
    while(f2)
    {
        getline(f2,line);
        cout<<"\t\t"<<line<<endl;
    }
    f2.close();
    cout<<"\n\t\tENTER ANY KEY TO PERFORM ACTION AGAIN.........";
    cin>>v;
    system("CLS");
}
void choose::sale_icecream()
{
    ifstream f3;
    int flag=0;
	f3.open("ICECREAM23",ios::in);
	string a,b,c,d,e,f,g,v;
	cout<<"\n\t\tENTER ICECREAM TYPE"<<endl;
	cin>>a;
	cout<<"\n\t\tENTER ICECREAM FLAVOUR"<<endl;
	cin>>b;
	cout<<"\n\t\tENTER ICECREAM QUANTITY"<<endl;
	cin>>c;
    while(f3)
    {
    	f3>>d;
    	f3>>e;
    	f3>>f;
    	f3>>g;
    	if(a.compare(d)==0&&b.compare(e)==0&&c.compare(f)==0)
    	{
           cout<<"\t\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"<<endl;
           cout<<"\n\t\t  ICECREAM PAYMENT DETAILS"<<endl;
           cout<<"\n\t\t  ICECREAM    :"<<a<<endl;
           cout<<"\n\t\t  FLAVOUR     :"<<b<<endl;
           cout<<"\n\t\t  QUANTITY    :"<<c<<endl;
           cout<<"\n\t\t  PRICE       :"<<g<<endl;
           cout<<"\t\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"<<endl;
           flag++;
           break;
       }
    }
    if(flag==0)
    cout<<"\n\t\tSORRY, ICECREAM IS NOT AVAILABLE, PLEASE VISIT NEXT TIME";
    cout<<"\n\n\t\tENTER ANY KEY TO PERFORM ACTION AGAIN.........";
    cin>>v;
    system("CLS");
    f3.close();
}
int main()
{
     login lg;
     int pa;
     pa=lg.loginpage();
     choose obj;
     int ch;
     int y;
     if(pa!=4)
     {
     li1: cout << "\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ICECREAM PARLOUR\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
	 cout <<"\n\n                                          ";
     cout << "\n\n";
     cout<<" \n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
     cout << "\n\n \t\t\t\t\t  Press 1> TO ADD AN ICECREAM";
     cout << "\n \t\t\t\t\t  Press 2> TO VIEW THE ICECREAM MENU";
     cout << "\n \t\t\t\t\t  Press 3> TO SALE AN ICECREAM";
     cout << "\n \t\t\t\t\t  Press 4> TO LOGOUT";
     cout<<" \n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
     cout << "\n\n";
     cout << "\t\t\t Select Your Choice ::";
     cin>>ch;
     if(ch==1)
    {
     obj.add_icecream();
     goto li1;
    }
     else if(ch==2)
     {
     obj.show_icecreams();
     goto li1;
     }
     else if(ch==3)
     {
     obj.sale_icecream();
     goto li1;
     }
     else if(ch==4)
     {
     cout<<"\n\t\t---------------------------THANK YOU--------------------\n\n";
     }
     else
     {
     cout<<"\n\t\tINVALID INPUT, PLEASE TRY AGAIN\n";
     goto li1;
     }
     }
     else
     li2:return 0;
}
