#include <Python.h>

/*
 * print_python_list_info - print and modify py list in c
 * @p: PyObject in this case, python list
 * Return: NULL
 */
void print_python_list_info(PyObject *p)
{
 int size, alloc, k;
 PyObject *obj;
 PyListObject *ll;
 size = Py_SIZE(p);
 alloc = ((PyListObject *)p)->allocated;

 printf("[*] Size of the Python List = %d\n", size);
 printf("[*] Allocated = %d", alloc);
 for (k = 0; k < size; k++)
 {
  printf("Element %d: ", k);

  obj = PyList_GetItem(p, k);
  ll = (PyListObject *)obj;
  printf("%s\n", ll->ob_base.ob_base.ob_type);
 } 
