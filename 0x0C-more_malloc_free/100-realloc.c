#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously alloc
 *ated memory
 * @old_size: size (bytes) of the allocat
 *ed memory for ptr
 * @new_size: new size of the new memory
 *block
 *
 * Return: pointer to the new memory block
 */

void* _realloc(void* ptr, unsigned int old_size, unsigned int new_size)
{
  char *new_ptr;
  unsigned int cp_size;
  

  if (new_size == 0)
    {
      free(ptr);
      return (NULL);
    }

  if (ptr == NULL)
    {
      return (malloc(new_size));
    }

  if (new_size == old_size)
    {
      return (ptr);
    }

  new_ptr = malloc(new_size);
  if (new_ptr == NULL)
    {
      return (NULL);
    }

  cp_size = (old_size < new_size) ? old_size : new_size;
  memcpy(new_ptr, ptr, cp_size);

  free(ptr);

  return (new_ptr);
}
