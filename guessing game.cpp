 /* HIGH/LOW GAME */
#include <iostream>
#include <conio.h>
#include<stdio.h>
#include<cstdlib>
#include <stdlib.h>
using namespace std;


const int totchan=7;
int main(){
 int number;        
 int guess;         //the user’s guess
 int chances=0,score=0,chanscor;        //chanscor stores score for 1 success
 char ans;
 do{
//  { clrscr();
   chances=score=0;
   cout << "Welcome to the High/Low game.\n";
   cout<<"I will pick a random number from 0 to 100.\n";
   cout<<"You must try to guess the number.\n";
   
   number=(int)(rand()%100);
   chanscor=100/totchan;        //score for each successful chance 
   do
  {
     cout<<"What is your guess? (0 to 100) :";
     cin>>guess;
     if((guess<0)||(guess>100))
     { 
	cout<<"Sorry, but your guess "<<guess<< " must be from 0 to 100.\n"; 
     } 
     else if(guess < number) 
     { 
	cout<<guess<<" is low.Try a higher number.\n"; 
     } 
     else if(guess > number) 
     { 
	cout<<guess<<" is high.Try a lower number.\n"; 
     } 
     else		//if correct number is guessed 
     {			//number is correct, and the “do” loop will end below 
	cout<<guess<<" is correct. Congratulations!"; 
	score=chanscor*(totchan-chances);   //score calculated for number of 
	cout<<" Your score is "<<score<<endl; 
        break; 
     } 
     chances++; 
     if(guess!=number) 
	 cout<<" Now you have "<<totchan-chances<<" chances left.\n"<<endl; 
     if(chances==totchan) 
	 { cout<<" Only "<<totchan<<" chances are allowed.Better luck next time"; 
	   cout<<" The actual number was "<<number<<endl; 
	   break; 
	 } 
     }while (guess!=number); 
     cout<<" Thank you for playing High/Low!"; 
     cout<<" Want to play it again? (y/n)…"; 
     cin>>ans; 
   }while(ans=='y' || ans=='Y'); 
 }