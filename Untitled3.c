
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
              printf("p�b�߸̤p�ȱ��O���ȬO:%d\n",p);
    printfAll();
              p=p +2;
              *p =666;
                printf("p�b�߸̤p�ȱ��O���ȬO:%d\n",p);
   printfAll();
           *p--;
              *p =555;
               printfAll();
                 printf("p�b�߸̤p�ȱ��O���ȬO:%d\n",p);

   }
