#include <stdio.h>
#include <string.h>
#include "keychain.h"

int main(){
    int choice;
    printf("EEGR 760 Keychain Project\n");
    printf("Please enter a choice of operation:\n");
    printf("1. Initialize a new keychain \n"); 
    printf("2. Load your keychain\n");
    printf("3. Add new key in keycain\n");
    printf("4. Get a key from the keychain\n");
    printf("5. Delete a key from your keychain\n");
    printf("0: Exit from the program\n");
    scanf("%d",&choice);
    while(choice){
        switch(choice){
            case 1: 
                keychain_init();
                break;
            case 2: 
                keychain_load();
                break;
            case 3: 
                keychain_add();
                break;
            case 4: 
                keychain_get();
                break;
            case 5: 
                keychain_delete();
                break;
            default: 
                printf("Please enter a correct choice\n");
        }
        scanf("%d",&choice);
    }
    return 0;
}
