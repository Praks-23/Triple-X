#include "./utilities/main.cpp"
#include "./utilities/message.cpp"
int main()
{
    outputMessage1();
    // Creates a random sequence according to the time of the day
    srand(time(NULL));
    int difficultyLevel = 1;
    int totalLevels;
    cout << "\nHow many levels do you want?\n";
    cin >> totalLevels;
    while (difficultyLevel <= totalLevels)
    {

        bool isLevelComplete = playGame(difficultyLevel);
        cin.clear();  // To clear the errors
        cin.ignore(); // To clear buffers because if the player enters any bad characters then it will still be left in the input buffer even after we clear the error away.

        if (isLevelComplete != false)
        {
            difficultyLevel += 1;
        }
    }
    outputMessage2();
    return 0;
}
