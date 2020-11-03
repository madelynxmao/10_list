#ifndef GAME_LEVEL
#define GAME_LEVEL

struct game_level {
    char user[256];
    int level;

    struct game_level *next;
};

struct game_level *new_user(char *user, int level);

void modify_game_level(struct game_level *p);
void free_game_level(struct game_level *p);
void print_game_level(struct game_level *p);

//new for HW10
void print_list(struct game_level *p);
struct game_level * insert_front(struct game_level *p, char *user_name, int level);
struct game_level * free_list(struct game_level *p);
struct game_level * remove_node(struct game_level *p, char *user_name);

#endif