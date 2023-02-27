#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define num_thread 10


void *runner(void *data); 
int main(int argc, char *argv[])
{
    pthread_t tid[num_thread];
    pthread_attr_t attr; 
   
    pthread_attr_init(&attr);
    
    for(int i=0; i<num_thread;i++)
        pthread_create(&tid[i], &attr, runner,(void*)&i);
    
    for(int i=0; i<num_thread;i++)
        pthread_join(tid[i],NULL);
}
   

void *runner(void* data)
{
    printf("Hello This is Thread No %d\n", *((int*)data));
    pthread_exit(0);
}
