// Function to print combinations 
void printCombinations(int score) {

  int td = score/6; 
  int remaining = score % 6;

  for(int i=0; i<=td; i++) {
    int td_score = i * 6;

    for(int j=0; j<=remaining; j+=3) {
      int fg = j/3;
      int fg_score = fg * 3;

      int safety = (remaining - fg_score)/2;

      printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", 
             i, td-i, td_score/6, fg, safety); 
    }
  }
}

int main() {

  int score;

  printf("Enter 0 or 1 to STOP\n");
  
  // Take input until 0 or 1
  do {
    printf("Enter the NFL score: ");
    scanf("%d", &score);

    if(score > 1) {
      printCombinations(score); 
    }

  } while(score > 1);

  return 0;
}