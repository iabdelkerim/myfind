#define DEF
#define _DEFAULT_SOURCE
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
enum OPTION {
    D,
    H,
    L,
    P
};
struct list {
    size_t *tab;
    size_t size;
    size_t capacity;
};
struct list * list_init();
void list_append(struct list * l,size_t elt);
int is_in(struct list *l, size_t elt);
DIR * open_directory( char *path);
void find(char *path, int mode, enum OPTION option, struct list *l);
size_t my_strlen(char *s);
int my_strcmp(char *s1, char *s2);
char * concatenate(char *s1, char *s2);

