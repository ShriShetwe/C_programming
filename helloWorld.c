#include<stdio.h>             /* "#" -> pre processor directive.It does pre preparation before compilation process.
								  include -> It includes the necessary things in the program.
								  "< >" -> It tells that see the file in the standard include path.
								  stdio -> This is a standard input output library, which is standard include path.
								  .h -> It represents it is header file.It contains only function declaration.
                               */


int main(void)					/* int -> Integer is return type of a function.
								   main -> It is a entry point function.
								   ()  -> These are function brackets.They tells us that it is a function.
								   void -> It represents there is no arguments. If we do not use void, we can take's 'n' number of arguments.
								*/

{								/* { -> Starting curly brace which tells that the main function body starts from here. */

	printf("HelloWorld!!!");    /* printf -> It is a function call and it is also used as display function on terminal; printf is a function which take's 'n' number of arguments.
								   ";" -> It represents that expression is a statement.
								*/


	return (0);                  /* return -> Return internally calls exits system call.
									"0" -> Zero is for succesfull excution of program.
	
		                         */				
								
}                                 /* } -> It represents end of the body.  */