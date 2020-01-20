#include<iostream>
using namespace std;

int nthMagicNumber(int n)
{
	//Approach:-
	//since for a specific value of n we get the binary and for the bits which are set 1 we are adding pow of 5
	//Ex:- if ith bith is set 1 in n then we add 5**i     n = 4 have 3rd bit as 1 so we add 5**3 so result is 125
	int pow=1, nthNum=0;
	while(n)
	{
		pow = pow * 5;
		if(n&1)		nthNum +=pow;
		n>>=1;	
	}
	return nthNum;
}
int main()
{
	int n;
	cin>>n;
	cout<<nthMagicNumber(n);
	return 0;
}
