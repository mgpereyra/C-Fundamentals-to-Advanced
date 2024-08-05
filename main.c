#include "Functions.h"

int main(){
    int opt;
    do{
        showMenu();
        scanf("%d",&opt);
        showExercise(opt);
    }while(opt != 0);
    return 0;
}
