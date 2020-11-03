#include <stdio.h>
#include "game_level.h"
#include <stdlib.h>
#include <string.h>

struct game_level *new_user(char *user, int level){
    struct game_level *nu;
    nu = malloc( sizeof(struct game_level));

    nu->level = level;
    strncpy(nu->user, user, sizeof(nu->user)-1);

    return nu;
}

void modify_game_level(struct game_level *p){
    p->level++;
}

void free_game_level(struct game_level *p){
    free(p);
}
void print_game_level(struct game_level *p){
    printf("Username: %s\n", p->user);
    printf("level: %d\n", p->level);
}

//new for HW10
void print_list(struct game_level *p){
    printf("printing list\n");
    while(p){
        print_game_level(p);
        p = p->next;
    }
}
struct game_level * insert_front(struct game_level *p, char *user_name, int level){
    printf("creating new node to be placed at front \n");
    struct game_level *new_addition = new_user(user_name,level);
    p = new_addition->next;
    return new_addition;
}
struct game_level * free_list(struct game_level *p){
    printf("freeing list\n");
    struct game_level *temp;
    while(p){
        temp = p->next;
        free(p);
        p = temp;
    }
    return p;
}
struct game_level * remove_node(struct game_level *p, char *user_name){
    struct game_level *temp = new_user("",0);
    temp->next=p;
    struct game_level *end = temp;

    while(p){
        if(strcmp(p->user,user_name)){
            printf("freeing %s\n", user_name);
            end -> next = p -> next;
            free_game_level(p);
            break;
        }
        end = p;
        p=p->next;
    }
    struct game_level *return_pointer = temp->next;
    free_game_level(temp);
    return return_pointer;
}
