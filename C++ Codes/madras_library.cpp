#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int binaryToDecimal(int n);
int main(){
   fstream newfile;
   char name[25];
   cout <<"Enter file name with extension = \n";
   scanf("%s", name);
   newfile.open(name,ios::in); 
   string st1 = "";
   string decode = "";
   if (newfile.is_open()){   
      string tp;
      while(getline(newfile, tp))
	  { 
          for(int i=0;i<tp.length();i++)
          {
          	if(tp[i] == '*')
          	{
          		st1+='1';
			  }
			else
			{
				st1+='0';
			}
		  }
		stringstream ob(st1); 
    	int x = 0; 
    	ob >> x; 
		int b = binaryToDecimal(x);
		decode = decode + (char)b;
		st1 ="";  
         
      }
      cout << "Decoded Text =  " << decode;
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
