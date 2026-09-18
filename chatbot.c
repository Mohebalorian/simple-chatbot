#include <stdio.h>
#include <string.h>

int main() {
    char message[200];

    printf("Bot: Hi I am a chatbot! How can I help you?\n");
    printf("You: ");

    while(1) {
         if(fgets(message,200,stdin)==NULL) {
            break;
         }
         if(strstr(message,"bye")!=NULL){
            printf("Bot: Bye have a great day!\n");
            break;
         }
         else{
            if(strstr(message,"hi")!=NULL || strstr(message,"hello")!=NULL){
            printf("Bot: Hi how are you doing?\n");
            printf("You:");
            }
            else{
                if(strstr(message,"fine")!=NULL || strstr(message,"good")!=NULL || strstr(message,"great")!=NULL){
                printf("Bot: Well I am not. Tell me how can I help you\n");
                printf("You:");
                }
                else{
                    if(strstr(message,"bad")!=NULL || strstr(message,"terrible")!=NULL){
                    printf("Bot: Twinning fr. Now how can I help you\n");
                    printf("You:");
                    }
                     else{
                         printf("Bot: Sorry I do not understand\n");
                         printf("You:");
                        }
                    }
                }
         
         
         }
         
     
     }     
        
   return 0;

}
