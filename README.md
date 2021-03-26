# 2020-CCE




```c

#include <stdio.h>
int main()
{
printf("Hello World\n")
return 0;
}
```
```c

#include <stdio.h>
int main()
{
int a,b,c,d;
scanf("%d",&a);
printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%50%5/1);
}
```
```c
#include <stdio.h>
int main(void)
 {
 int a,i,b=0;
 scanf("%d",&a);
for(i=1; i<=a;i++)
{
if (a%i==0)
{
       b++; 
```
```c

#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for (int i=0;i<5; i++) printf("%d " ,&a[i]);
        printf("\n");
}
   int main()
   {

              printfAll();
              int *p =&a[2];
              *p =222;
    printfAll();
              p=p +2;
              *p =666;
   printfAll();
           *p--;
              *p =555;
               printfAll();

   }

  }
  }
  printf("%d\n",b);
  
 }
 ```
 ```c
 #include <stdio.h>
int main()
{
  int n,i,ans=0;
  for(i=0;i<10;i++)
  {
     scanf("%d",&n);
     if(n%3==0)
     ans++;
     }
     printf("%d\n",ans);
     }
     ```
     ```c
     #include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  if(n>=90) printf("A\n");
  else if (90>n&&n>=80) printf("B\n");
  else if (80>n&&n>=60) printf("C\n");
  else printf("F\n");
  }
  ```
  ```c
  #include <stdio.h>
int main()
{
  int a,b,i,ans=1;
  scanf("%d %d",&a,&b);
  for(i=1;i<=b;i++)
  {
      if (a%i==0 && b%i==0)
      ans=i;
      }
      printf("%d %d\n",a/ans,b/ans);
      }
```
```c
#include <stdio.h>
int main()
{

        int a[5]={0,10,20,30,40};
        int *p =&a[2];
        *p=222;

        p=p+2;
        *p=666;

}
```
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for (int i=0;i<5; i++) printf("%d " ,&a[i]);
        printf("\n");
}
   int main()
   {

              printfAll();
              int *p =&a[2];
              *p =222;
              printf("p在心裡小紙條記的值是:%d\n",p);
    printfAll();
              p=p +2;
              *p =666;
                printf("p在心裡小紙條記的值是:%d\n",p);
   printfAll();
           *p--;
              *p =555;
               printfAll();
                 printf("p在心裡小紙條記的值是:%d\n",p);

   }
```
```c
#include <stdio.h>
#include <stdio.h>

int a[10];
int main(){
 int b[10];

 int *p =(int*) malloc (sizeof (int)*10);

 return 0;
}
```
```c
#include <stdio.h>

struct DATA {
    int x,y;
} a[3];
struct DATA b={100,200};
int main ()
{
    for (int i=0; i<3; i++){
            printf("a[%d]:%d %d\n",i,a[i].x, a[i].y);
    }
    printf("b; %d %d\n", b.x, b.y);

    struct DATA c;
    printf("c; %d %d像亂碼\n", c.x ,c.y);

    c=b;
     printf("c; %d %d\n", c.x ,c.y);


}
```
```c
#incldue <stdio.h>

struct POINT {
    float x,y;
};
int main ()
{
    

struct POINT a=(4,1,3,2);
printf("%f%f\n",a.x,a.y);
return 0;
}
```
```c
#incldue <stdio.h>

struct DATA {
    int x,y;
};a[3];
struct DATA b={100,200};
int maint main (){
    struct DATA c;
    c=b;
{
    

struct POINT a=(4.1,3.2);
printf("%f%f\n",a.x,a.y);
return 0;
}

a.x=1  
a.y=2
printf("%f%f\n",a.x,a.y);
}
```
```c
#incldue <stdio.h>

struct POINT {
    float x,y;
};
int main ()
{
    

struct POINT a=(4.1,3,2);
printf("%f%f\n",a.x,a.y);
return 0;
}
```
```c
#include <stdio.h>
struct POINT {
float x,y,z;
};

 struct POINT point[5]={0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1};


 int main()
 {

       struct POINT *p =& point[0] ;
       printf("%.2 f %.2f %.2f\n",p->x,p->y,p->z);

           p++;
          printf("%.2 f %.2f %.2f\n",p->x,p->y,p->z);

   p++;
          printf("%.2 f %.2f %.2f\n",p->x,p->y,p->z);
 }
```
```c
#include <stdio.h>
#include <string.h>
int main()
{
 char line [10]="majority";
 char line2 [10]="ask";
 if (strump(line, line2)>0){
      printf("左邊大\n");
        }else{
            printf("右邊大\n");
 }
}
```
```c
# include <stdio.h>
int main()
{

        char line [5][10]="decline","proper","majority"}

        for (int i=0; i<5; i++){
            printf("%s,\n", line[i]);
        }
        }
```
