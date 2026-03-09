#include "nightclub.h"
#include <stdio.h> 

int main(void){
  int age = getAge();
  if (isAgeTooLow(age)== 1){
    printf("Vous n'avez pas le bon age, vous ne pouvez pas entrer.\n");
    printf("Appuyez sur Entree pour quitter...\n");
    getchar();
    getchar(); // attend que l'utilisateur appuie sur Entrée
    return 0; /* Fin du programme*/
  }
  char vip = getVip();
  int hour;
  int minutes;

  getTime(&hour, &minutes);

  int time = isTimeValid(hour, minutes, vip);
  while (time == 0){
    getTime(&hour, &minutes);
    time = isTimeValid(hour, minutes, vip);
  }
  canUserEnter(age, hour, minutes, vip);
  printf("Appuyez sur Entree pour quitter...\n");
  getchar();
  getchar(); // attend que l'utilisateur appuie sur Entrée
  return 0; /* Fin du programme*/
}