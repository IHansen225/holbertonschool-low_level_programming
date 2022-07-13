#include "lists.h"

/**
 * @brief 
 * 
 */

size_t print_list(const list_t *h)
{
   const list_t *p = h;
   int i = 0;

   for (; p != NULL; p = p->next)
   {
    if (p->str != NULL)
    {
        printf("[%u] %s", p->len, p->str);
    }
    else
    {
        printf("[0] (nil)");
    }
    i++;
    putchar('\n');
   }

   return (i); 
}