#include <stdio.h>
#include <math.h>
#include <conio.h>  
#include <stdlib.h> 
#include <stdbool.h>
#include <time.h>

int main() {
   // Write C code here
    printf("Welcome to Hangman Game!\n");
    
    int n;
    printf("Enter the length of the word: ");
    scanf("%d",&n);
    getchar();

    char originalWord[n + 1];
    char wordsWithMissingCharacters[n + 1];

    printf("Enter the original word which you want the players to guess: ");
    fgets(originalWord, n + 1, stdin);
    getchar();
    
    // printf("The original word is: %s\n", originalWord);
    
    printf("Enter the word with missing characters: ");
    fgets(wordsWithMissingCharacters, n + 1, stdin);
    getchar();
    
    int totalCharactersToGuess = 0;
    for(int i=0;i<n;i++){
        if(wordsWithMissingCharacters[i] == ' '){
            totalCharactersToGuess++;
        }
    }

    // printf("The word with missing characters is: %s\n", wordsWithMissingCharacters);
    
    int totalChances = 3;

    while(totalChances > 0 && totalCharactersToGuess > 0){
        char guessCharacter;
        printf("Guess a character: ");
        scanf("%c",&guessCharacter);
        getchar();
        
        bool isGuessCorrect = false;
        
        for(int i=0;i<n;i++){
            if(wordsWithMissingCharacters[i] == ' ' && originalWord[i] == guessCharacter){
                isGuessCorrect = true;
                wordsWithMissingCharacters[i] = guessCharacter;
                totalCharactersToGuess--;
            }
        }
        
        if(isGuessCorrect == true){
            printf("Correct Guess! Now the word is: %s\n",wordsWithMissingCharacters);
        }else{
            totalChances--;
            printf("Wrong Guess! Still the word is: %s\n",wordsWithMissingCharacters);
            printf("You have %d chances remaining\n",totalChances);
        }
    }
    
    if(totalCharactersToGuess == 0){
        printf("Congratulation! you successfully guessed: %s\n",originalWord);
    }else{
        printf("Oh oh! you lost!\n");
        printf("The word was %s\n",originalWord);
    }

return 0;
}
