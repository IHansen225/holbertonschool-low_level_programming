#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * 
 * Returns: nothing
 */
void rev_string(char *s)
{
    int len = _strlen(s);
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}
