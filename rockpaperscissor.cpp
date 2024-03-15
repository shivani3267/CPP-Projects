#include<iostream>
#include<ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char);
void choosewinner(char,char);


int main()
{
    std::cout<<"**********************************************************************************************\n\n";
    std::cout<<"________________________ ROCK  PAPER  AND  SCISSORS  GAME________________________________\n\n";
    char player;
    char computer;
    player =getuserchoice();
    std::cout<<"Your choice: ";
    showchoice(player);

    computer=getcomputerchoice();
    std::cout<<"Computer choice: ";
    showchoice(computer);

    choosewinner(player,computer);
    std::cout<<"**************************************************************************************************";

    return 0;
}

char getuserchoice()
{
    char player;
   do
   {
     std::cout<<"Choose any one of the following:-\n";
     std::cout<<"r for rock\n";
     std::cout<<"p for paper\n";
     std::cout<<"s for scissors\n";
     std::cin>>player;
   } while(player!='r'&& player!='s'&& player!='p');
   return player;

}
char getcomputerchoice()
{
    srand(time(NULL));
    int num=rand()%3+1;
    switch(num)
    {
        case 1 : return 'r';
        case 2 : return'p';
        case 3 : return 's';
    }
    return 0;
}
void showchoice(char choice)
{
    switch(choice){
        case 'r': std::cout<<"Rock\n";
        break;
        case 'p': std::cout<<"Paper\n";
        break;
        case 's': std::cout<<"Scissors\n";
        break;
    }
}
void choosewinner(char player,char computer)
{
    switch(player)
    {
        case 'r': if(computer=='r')
                    std::cout<<"Its a tie\n";
                else if(computer=='p')
                  std::cout<<"You loose\n";
                else
                   std::cout<<"You win\n";
                break;
        case 'p': if(computer=='r')
                    std::cout<<"You win\n";
                else if(computer=='s')
                  std::cout<<"You loose\n";
                else
                   std::cout<<"Its a tie\n";
                break;
        case 's': if(computer=='r')
                    std::cout<<"You loose\n";
                else if(computer=='p')
                  std::cout<<"You win\n";
                else
                   std::cout<<"Its a tie\n";
                break;        
    }
    return;
}
