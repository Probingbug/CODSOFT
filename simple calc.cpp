#include <iostream>
#include <conio.h>
#include<stdio.h>
#include<cstdlib>
#include <stdlib.h>
using namespace std;

int main() 
{ 
	long double x,y; 
	char ch,ar; 
	do 
       { 
	 
	cout<<"	*WELCOME TO NANU'S CALCULATOR* \n"; 
	cout<<" This is a Calculator containing the following functions Addition Subtraction  Multiplication  Division \n"; 
	cout<<" Type [+] for Addition [-] for Subtraction [*] for Multiplication [/] for Division\n"; 
	cout<<" Enter Function To use =  "; 
	cin>>ch; 
	cout<<(char)7; 
	cout<<endl; 
	//For Addition 
       if(ch=='+') 
		{ 
		 
		cout<<" You are using Addition \n"; 
		cout<<" Enter First Number= "; 
		cin>>x; 
  		cout<<"Enter Second Number= "; 
		cin>>y; 
  		cout<<" Your answer is "; 
		cout<<x+y; 
		cout<<(char)7; 
		} 
	// For Subtraction 
	 if(ch=='-') 
		{ 
		cout<<" You are using Subtraction \n"; 
		cout<<" Enter First Number= "; 
		cin>>x; 
		cout<<"Enter Second Number= "; 
		cin>>y; 
		cout<<" Your answer is "; 
		cout<<x-y; 
		cout<<(char)7; 
		} 
	// For Multiplication 
	 if(ch=='*') 
		{ 
		 
		cout<<" You are using Multiplication \n"; 
		cout<<" Enter First Number= "; 
		cin>>x; 
		cout<<" Enter Second Number= "; 
		cin>>y; 
		cout<<" Your answer is "; 
		cout<<x*y; 
		cout<<(char)7; 
		} 
	// For Division 
	 if(ch=='/') 
		{ 
		 
		cout<<" You are using Division \n"; 
		cout<<" Enter First Number= "; 
		cin>>x; 
		cout<<" Enter Second Number= "; 
		cin>>y; 
		cout<<" Your answer is "; 
		cout<<x/y; 
		cout<<(char)7; 
		} 
	

		cout<<endl; 
		cout<<"Do you want to continue..Y/N?\n"; 
		cin>>ar; 
  		} 
		while(ar=='Y'|| ar=='y'); 
		if(ar=='N' || ar=='n') 
		{ 
			cout<<" Thankyou for using this Calculator.Good Bye. \n"; 
			cout<<" Press any key to exit…….\n"; 
		} 
  		getch(); 
		cout<<(char)7; 
  }