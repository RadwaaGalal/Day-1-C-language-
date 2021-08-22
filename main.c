//we should include library to can print the result
#include <stdio.h>
//this library help me to see the output
#include <stdlib.h>

//main function where the code will start
int main(){
//to can store data type we should declare this before initial the value


//make a variable (first_number) of data type integar and initial it by 8 and end it by (;) to make compiler know this statement ended
int first_number = 8;

//make a variable (second_number) of data type float and initial it by 3.5 and end it by (;) to make compiler know this statement ended
float second_number = 3.5;

//make a variable (character) of data type char and give it 'A' value and end it by (;) to make compiler know this statement ended
char character = 'A';

//this data type can store in it string...unlike python
char word[] = "Hello ,C Language";

//then print variable (first_number) by using (%d) to make compiler know this data type is integer
printf("%d is an integar number \n" , first_number);

//then print variable (second_number) by using (%f) to make compiler know this data type is float
printf("%f is a number containing decimal point\n" , second_number);

//then print variable (character) by using (%c) to make compiler know this data type is char
printf("%c is a letter \n" , character);

//then using this to print the string value
printf("%s \n" ,word);

//using (system pause) to can compile code and see the screen of output
system("pause");

//then using return 0 to make sure this code ended without any errors
return 0;
}
