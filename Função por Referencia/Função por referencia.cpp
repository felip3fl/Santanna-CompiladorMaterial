#include<stdio.h>
#include<conio.h>
void func1 (int u, int v);
void func2 (int *pu, int *pv);
main()
{
      int u=1;
      int v=3;
      printf("\nAntes de chamar a func1: u=%d  v=%d",u,v);
      func1(u,v);
      printf("\nDepois de chamar a func1: u=%d  v=%d",u,v);
      printf("\nAntes de chamar a func2: u=%d  v=%d",u,v);
      func2(&u,&v);
      printf("\nDepois de chamar a func2: u=%d  v=%d",u,v);
      getch();
}
void func1(int u, int v)
{
     u=v=0;
     printf("\nEm func1: u=%d v=%d",u,v);
}
void func2(int *pu, int *pv)
{
     *pu=0;
     *pv=0;
     printf("\nEm func2: *pu=%d *pv=%d",*pu,*pv);
}