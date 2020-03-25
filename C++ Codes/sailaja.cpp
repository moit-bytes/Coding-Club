#include <iostream>
using namespace std;
void precision(long long int x,long long int y,long long int p);
int main()
{
    precision(1789,1917,45);// Sample Case 1
	precision(1789,1917,100);// Sample Case 2
	precision(9573215120,9382616286,300);// Sample Case 3
    return 0;
}
void precision(long long int x,long long int y,long long int p)
{
	if(x<y){
        printf("%d",0);
    }
    long long int n1 = x;
    while(n1>y){
        long long int n = x/y;
        n1 = x - (n*y);
        printf("%d",n);
    }
    printf(".");
    long long int k = 0;
    while(k<p){
        int i = 0;
        while(n1<y){
            n1 = n1 * 10;
            if(i>0){
                printf("%d",0);
                k+=1;
        	}
            i+=1;
        }
        long long int n2 = n1/y;
        printf("%d",n2);
        n1 = n1 - (n2*y);
        k+=1;
    }
    printf("\n\n\n\n ");
}
		
