#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum days {SUN = 1, MON, TUE, WED, THU, FRI, SAT};

void add_one(int *n);
int function_2(void);

int add_two_ints(int x1, int x2);

typedef struct {
	int x;
	int y;
} point;


void bump_point(point *p);


int main (int argc, char** argv){

	// Printing
	int x_int = 0;
	printf("%zu\n", sizeof(x_int));
	char a_string[20] = "This is a string";
  	printf("%s\n", a_string); // %s formats a string
  	
  	// Numbers
  	int a = 3;
  	float b = 4.5;
  	double c = 5.25;
  	float sum;
  	
  	sum = a + b + c;

  	printf("The sum of a, b, and c is: %0.2f.\n", sum);
  	
  	// Use function
  	int d = 23;
  	int int_sum;
  	int_sum = add_two_ints(a, d);
  	printf("The sum of a and d is: %d.\n", int_sum);
  	
  	// Array
  	int grades[3];
  	grades[0] = 85;
  	grades[1] = 89;
  	grades[2] = 97;

  	int average;
  	average = (grades[0] + grades[1] + grades[2]) / 3;
  	printf("The average of the grades is %d\n", average);

  	// Strings
  	char * name = "Katerina";

  	if (strncmp(name, "Katerina", 8) == 0) {
  		printf("Hello, Katerina\n");
  	} else {
  		printf("You are not Katerina. Go away.\n");
  	}

  	// For loop
 	int_sum = 0;
 	int i;
  	for (i = 0; i < 10; i++){
  		int_sum += i;
  	}
  	printf("Sum in loop is: %d\n", int_sum);


  	//Pointers
  	int z = 1;
  	int *pointer_to_z = &z;

  	z += 1;
  	*pointer_to_z += 1;
  	printf("The value of z is: %d\n", z);
  	printf("The pointer_to_z is %p, and it's value is %d\n", pointer_to_z, *pointer_to_z);
  	// access directly
  	printf("Still the pointer value: %p\n", (void *)&z);

  	// array pointing

  	int x_array[20];
  	int j;
  	for (j = 0; j < 20; j++){
  		x_array[j] = 20 - j;
  	}
  	int *x_ptr = x_array;

  	printf("x_array[0] = %d, %p\n", *x_ptr, x_ptr);
  	
  	x_ptr += 1;

  	printf("x_array[1] = %d, %p\n", *x_ptr, x_ptr);

  	int myint = 12;
  	add_one(&myint);
  	printf("My int was 12 and after add_one() it is: %d\n", myint);

  	// Struct in use
  	point p;
  	p.x = 2;
  	p.y = 12;
  	bump_point(&p);

  	printf("My point is now at (%d, %d)\n", p.x, p.y);


  	return 0;
}

//Struct
typedef struct {
	char * name;
    int age;
} person;


//Functions

int add_two_ints(int x1, int x2)
{
  return x1 + x2; // Use return to return a value
}
// Side-effects
void add_one(int *n){
	(*n)++;
}
void bump_point(point *p){
	p -> x++;
	p -> y++;
}

//Special characters:
/*
'\a'; // alert (bell) character
'\n'; // newline character
'\t'; // tab character (left justifies text)
'\v'; // vertical tab
'\f'; // new page (form feed)
'\r'; // carriage return
'\b'; // backspace character
'\0'; // NULL character. Usually put at end of strings in C.
//   hello\n\0. \0 used by convention to mark end of string.
'\\'; // backslash
'\?'; // question mark
'\''; // single quote
'\"'; // double quote
'\xhh'; // hexadecimal number. Example: '\xb' = vertical tab character
'\0oo'; // octal number. Example: '\013' = vertical tab character

//print formatting:
"%d";    // integer
"%3d";   // integer with minimum of length 3 digits (right justifies text)
"%s";    // string
"%f";    // float
"%ld";   // long
"%3.2f"; // minimum 3 digits left and 2 digits right decimal float
"%7.4s"; // (can do with strings too)
"%c";    // char
"%p";    // pointer
"%x";    // hexadecimal
"%o";    // octal
"%%";    // prints %
*/

