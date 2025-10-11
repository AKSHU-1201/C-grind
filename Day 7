// STRINGS

What Are Strings in C: 
They are 1-D character array terminated by a null character('\0') and stored in contigous memory location.

How to Create Strings:
[ char st[] = {'a','b','c''\0'} ] or [ char st = "abc" ]  both are fine and to print them using for loop:
for (int i = 0; i<3  ; i++) printf("%c" , st[i]);

How to print a string without a for loop:
printf("%s" , st);
____________________________________________________________________________________________________________________________________________________________________________________________

// GETS AND PUTS  (Also due to buffer overflow problems fgets is better than gets)

char st[40];
gets(st); --> It takes a st as a input from the user and NOTE: can't use scanf() here cuz it cannot take multiple words as input..
puts(st); --> It prints the string st and place the cursor in the next line automatically..

____________________________________________________________________________________________________________________________________________________________________________________________
// Standard Library Functions (#include <string.h>)

1) strlen(source): returns the number of character in source string excluding the null character..
    char st[] = "AKSHAY";
    printf("%d" , strlen(st)); ---> 6

2) strcpy(target, source): Copies the Source string into the target array..
    char source[] = "hello";
    char target[100];
    strcpy(target , source);

3) strcat(s1 , s2): It concatenates 2 strings (s1 & s2) and s1 becomes the concatenated string..
    char s1[] = "hello";
    char s2[] = "akshay";
    strcat(s1 , s2); --> s1 now is helloakshay... 
4) strcmp(s1 , s2): It just compares 2 strings (s1 & s2)
      Now if both strings are equal then it return 0 else return the difference of ASCII values of first mismatching characters..
      printf("%d" , strcmp("hello" , "Hello")); (as h > H. so it return a positive value)






