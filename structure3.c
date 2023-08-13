#include<stdio.h>
struct x
{
    int a;
    char b;
};
struct y
{
    int c;
    struct x ob;
};
int main()
{
   struct x k;
   struct y l;
   k.a=25;
   k.b='A';

      printf("%d\n",k.a);
      printf("%c\n\n",k.b);

   l.c=100;
   l.ob.a=50;
   l.ob.b='c';

      printf("%d\n",l.c);
      printf("%d\n",l.ob.a);
      printf("%c",l.ob.b);

   return 0;
}
