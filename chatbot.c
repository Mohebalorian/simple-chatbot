#include <stdio.h>
#include <string.h>


int main(void) {

    char message [200];
    
    printf("Bot: Hi I am a chatbot. How can I help you?\n");

     

     while(1) {
        printf("You: ");
        if(fgets(message, 200, stdin)==NULL);

     if(strstr(message, "bye") != NULL) {
       printf("Bot: Goodbye! Have a great day!\n");
       break;
    }

   else if(strstr(message, "hello") != NULL) {
       printf("Bot: Hello! How are you?\n");
    }
       else if(strstr(message, "how are you") != NULL) {
              printf("Bot: I am good, thank you for asking!\n");
            }
              else if(strstr(message, "what is your name") != NULL) {
                     printf("Bot: I am a simple chatbot created to assist you.\n");
                    }
                     else {
                            printf("Bot: I'm sorry, I don't understand that.\n");
                     }
    
 }
 return 0;  
}


    
