#include<stdio.h>
int checkstring(char *letter,int mode){
    int i ,number= 0;
    switch (mode)
    {
    case 0:
        for (i = 0;*(letter+i)!='\0';i++){
            if ((*(letter+i) <= 'Z' && *(letter+i)>='A')||(*(letter+i) <= 'z' && *(letter+i)>='a')){
                number ++;
            }
        }
        break;
    case 1:
        for (i = 0;*(letter+i)!='\0';i++){
            if ((*(letter+i) == 'a' || *(letter+i)=='A')
                || (*(letter+i) == 'e' || *(letter+i) == 'E')
                || (*(letter+i) == 'i' || *(letter+i) == 'I')
                || (*(letter+i) == 'o' || *(letter+i) == 'O')
                || (*(letter+i) == 'u' || *(letter+i) == 'U')){
                number ++;
            } 
        }
        break;
    }
    return number;
}
int main(){
    char message[50];
    int mode;  
    printf("Input your message :");
    fgets(message,50,stdin);
    printf("Input mode (0 = letter check OR 1 = sara check):");
    scanf("%d",&mode);
    if (mode = 0)
        printf("number of letter output :%d \n",checkstring(*&message,mode));
    if (mode = 1)
        printf("number of sara output :%d \n",checkstring(*&message,mode));
}
