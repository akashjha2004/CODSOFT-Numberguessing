#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//rand();
//int random = offset + (rand()% range);
int main(){
   
    cout<<"welcome to Guess then number game!"<<endl;
    cout<<"you have to guess a number between 1 to 100."<<endl;
    while(true){
              

         srand(time(0));
         int secretNumber =  1 + (rand()% 100);
         int playerChoice;

            cout<<"enter the number";
            cout<<"  you have 10 choices for finding the secret number between 1 to 100.";
            int choicesLeft = 10;

            for(int i =1; i<=10; i++){
                cout<<"\n\n Enter the number: ";
                cin>>playerChoice;
                if(playerChoice == secretNumber){
                    cout<<"well played! you won "<<playerChoice<<"  is the secret number"<<endl;
                    cout<<"play the game again with us!\n\n"<<endl;
                 break;
                }
                else{
                    cout<<"nope ,"<< playerChoice<<"  is not  the right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"the secret number is smaller than tha number you have chosen"<<endl;
                    }
                    else{
                        cout<<"the secret number is greater than tha number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<< choicesLeft <<" choices left. "<<endl;
                    if(choicesLeft == 0){
                        cout<<"you couldn't find the secret number,it was "<<secretNumber<<",you lose!\n\n";
                        cout<<"play the game again to win!!\n\n";
                    }
                }
            }
         }
         return 0;
}