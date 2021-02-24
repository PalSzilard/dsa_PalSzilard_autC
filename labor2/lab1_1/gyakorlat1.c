//
// Created by Pal on 2/24/2021.
//
#include <stdbool.h>
#include "gyakorlat1.h"
int compare(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    if(c>b && c>a)
        return c;
    if(b>c && b>a)
        return b;
}
int compare2(int a ,int b, int c){
    if(a<b && a<c)
        return a;
    if(c<b && c<a)
        return c;
    if(b<c && b<a)
        return b;
}
int tomboszeg(*t,n){
    int i,s=0;
    for(i=0; i<n; i++)
    {s+=t[i];}
    return s;
}
int tombszorzat(*t,n)
{int i,p=1;
for(i=0; i<n; i++)
{p*=t[i];}
return p;
}
float tombatlag(*t,n)
{int i,s=1,;
for(i=0; i<n; i++)
{s+=t[i];}
return s/n;

}