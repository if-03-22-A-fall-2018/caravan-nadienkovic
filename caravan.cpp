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

struct _node{
  void* data;
  Node* next;
};
struct CaravanImplementation{
   Node* _head;
};
Caravan new_caravan()
{
  return (Caravan)malloc(sizeof(struct CaravanImplementation));
}

int get_length(Caravan caravan)
{
  return 0;
}

void delete_caravan(Caravan caravan)
{
  free(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
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
