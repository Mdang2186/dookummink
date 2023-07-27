#include<iostream>
#include<string.h>
using namespace std;
class GV
{
	private:
	char ht [30];
	int t;
	char bc [30], chuyennganh [30];
	float bl;
	public:
		void nhap()
		{
			cout<<"\nNhap HT: ";
			fflush(stdin);
			cin.getline(ht,30);
			cout<<"\nNhap tuoi: ";
			cin>>this->t;
			cout<<"\nNhap bang cap: ";
			fflush(stdin);
			cin.getline(bc,30);
			cout<<"\nChuyen nganh: ";
			fflush(stdin);
			cin.getline(chuyennganh,30);
			cout<<"\nNhap bac luong: ";
			cin>>this->bl;
		}
		void xuat()
		{
			cout<<"Ho ten: "<<ht<<endl;
			cout<<"Tuoi: "<<t<<endl;
			cout<<"Bang cap: "<<bc<<endl;
			cout<<"Chuyen nganh: "<<this->chuyennganh<<endl;
			cout<<"Bac luong: "<<this->bl<<endl;
			cout<<"Luong CB: "<<this->tinhlcb()<<endl<<endl;
		}
		float tinhlcb()
		{
			return this->bl*610;
		}
 } ;
 void nhapDS(GV a[], int &n)
 {
 	cout<<"\nNhap danh sach: "<<n<<" GV "<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cout<<"thu: "<<i+1;
 		a[i].nhap();
	 }
 }
 void xuatDS(GV a[], int &n)
 {
 	cout<<"\nDanh sach: "<<n<<" GV "<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cout<<"thu: "<<i+1;
 		a[i].xuat();
	 }
 }
 void ds2000(GV a[], int &n)
 {
 	cout<<"\nDanh sach GV tien luong <2000: "<<endl;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i].tinhlcb()<2000) 
 		{
 		  a[i].xuat();
 	    }
 		
	 }
 }
int main()
 {
 	int n;
 	cin>>n;
 	GV a[n];
	nhapDS(a,n);
	xuatDS(a,n);
 	ds2000(a,n);
 	return 0; 
 }
