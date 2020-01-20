//Program to find out count of positive integers i such that 0<=i<=n and n+i = n^i (EQUAL SUM AND XOR)
#include<iostream>
using namespace std;
int countValues(int n)
{
	//Approach:- Finding out how many unset bits are there and then 2**unset_bits is the count
	//a+b = a^b + a&b....  so a+b = a^b is a&b =0..   so we check unset bits combinations
	int count=0;
	
	while(n)
	{
		if((n&1) == 0)	count++;
		n=n>>1;
	}
	return 1<<count;
}
int main()
{
	int n;
	cin>>n;
	cout<<countValues(n);
	
	return 0;
}
