#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include "sorfelstatikus.h"
int main() {
QUEUE *myQueue;
int cap=10,n,x;
myQueue=Create(cap);

    do {printf("ad meg a kivant muvelett\n");scanf("%i",&n);


        switch (n) {
            case 1 : {
                    if (!IsFull(myQueue))
                    { printf("ad meg a beolvasando szamot\n");
                        scanf("%i", &x);
                Put(myQueue,x); break;}}

                case 2 : { if(!IsEmpty(myQueue))
            {printf("Elem: %i \n",Get(myQueue)); break;}
                else printf("kiolvastunk minden elemet");

            }
            case 3 :  { printf("az elso elem:%i \n",Front_element(myQueue));break;

            }
            case 4: {break;}

        }


    } while (n!=4);

return 0;
}
