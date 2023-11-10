#include <stdio.h>
#include <string.h>

int my_strlen(char*);

int main(void)
{
    printf("Size of the array storing \"hello\" in data memory - %zu\n",
           sizeof "hello");

    // printf("Number of characters in \"hello\" - %zu\n", strlen("hello"));
    printf("Number of characters in \"hello\" - %d\n", my_strlen("hello"));

    return 0;
}

int my_strlen(char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        ++i;
    }

    return i;
}


// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     printf("Size of the array storing \"hello\" in data memory - %zu\n",
//            sizeof "hello");

//     printf("Number of characters in \"hello\" - %zu\n", strlen("hello"));
//     //strlen means except null character

//     return 0;
// }

// #include <stdio.h>
// int main (void)
// {
//     printf("%zu\n", sizeof "hello");// every element is of one byte including 
//     // null character (\o);

//     return 0;
// }

/*

 * 1, 7, 0, -2, etc. are integer literals.
   1.0, 0.5, -4.7, etc. are double literals.
   'a', '.', etc. are character literals.

   Similarly, "hello", "hi there", etc. are string literals.

 * Integer, double, character, etc. literals aren't stored in memory.
   For eg., int x = 10;
   Here, 4 bytes are reserved in the stack memory for the variable called x, and
   10 is stored inside the variable.
   However, 10 isn't stored separately anywhere else.

 * String literals are stored in memory.
   For eg., char arr[] = "hello";
   Here, 6 bytes are reserved in the stack memory for the array called arr, and
   its contents are 'h', 'e', 'l', 'l', 'o' and '\0'.
   However, the string literal "hello" is stored separately in the data memory
   as well.

 * The data type of "hello" is char[6].
 * In printf("%zu\n", sizeof "hello");, "hello" isn't converted to a pointer
   because sizeof is an exception.

 * So, in C, a string is a special case of a char array, i.e. a string is a char
   array with a null character ('\0') at the end.

 * char arr[] = "abcd"; is similar to char arr[] = {'a', 'b', 'c', 'd', '\0'};.
   However, there is one difference.
   In char arr[] = "abcd";, the contents of arr (stack memory) are 'a', 'b',
   'c', 'd' and '\0', and the data memory also contains another array whose
   contents are 'a', 'b', 'c', 'd' and '\0'.
   But, in char arr[] = {'a', 'b', 'c', 'd', '\0'};, only the contents of arr
   (stack memory) are 'a', 'b', 'c', 'd' and '\0', and there is no extra copy in
   the data memory.

 */

