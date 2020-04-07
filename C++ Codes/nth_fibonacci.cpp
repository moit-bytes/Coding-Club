#include<iostream>
#include<vector>
#include<string>
using namespace std;
string intToString(int s);
string add(string s1, string s2);
string fibonacci(int n);

int main()
{
	int n;
	cin>>n;
	string fib = fibonacci(n);
	int len= fib.length();
	int sum = 0;
	int i = 1;
	while(i<=9)
	{
		sum = sum + (fib[--len] - 48);
		++i;
	}
	cout<<"\nSum = "<<sum;
	return 0;
}

string intToString(int s)
{
 string conv_str = "";
 while (s > 0)
 {
 	char v = s % 10 + 48;
 	conv_str = v + conv_str;
 	s = (s - (s % 10)) / 10;
 }
 return conv_str;
}

string add(string s1, string s2)
{
	int i,j,k;
	vector<char> v1;
	
	for(j=0;j<s2.length();j++)
	{
		v1.push_back(s2[j] - 48);
	}
	int diff = s2.length() - s1.length();
	for(k=0;k<s1.length();k++)	
	{
		v1[k+diff] = v1[k+diff] + (s1[k] - 48);
	}
	for(j=v1.size()-1; j>0; j--)
	{
		v1[j-1] += (v1[j] - (v1[j]%10))/10;
		v1[j] = v1[j]%10;
	}
	string value = intToString(v1[0]);
	for(j=1;j<v1.size();j++)
	{
		value += v1[j] + 48;
	}
	return value;	
}
string fibonacci(int n)
{
	int i;
	string s1="0";
	string s2="1";
	string s3;
	for(i=2;i<=n;i++)
	{
		s3 = add(s1,s2);
		s1 = s2;
		s2 = s3;
	}
	return s3;
}

