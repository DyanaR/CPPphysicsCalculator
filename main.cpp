#include "functions.h"

int main() {
  char input;
  char input2;

  do{
    welcomeMessage();
    showMenu();
        cout << "\nPlease ";
        input = validateChar(input); 
        input = toupper(input);

    handleChoice(input, input2);

    }while(input != 'e' && input != 'E'); //DeMorgan's Law!!! 
  cout << "\nGoodbye. Hasta luego." << endl;
  return 0;
}

