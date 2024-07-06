#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{

       
    cout<<"\n\n\t\t\t_ _ _ _ _ _Welcome to Guess the Number Game_ _ _ _ _ _\n\n";
    cout<<"You have choice to choose the Number Between 1 to 100. ";
    cout<<"You Will have limited choice based on the level you Choose. All the Best!! \n\n"<<endl;
     
    
    while(true){
        cout<<"Enter the level ::"<<endl;
        cout<<"1 for Easy level"<<endl;
        cout<<"2 for Medium level"<<endl;
        cout<<"1 for Difficult level"<<endl;
        cout<<"0 for Ending the Game"<<endl;

        //select the level
        int choice;
        cout<<"\nEnter the level = ";
        cin>>choice;

       // generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);

        int playerChoice;
        
        //Easy Level = 1
        if(choice==1){
            cout<<"You have 10 choices for finding the "
                  "seceret Number between 1 to 100 "<<"\n";
            int choiceleft =10;
            for(int i=1;i<=10;i++){

                //Guess the number
                cout<<"\n\nEnter the Number : ";
                cin>>playerChoice;

                //determining if player choice match the condition
                if(playerChoice==secretNumber){
                    cout<<"Congrats !! You Won ,"
                        <<playerChoice 
                        <<" is the secret Number "<<endl;
                    cout<< "\t\t\t Thanks for playing....:-)"
                        << endl;
                    cout<< "Play the game again with "
                           "us!!\n\n"
                        << endl;
                    break;
                }
                 else{
                  cout<<playerChoice
                      <<" is not the right number \n";
                  if(playerChoice>secretNumber){
                        cout<<"the secret number is "
                          "smaller than the number "
                          "you Have choosen"
                          <<endl;
                     }
                     else{
                         cout<<"the secret number is "
                          "Greater than the number "
                          "you Have choosen"
                          <<endl;
                     }
                        choiceleft--;
                              cout<<choiceleft<<" choices left. "<<endl;
                       if(choiceleft==0){
                       cout<<"Couldn't find the secret number it was "<<secretNumber <<" You Loss!! \n\n"<<endl;
                        cout << "Play the game again to win!!!\n\n";
                                
                   }
                }
            }
        }
       
        //Medium Level = 2
         else if(choice==2){
            cout<<"You have 7 choices for finding the "
                  "seceret Number between 1 to 100 "<<"\n";
            int choiceleft =7;
            for(int i=1;i<=7;i++){

                //Guess the number
                cout<<"\n\nEnter the Number : ";
                cin>>playerChoice;

                //determining if player choice match the condition
                if(playerChoice==secretNumber){
                    cout<<"Congrats !! You Won ,"
                        <<playerChoice 
                        <<" is the secret Number "<<endl;
                    cout<< "\t\t\t Thanks for playing....-:)"
                        << endl;
                    cout<< "Play the game again with "
                           "us!!\n\n"
                        << endl;
                    break;
                }
                 else{
                  cout<<playerChoice
                      <<" is not the right number \n";
                  if(playerChoice>secretNumber){
                        cout<<"the secret number is "
                          "smaller than the number "
                          "you Have choosen"
                          <<endl;
                     }
                     else{
                         cout<<"the secret number is "
                          "Greater than the number "
                          "you Have choosen"
                          <<endl;
                     }
                        choiceleft--;
                              cout<<choiceleft<<" choices left. "<<endl;
                       if(choiceleft==0){
                       cout<<"Couldn't find the secret number it was "<<secretNumber <<" You Loss!! \n\n"<<endl;
                        cout << "Play the game again to win!!!\n\n";
                                
                   }
                }
            }
        }
       //Difficult Level = 3
        else if(choice==3){
            cout<<"You have 5 choices for finding the "
                  "seceret Number between 1 to 100 "<<"\n";
            int choiceleft =5;
            for(int i=1;i<=5;i++){

                //Guess the number
                cout<<"\n\nEnter the Number : ";
                cin>>playerChoice;

                //determining if player choice match the condition
                if(playerChoice==secretNumber){
                    cout<<"Congrats !! You Won ,"
                        <<playerChoice 
                        <<" is the secret Number "<<endl;
                    cout<< "\t\t\t Thanks for playing....-:)"
                        << endl;
                    cout<< "Play the game again with "
                           "us!!\n\n"
                        << endl;
                    break;
                }
                 else{
                  cout<<playerChoice
                      <<" is not the right number \n";
                  if(playerChoice>secretNumber){
                        cout<<"the secret number is "
                          "smaller than the number "
                          "you Have choosen"
                          <<endl;
                     }
                     else{
                         cout<<"the secret number is "
                          "Greater than the number "
                          "you Have choosen"
                          <<endl;
                     }
                        choiceleft--;
                              cout<<choiceleft<<" choices left. "<<endl;
                       if(choiceleft==0){
                       cout<<"Couldn't find the secret number it was "<<secretNumber <<" You Loss!! \n\n"<<endl;
                        cout << "Play the game again to win!!!\n\n";
                                
                   }
                }
            }
        }
       
       // To end the game
        else if (choice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
         
    }
    return 0;
}