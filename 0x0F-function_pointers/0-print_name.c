/**
 * print_name - does stuff
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
{
return;
}
(*f)(name);
}
