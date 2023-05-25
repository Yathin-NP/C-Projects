extern int i;
int fun1()
{
    i++;

    printf(" fun1() %d\n",i);

    return 0;

}

int fun2()
{
    i--;
    printf(" fun2() %d\n",i);

    return 0;
}
