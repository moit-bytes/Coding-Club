#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int binaryToDecimal(int n);
void decimalTobinary(int n);
string bin ="";
int main(){
   fstream newfile;
   char name[25];
   int i;
   cout <<"Enter file name with extension = \n";
   scanf("%s", name);
   newfile.open(name,ios::in); 
   string st2 = "";
   string decode = "";
   if (newfile.is_open()){   
      string tp;
      while(getline(newfile, tp))
	  { 
	  	st2 = tp;
		stringstream ob(st2); 
    	int x = 0; 
    	ob >> x; 
    	decimalTobinary(x);
    	int j = 0;
    	//char binary[32] = bin;
		for(i=0; i<4; i++)
		{
			int c = 0;
			string st1 = "";
			while(c!=8)
			{
				st1+= bin[j];
				c++;
				j++;
			}
			stringstream ob2(st1);
			int y = 0;
			ob2>>y;
			int b = binaryToDecimal(y);
			decode+= (char)b;			
		}
		
		bin = ""; 	
    	         
      }
      cout<<"Decoded text = "<<decode;
      
      newfile.close(); 
   }
}
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec = 0; 
    int base = 1;  
    int temp = num; 
    
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10;   
        dec += last_digit * base;   
        base = base * 2; 
    } 
  
    return dec; 
} 
void decimalTobinary(int n)
{
	int i;
	for (i = 31; i >= 0; i--) 
	{ 
        int k = n >> i; 
        if (k & 1) 
            bin+="1";
        else
            bin+="0";
	}

}
