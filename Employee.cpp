#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
private:
	int empid;
	char name[20];
	float sal;
public:
	Employee()=default;
	Employee(int e,const char *n,float s):empid(e),sal(s)
	{
		strcpy(name,n);
	}
	void Accept()
	{
		cout<<"---ENTER YOUR DETAILS---"<<endl;
		cout<<"Enter your employee id:";
		cin>>empid;
	//	cout<<endl;

		cout<<"Enter your Name:";
		cin.get();
		cin.getline(name,20);
		

		cout<<"Enter your salary:";
		cin>>sal;
	}
		void display()
		{
		cout<<"---YOUR DETAILS---"<<endl;
		cout<<"Your Id:"<<empid<<endl;
		cout<<"Your name:"<<name<<endl;
		cout<<"Your salary:"<<sal<<endl;
		}
};
int main()
{//	Employee e;
	Employee e(5,"name",5675);
	e.display();
	e.Accept();
	e.display();
	return 0;
}
