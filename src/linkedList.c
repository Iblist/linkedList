#include "linkedList.h"

/*Creates a new in the linked list.
  int size should be the sizeof a struct.
  If size is <= 0, returns NULL.
  Otherwise returns a pointer to a block
  in memory of int size.
  Expects an int
*/
void * createNode(int size)
{
    void * newNode;

    if (size =< 0)
    {
        newNode = NULL;
    }
    else
    {
        newNode = malloc(size);
    }

    return newElement;
}

/*Adds a new node as the root of a linked
  List.  The old root becomes the second
  Node in the list.
  if the list is empty, newNode becomes the
  root of the list.
  Expects
*/
void * prepend(/*something*/)
{
    return void;
}
