// refercevarible
#include <iostream>
using namespace std;
int main()
{
	int x=10;
	int &y=x;
	int &z=y;
	x++;
	y++;
	z++;
	cout<<x<<" "<<y<<" "<<z;


	
	return 0;
}