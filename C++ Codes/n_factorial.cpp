#include <iostream>
#include <vector>
using namespace std;

int multiply(int n);
vector<int> v1;

int main()
{
	int i,n,size;
	cin>>n;
	v1.push_back(1);
	for(i=2; i<=n; i++)
	{
		size = multiply(i);
		v1.resize(size);
	}
	i=0;
	while(v1[i] == 0)
	{
		++i;
	}
	cout<<"\nTrailing zeroes = "<<i;
	
	return 0;
}
int multiply(int n)
{
	int i, product, carry=0;
	for(i=0; i<v1.size(); i++)
	{
		product = v1[i]*n + carry;
		v1[i] = product%10;
		carry = product/10;
	}
	while(carry>0)
	{
		v1.push_back(carry%10);
		carry = carry/10;
	}
	return v1.size();
}
