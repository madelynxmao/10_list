#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "game_level.h"

int main(){
    struct game_level *madelyn = NULL;

    char a[] = "madelynmao";
    char b[] = "madelynpart2";
    char c[] = "grace";

    madelyn = insert_front(madelyn,a,50);
    print_list(madelyn);

    madelyn = insert_front(madelyn,b,500);
    print_list(madelyn);

    madelyn = insert_front(madelyn,c,1000);
    print_list(madelyn);

    madelyn= remove_node(madelyn, a);
    
    madelyn = free_list(madelyn);

    print_list(madelyn);
    printf("above should be empty");

    return 0;
}
