#include <stdio.h>
#include "nightclub.h"

int getAge(void){ /* Je récupère l'age de l'utilisateur */
  int age;
  printf("What's your age ? : \n");
  scanf(" %d", &age);
  return age;
}

int isAgeTooLow(int age){ /** Je regarde si l'age de l'utilisateur est trop bas */
  if (age < 18){
    return 1; /* Trop jeune */
  }
  return 0; /* Âge correct*/
}

char getVip(void){ /* Je demande à l'utilisateur si c'est un vip et stocke l'information*/
  char vip;
  while (vip !='y' && vip != 'n'){
    printf("Are you a vip ? y/n: \n"); 
    scanf(" %c", &vip);
  }
  return vip; 
}

void getTime(int *hour, int *minutes){  /* Je récupère l'heure en demandant à l'utilisateur l'heure qu'il est*/
  printf("What hour is it ? : \n");
  scanf(" %d", hour);
  printf("What minutes is it ? : \n");
  scanf(" %d", minutes);
}

int isTimeValid(int hour, int minutes, char vip){ /* Je vérifie si l'heure rentrer est valide*/
  if (hour < 0 || hour > 23) {
    return 0; /** Heure non valide */
    } 
  if (minutes < 0 || minutes > 59){ 
    return 0; /** Heure non valide */
  }
  return 1; /** Heure valide */
 }




int canUserEnter(int age, int hour, int minutes, char vip){ /* Je vérifie si l'utilisateur peut rentrer*/
  if (age < 18){
    printf("Vous ne pouvez pas rentrer\n");
    return 0;
  }
  if (hour < 0 ||hour > 23 || minutes<0 || minutes>59 ){
      printf("Heures ou minutes invalides\n");
      return 0;
  }
  if (vip == 'y'){
      if (hour > 2 && hour < 20){
      printf("Vous ne pouvez pas rentrer maintenant\n");
      return 0;
    }
  }
  else{
    if (hour > 1 && hour < 21){
      printf("Vous ne pouvez pas rentrer maintenant\n");
      return 0;
    }
  }
  printf("Vous pouvez rentrer\n");
  return 1;

}

