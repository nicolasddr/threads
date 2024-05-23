#include "queue.h"

/*
  This   file    contains   a    function   definitions    for   queue
  manipulation. You  are free to  choose your own  implementation. You
  may need to define additional functions if you want to implement the
  extra-point functionality.
 */

//Inicializa uma fila
void queue_init(node_t * queue){

  queue->proximo = NULL;
  queue->inicio = NULL;
  queue->fim = NULL;

}

// TODO: returns the first element of the queue
node_t *dequeue(node_t *queue){
	return NULL;
}

// TODO: inserts a node in a queue
void enqueue(node_t *queue, node_t *item){
  if(queue->inicio == NULL){
    queue->inicio = item;
  } else {
    queue->fim->proximo = item;
  }
}

// TODO: checks if a queue is empty
int is_empty(node_t *queue)
{
	return 0;
}



