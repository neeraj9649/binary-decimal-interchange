#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int btd(int);
	int dtb(int);
	int ch,n,dn,sum,q,r,i=1,num;
	cout <<"which you want to change\npress 1 for binary to decimal \npress 2 for decimal to binary"<<endl;
	cin >>ch;
	if(ch==1)
	{
		cout <<"\nenter the binary number : "<<endl;
		cin >>n;
		while(n)
		{
			r=n%10;
			sum+=r*i;
			n=n/10;
			i=i*2;
		}
		cout <<"\nthe decimal number is"<<sum;
	}
	else
	{
		cout <<"\nenter the decimal number : "<<endl;
		cin >>n;
		while(n)
		{
			q=n/2;
			r=n%2;
			n=q;
			num=num*10+r;
		}
		while(num)
		{
			r=num%10;
			dn=dn*10+r;
			num=num/10;
		}
		
		cout <<"\nthe binary number is"<<dn;
	}
	return 0;
}
