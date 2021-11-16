/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <pthread.h>

#define PHRASE1 "Souvent, pour s’amuser, les hommes d’équipage"
#define PHRASE2 "Prennent des goélands, vastes oiseaux des mers,"
#define PHRASE3 "Qui suivent, indolents compagnons de voyage,"
#define PHRASE4 "Le navire glissant sur les gouffres amers."

void *aff_t(void *mess){

    char *s=(char*) mess;
    printf("%s \n",s);

    return NULL;

}

void main2(void)
{
pthread_t T1,T2,T3,T4;

 pthread_create(&T1,NULL,aff_t,PHRASE1,NULL);
 pthread_join( T1, NULL);
 pthread_create(&T2,NULL,aff_t,PHRASE2,NULL);

 pthread_join( T2, NULL);
 pthread_create(&T3,NULL,aff_t,PHRASE3,NULL);
pthread_join( T3, NULL);
 pthread_create(&T4,NULL,aff_t,PHRASE4,NULL);
pthread_join( T4, NULL);


