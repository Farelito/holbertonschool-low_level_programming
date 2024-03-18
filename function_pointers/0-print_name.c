/**
* print_name - Prints a name using a function pointer
* @name: Pointer to the name to be printed
* @f: Pointer to the function used to print the name
*
* Description: This function takes a pointer to a name and a pointer to a
* function that prints the name. It then calls the function to print the name.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
