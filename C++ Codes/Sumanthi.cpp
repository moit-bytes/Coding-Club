#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int occurance(char ch, string s);
void word_generator(string s1, string s2, string s3);
int main()
{
   fstream newfile;
   char name[25];
   int i;
   cout <<"Enter file name with extension = \n";
   scanf("%s", name);
   newfile.open(name,ios::in); 
   if (newfile.is_open()){   
      string tp;
      while(getline(newfile, tp))
	  { 
	  	  string st1 = "";
	  	  string st2 = "";
	  	  int len = tp.length();
          for(i=0; i<len; i++)
          {
          	char c = tp[i];
          	int flag = 1;
          	int i = st1.length();
          	while(i>=0)
          	{
          		if(st1[i--] == c)
          		{
          			flag = 0;
				}
			}
			if(flag == 1)
			{
				int num = occurance(c,tp);
				ostringstream str1; 
				str1 << num; 
				string str = str1.str();
				st1 = st1 + c;
				st2 = st2 + str;				
			}
          	
		  }
		if((len%2)==0)
		  {
		  	int flag = 1;
		  	int j;
		  	for(j=0; j<st2.length(); j++)
		  	{
		  	    int x = (int)(st2[j]) - 48;
		  	    if((x%2)!=0)
		  	    {
		  	    	flag = 0;
				}
			}
			if(flag == 1)
			{
				//printf("Pallindrome");
				word_generator(st1, st2, "even");
			}
			else
			{
				printf("No Solution\n");
			}
		}
		else
		{
			int count = 0;
		  	int j;
		  	for(j=0; j<st2.length(); j++)
		  	{
		  	    int x = (int)(st2[j]) - 48;
		  	    if((x%2)!=0)
		  	    {
		  	    	count++;
				}
			}
			if(count >= 1)
			{
				//printf("Pallindrome");
				word_generator(st1, st2, "odd");
				
			}
			else
			{
				printf("No Solution\n");
			}
		}
	}
  }
  return 0;
}
int occurance(char ch, string s)
{
	int i = s.length();
	int c1 = 0;
	while(i>=0)
	{
		if(s[i--] == ch)
		{
			c1++;
		}
	}
	return c1;
}
void word_generator(string s1, string s2, string s3)
{
	int i, j ,k;
	string word = "";
	int len = s2.length();
	int arr[len];
	for(i=0;i<len;i++)
	{
	   int x = (int)(s2[i]) - 48;
	   if((x%2)!=0)
	   {
	   	  char temp1 = s2[len-1];
	   	  char temp2 = s1[len-1];
	   	  s2[len-1] = s2[i];
	   	  s1[len-1] = s1[i];
	   	  s2[i] = temp1;
	   	  s1[i] = temp2;	   	  
	   }
	}
	for(j=0; j<len; j++)
	{
		int num = (int)(s2[j]) - 48;
		if((num%2) == 0)
		{
			num = num/2;
		}
		arr[j] = num;
	}
	for(k=0;k<len;k++)
	{
		for(j=0;j<arr[k];j++)
		{
			printf("%c",s1[k]);
		}
	}
	if(s3 == "odd")
	{
		len = len - 1;
	}
	for(k=len-1;k>=0;k--)
	{
		for(j=0;j<arr[k];j++)
		{
			printf("%c",s1[k]);
		}
	}
	printf("\n");
	
	
	
}

				 

