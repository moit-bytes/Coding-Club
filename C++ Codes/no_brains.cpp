#include <boost/multiprecision/cpp_int.hpp>
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <iomanip>
#include <string.h>
using boost::multiprecision::cpp_int;
using namespace std;
int main()
{
	cpp_int n = 123456789;
	cpp_int n1 = n;
	int i,j,k,len;
	string str;
	int x = 5;
	for(i=0;i<1000;i++)
	{
	   std::string str = boost::lexical_cast<std::string>(n);
	   len = str.length();
	  
	   for(j=0;j<len;j++)
	   {
	   	 if(j<(len-9) && j==(len-x))
	   	 {
	   	 	
	   	 	if(str[j]=='9' && str[j+1]=='3')
	   	 	{
                if(str[j+8]=='8' && str[j+9] == '6')
                {
                    printf("Indira's Number = ");
                	for(k=0;k<10;k++)
                	{
                		cout<<""<<str[j+k];
					}
                        
				}
                    
			}
	   	
	  }   
	   
	}
	n*=n1;
	x = x+5;
}
	return 0;
}
