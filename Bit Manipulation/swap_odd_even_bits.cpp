#include<iostream>
using namespace std;

int swapOddEvenBits(int n)
{
	//Approach:-
	//get the even bits and AND with 1010 to get even bits and then right shift to get them at odd position
	int even_bits = n & 0xAAAAAAAA;
	even_bits>>=1;
	//get the odd bits and AND with 0101 to get odd bits and then left shift to get them at even position
	int odd_bits = n & 0x55555555;
	odd_bits <<=1;
	//Now combine the odd and even bits to get the final result
	return (even_bits | odd_bits);		//we can directly write return (((n&0xAAAAAAAA)>>1) | ((n&0x55555555)<<1));
}
int main()
{
	int n;
	cin>>n;
	cout<<swapOddEvenBits(n);
	return 0;
}
