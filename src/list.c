#include "header.h"
struct list * list_init(){
    struct list * res=malloc(sizeof(struct list));
    res->tab=malloc(sizeof(size_t)*256);
    res->capacity=256;
    res->size=0;
    return res;
}
void list_append(struct list * l,size_t elt){
    if (l->size==l->capacity){
        l->tab=realloc(l->tab,(l->capacity+256)*sizeof(size_t));
        l->capacity+=256;
    }
    l->tab[l->size]=elt;
    l->size++;
}
int is_in(struct list *l, size_t elt){
    if(l->size==0)
        return 0;
    for(size_t i=0; i<l->size; i++){
        if(l->tab[i]==elt)
            return 1;
    }
    return 0;
}
