#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main ()
{
	//declaring variable
	int now=0;																
	int counter=0;
	string A ;
	int count=0;
	
	//To input the string
	
	cout<<"Enter the string: ";
    getline(cin, A);
  
	// \0 means end of string
	//the loop will continue till the end of string
	//the counter variable will also count the number of character
	
	while(A [counter]!='\0')
	{
		
		if (A[counter] ==' ')						//if there is any space in the string condition becomes true
		{
			now++;									//the number of space will be counted
			
		}
		count++;								
		counter++;									//count number of characters
		
	}
	cout<<"Number of Characters "<<counter<<endl;
	cout<<"no of words "<<now+1<<endl;
	
}