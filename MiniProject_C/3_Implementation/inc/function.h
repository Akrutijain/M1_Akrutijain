/**
 * @file function.h
 * @maker Akruti jain
 * @data
 * @version 0.1
 * @date 04/03/2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"



       





#endif /* #define _FUNCTION_H__ */


/**
 * @data login withrespective to customer or admin
 */


int enterchoice(void);
/**
 * @data login for admin
 * 
 */
void details(void);
/**
 * @data Displays the movie available to purchase a ticket
 */

int ListofMovies(void);
int movieselect(void);

/**
 * @data admin can change prize of ticket after login with the appropriate login credentials .
 * 
 */
int changepriceticket(int);

/**
 * @data Customer can purchase a ticket 
 */

void show1(int choice,char name[10],int id1,int price);
/**
 * @data Customer can purchase a ticket 
 */
void show2(int choice,char name[10],int id1,int price);
/**
 * @data Customer can purchase a ticket 
 */
void show3(int choice,char name[10],int id1,int price);
/**
 * @data A customer can reserve the ticket
 */
void reserveticket(int *,int,int );

/**
 * @data A customer can cancel the ticket  
 */
void cancelticket(int *); 


#endif /* #define _FUNCTION_H__ */
