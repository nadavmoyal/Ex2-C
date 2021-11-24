#include <stdio.h>
#include "my_mat.h"
int mat[10][10];

void enter_mat(){
int i=0,j=0;
for (i=0;i<10;i++){
    for(j=0;j<10;j++){
    scanf("%d",&mat[i][j]); 
    if(mat[i][j]==0){
        mat[i][j]=10000;
    } 
    }
}
}
void print_short(int i, int j){
int a=short_way(i,j);
if(a==10000){
    printf("-1\n");
}
  else printf("%d\n",a);
}

int short_way(int i, int j){
int k,x=0,y=0,a=0,b=0;
x=i;
y=j;
for(k=0;k<10;k++){
  for(i=0;i<10;i++){
      for(j=0;j<10;j++){
          a=mat[i][j];
          b=mat[i][k]+mat[k][j];
          if(a<b) {mat[i][j]=a;}
          else {mat[i][j]=b;}
    }
  } 
}
return mat[x][y];
}

void bool_way(int i , int j){
       //call "short_way" and retrun 1 \ 0 if the output is not 0.
if(short_way(i,j)==10000){
    printf("False\n");
}
printf("True\n");
}