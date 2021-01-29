static __thread int x;
static int *volatile p;
void f(int c)
{
    while (c--)
      p = &x;
}
