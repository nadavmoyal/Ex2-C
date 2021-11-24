#include <stdio.h>
#include "my_mat.h"

int main(){
int i=0,j=0;
char c;
//if(scanf("%c",&c)>0){
scanf("%c",&c);
while(c!='D'){
if(c=='A'){
enter_mat();
}
else if(c=='B'){
scanf("%d",&i);
scanf("%d",&j);
bool_way(i,j);
}
else if(c=='C'){
scanf("%d",&i);
scanf("%d",&j);
print_short(i,j);
}
scanf("%c",&c);

}

return 0;
}