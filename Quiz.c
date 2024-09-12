#include <stdio.h>
#include <ctype.h>

int main () {

    char questions [] [1000] = {"1.What is Iron Man's real name?\n",
    "2.What is the name of the artificial intelligence that assists Tony Stark in the Iron Man suit?\n ",
    "3.What powers Tony Starks Iron Man suit?\n",
    "4. Which company did Tony Stark inherit from his father?\n",
    "5. Which element does Tony Stark synthesize to replace the palladium in his arc reactor in Iron Man 2?\n",
    "6. What is the name of Tony Stark's daughter?\n",
    "7. What is the name of Tony Stark's mother?\n",
    "8. In Iron Man 3, what is the name of the project Tony Stark is working on to remotely control his Iron Man suits?\n" };

    char options [] [1000]={
        "A.Steve Rogers", "B.Tony Stark", "C.Bruce Banner", "D.Clint Barton",
        "A. Jarvis", "B. Friday", "C.Ultron", "D. Vision",
        "A.Vibranium", "B.Arc Reactor", "C. Infinity Stone", "D.Solar Energy",
        "A. Stark Industries", "B.Oscorp", "C.Hammer Tech", "D.AIM",
        "A.Adamantium", "B.Vibranium", "C.An unknown new element", "D. Titanium",
        "A. Margaret Stark", "B.Pepper Stark", "C.Morgan Stark", "D. Virginia Stark",
        "A.Maria Stark", "B.Sarah Stark", "C.Virginia Stark", "D.Janet Stark",
        "A.Project Extremis", "B. Project Arc Reactor", "C.Project Iron Legion", "D.Project Clean Slate"
        

    }; 

    char answers [] = {'B', 'A', 'B', 'A', 'C', 'C', 'A', 'C'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess = " ";
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("**********************\n");
        printf("%s\n", questions[i]);
        printf("********************\n");


        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &guess);
        scanf("%*c"); // clear \n from input buffer

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("******************\n");
    printf("Your score is: %d\n", score);
    printf("******************\n");

    return 0;


    }


















