# EEGR 760 Project

## Project Description
In many software systems today, the primary weakness often lies in the user’s password. This is especially apparent in light of recent security breaches that have highlighted some of the weak passwords people commonly use (e.g., 123456 or password). It is very important, then, that users choose strong passwords (or “passphrases”) to secure their accounts, but strong passwords can be long and unwieldy. Even more problematic, the user generally has many different services that use password authentication, and as a result, the user has to recall many different passwords.

One way for users to address this problem is to use a password manager, such as LastPass and KeePass. Password managers make it very convenient for users to use a unique, strong password for each service that requires password authentication. However, given the sensitivity of the data contained in the password manager, it takes considerable care to store the information securely.

In this project, you will be writing a secure and efficient password manager. In your implementation, you will make use of various cryptographic primitives we have discussed in class—notably, encryption and collision-resistant hash functions. Because it is ill-advised toimplement your own primitives in cryptography, you should use an established library: in this case, the libraries we used for the MITRE eCTF. You can find the libraries in our final submission. I have provided a starter code that contains a basic template, which you will be able to fill in to satisfy the functionality and security properties described below.

## Implementation details
In general, a password manager (also called a keychain) application will store its password database on disk, protected by a strong master password; in addition, while it is in use, it may store an “unlocked” representation of the database in memory, from which it can provide the password for each desired domain. Instead of implementing a full standalone password manager application, for this project you will only be responsible for the core library.

Your password manager will keep its in-memory password data in a file: secrets.h. The password data will contain a collection of entries,each entry contains two fields: name and password, where name will represent a website and the password will be the user password for that website. 

The password data should not be stored in plain text. The secrets.h file also needs to be encrypted with a master key. Also, the contentsof the secrets.h files needs to be verified before the user use the keychain. 

Your implemenation should be able to provide an user a large number of entries.

## API Description
Here are descriptions of the functions you will need to implement. 
```
int keychain_init(){
    // initialize keychain with a master password
}


int keychain_load(){
    // ask the user about the master password  used to authenticate keychain;
    // if the pwd is correct do a trustedDataCheck i.e., check SHA-256 hash of the keychain;
    // if all the checks passed load the keychain
}

int keychain_add(){
    // add a new key in the keychain
    // query the user a name and a password and store it in the encypted datebase(secrets.h)
}

int keychain_get(){
    // retrive a pwd from the  keychain
    // query the user a name and print the associated password
}

int keychain_delete(){
    // delete a key from  the keychain
    // query the user for a name and delete the entry associated with the name
}
```
All of these functions need to be completed in the keychain.c file. A skeleton
code is provided for your convenience.

##Optional Requirements
Note that a secure password manager is not allowed to include the master password (or even a hash of it or any other values that would leak information about it). Can you implement the project in away that you do not store the master password.  

## Build notes
To make the project type
```
make
```
For cleaning project type 
``` 
make clean
```

## Deliverables
You need to submit the completed codes to the instructor. This should be  an individual effort.
Do not share code. Do not post the code in an open git repo.
