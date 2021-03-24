#include "header.h"
int main(int argc,char **argv){
    char * path;
    int start=1;
    enum OPTION opt=P;
    struct list * l;
    if (argc==1){
        path=".";
        l=list_init();
        find(path,0,opt,l);
        free(l);
    }
    else{
        start++;
        if (my_strcmp(argv[1],"-H")==0){
            opt=H;
        }
        else if (my_strcmp(argv[1],"-d")==0){
            opt=D;
        }
        else if (my_strcmp(argv[1],"-L")==0){
            opt=L;
        }
        else if (my_strcmp(argv[1],"-P")==0){
            opt=P;
        }
        else if(argv[1][0]=='-'){
            printf("wrong option\n");
            return 1;
        }
            
        else{
            start--;
        } 
    }
    if(argc==2 && start==2){
        l=list_init();
        find(".",0,opt,l);
        free(l);
    }
    for(int i=start; i<argc; i++){
        l=list_init();
        path=argv[i];
        find(path,0,opt,l);
        free(l);
    }
    
    
    return 0;
}
