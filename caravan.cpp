/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include "general.h"
#include <stdlib.h>

typedef struct _node{
  PackAnimal animal;
  struct _node* next;
}Node;

struct CaravanImplementation{
   Node* _head;
   int length;
};

Caravan new_caravan()
{
  Caravan caravan = (Caravan)malloc(sizeof(struct CaravanImplementation));
  return caravan;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  Node* curr = caravan->_head;

  while(curr != 0){

    Node* to_be_deleted = curr;
    sfree(to_be_deleted);
  }
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if (animal != 0) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->animal = animal;
    if (caravan->_head != 0) {
      newNode->next = caravan->_head;
      caravan->_head->next = newNode;
    }
  }
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  delete_animal(animal);
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{

}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan)
{

}
