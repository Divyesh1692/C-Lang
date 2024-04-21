#include<stdio.h>
#include "udf.c"
void main()
{
   int a = getint("a");
   checkoddeven(a);
   multitable(a);
}

