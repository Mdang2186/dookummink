#include<iostream>
using namespace std;

class PS
{
	private:
		float tuso,mauso; 
	public :
	void nhap()
	{
		cout<<"Tu so: ";
		cin>>tuso;
		do
		{ 
		cout<<"mauso: ";
		cin>>mauso;
	    }while(mauso==0) ;
	}
	
	void xuat();
	/*	
	{
		cout<<tuso/mauso;
	}
	*/
};
void PS::xuat()
{
	cout<<tuso<<"/"<<mauso<<" = "<<tuso/mauso<<endl; 
 } 
int main()
{
	PS a;
	a.nhap();
	a.xuat();

}










