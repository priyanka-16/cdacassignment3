#include<iostream>
using namespace std;
class Calculator
{
	private:
		int a,b;
	public:
		Calculator():a(0),b(0)
	{}
		void Accept()
		{
	     	int k;
		
	         cout<<"--------MENU------"<<endl;
	         cout<<"Enter your choice"<<endl;
       		 cout<<"1.Addition"<<endl<<"2.Substraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
       		 cin>>k;
			cout<<"value of a=";
                        cin>>a;
                        cout<<"value of b=";
                        cin>>b;

        switch(k)
        {
                case 1 : add(a,b);
                         break;
                case 2 : substract(a,b);
                         break;
                case 3 : multiply(a,b);
                         break;
                case 4 : divide(a,b);
                         break;
        }
	}

		int add(int a,int b)
		{
			int c;
			c=a+b;
			cout<<"Addition is="<<c;
		}
		int substract(int a,int b)
		{
			int c;
			c=a-b;
			cout<<"subtraction is="<<c;
		}
	
		int multiply(int a,int b)
		{
			int c;
			c=a*b;
			cout<<"multiplication is="<<c;
		}
		float divide(float a,float b)
		{
			float c;
			c=(a/b);
		
			cout<<"division is="<<c;
		}
};
int main()
{
	Calculator c;
	
	c.Accept();
	
	return 0;
}
		
	
