/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>


double val=0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void Inc(){
    pthread_mutex_lock( &mutex );
   val=val+1;
   pthread_mutex_unlock( &mutex );
}

void Dec(){
    pthread_mutex_lock( &mutex );
   val=val-1;
   pthread_mutex_unlock( &mutex );
}
void tache(){


    for(int i=0;i<1000;i++){
        Inc(val);

    }

    return NULL;
}

void tache2(){

    for(int i=0;i<1000;i++){
        Dec(val);

    }
    return NULL;

}
void main(void){

val=0;

pthread_t T1,T2;

 pthread_create(&T1,NULL,tache,NULL);

 pthread_create(&T2,NULL,tache2,NULL);


 pthread_join(T1,NULL);

 pthread_join(T2,NULL);
 printf("%d\n",val);

return 0;

}
