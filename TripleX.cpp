#include<iostream>
#include<ctime>
using namespace std;

void PrintIntro(int LevelDifficulty)
{
    
    cout<<"\n     You are at Level "<<LevelDifficulty;
    cout<<"\nYou need to enter the code to continue....";

}

bool PlayGame(int LevelDifficulty)
{
    PrintIntro(LevelDifficulty);
    const int CodeA=(rand() % LevelDifficulty + LevelDifficulty);
    const int CodeB=(rand() % LevelDifficulty + LevelDifficulty);
    const int CodeC=(rand() % LevelDifficulty + LevelDifficulty);
    const int CodeSum=CodeA+CodeB+CodeC;
    const int CodeProduct=CodeA*CodeB*CodeC;
    cout<<"\n-There are three numbers in the code";
    cout<<"\n-The codes add up to : "<<CodeSum;
    cout<<"\n-The codes when multiplied gives : "<<CodeProduct<<endl;
    
    int GuessA,GuessB,GuessC;
    cout<<"Enter your guess : ";
    cin>>GuessA>>GuessB>>GuessC;
    
    int GuessSum=GuessA+GuessB+GuessC;
    int GuessProduct=GuessA*GuessB*GuessC;

    if((GuessSum==CodeSum) && (GuessProduct==CodeProduct))
    {
        
        cout<<"\nHURRAY!! YOU DID IT !!!!\n";
        return true;
    }
    else 
    {
        cout<<"\n----------------------\nYou Guessed WRONG!!!!\n----------------------\n";
        return false;
    }


}

int main()
{
    cout<<"\n\n\n******************************************************************************\nYou are breaking into the 99th Precinct's Criminal Database Server To get your criminal records\n******************************************************************************\n";
    srand(time(NULL)); // Creates a random sequence according to the time of the day
    int LevelDifficulty = 1;
    const int TotalLevels=5;
    while(LevelDifficulty <= TotalLevels)
    {
        
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // To clear the errors
        cin.ignore(); // To clear buffers because if the player enters any bad characters then it will still be left in the input buffer even after we clear the error away.

        
        if(bLevelComplete!=false)
        {
            ++LevelDifficulty;
            
        }

        
        
    }
    cout<<"\n**********************************************\nHURRAY!! YOU GOT ALL YOUR FILES\n**********************************************\n";
    return 0;
}

