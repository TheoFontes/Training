/**
 * \file nightclub.h
 * \author Théo Fontes
 * \date 08/03/2026
 * \brief This program will test if the user can enter the nightclub or not.
 * 
 */
/**
 * \brief Check if the user is the right age
 */
int getAge(void);
/**
 * \brief Check if the age of the user is too low or not
 */
int isAgeTooLow(int age);
/**
 * \brief Check if the user is a vip
 */
char getVip(void);
/**
 * \brief Check the time
 */
void getTime(int *hour, int *minutes);
/**
 * \brief Check if the time is valid
 */
int isTimeValid(int hour, int minutes, char vip);
/**
 * \brief Chek if the user can enter the nightclub
 */
int canUserEnter(int age, int hour, int minutes, char vip);