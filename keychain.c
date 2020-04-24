#include <stdio.h>
#include "keychain.h"

int keychain_init(){
    // initialize keychain with a master password
    printf("Initializing your keychain\n");
    return 0;
}


int keychain_load(){
    // ask the user about the master password  used to authenticate keychain;
    // if the pwd is correct do a trustedDataCheck i.e., check SHA-256 hash of the keychain;
    // if all the checks passed load the keychain
    printf("Loading your keychain\n");
    return 0;
}

int keychain_add(){
    // add a new key in the keychain
    // query the user a name and a password and store it in the encypted datebase(secrets.h)
    printf("Adding a new key in your keychain\n");
    return 0;
}

int keychain_get(){
    // retrive a pwd from the  keychain
    // query the user a name and print the associated password
    printf("Retrieving a key from your keychain\n");
    return 0;

}

int keychain_delete(){
    // delete a key from  the keychain
    // query the user for a name and delete the entry associated with the name
    printf("Deleting Key from the keychain\n");
    return 0;
}
