/* Printing different patterns  */

#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	for(int i=6;i>0;i--)
	{	
		cout<<setfill(' ')<<setw(i);
		cout<<"*";
		cout<<setfill('*')<<setw(7-i);
		cout<<" "<<endl;
	}

	return 0;
}
