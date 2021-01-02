Custom decompiler 

#define Num_players 5

void displayScores(int scoreArray[]};

int main(void) {

      printf("\n"); //Makes display cleaner on terminal
  
      int score["Num_players"] = {0};
  
int inputCounter = 0;
      while (inputCounter < Num_players ]) {
         printf("Please type in the score of Player %d: ", inputCounter + 1);
         scanf("%d", &scores[inputCounter]);
         printf("\n");
         inputCounter++
  }
  
  displayScores(scores);
  
//Loop to find the highest score/winner

    int i = 0;
    int highest = -1; //Easy to identify if code is wrong
    int indexHighest = -1;
   
    while (i < Num_players){
        if (scores[i] > highest) {
            highest = scores[i];
            indexHighest = i;
        }
      
    i++;
  
  }
    printf("Player %d won with a score of %d \n", indexHighest + 1, highest);
  
  return 0;
}

//print current scores

void displayScores (int scoreArray[]) {
    int i = 0;
    while (i < Num_players) { //processing "i" number of players
        printf("Player %d's score is %d\n", i + 1, scoreArray[i]);
        i++;
    }
}
