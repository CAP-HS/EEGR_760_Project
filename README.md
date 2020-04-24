# EEGR 760 Project

## Project description
In many software systems today, the primary weakness often lies in the user’s password. This is especially apparent in light of recent security breaches that have highlighted some of the weak passwords people commonly use (e.g., 123456 or password). It is very important, then, that users choose strong passwords (or “passphrases”) to secure their accounts, but strong passwords can be long and unwieldy. Even more problematic, the user generally has many different services that use password authentication, and as a result, the user has to recall many different passwords.

One way for users to address this problem is to use a password manager, such as LastPass and KeePass. Password managers make it very convenient for users to use a unique, strong password for each service that requires password authentication. However, given the sensitivity of the data contained in the password manager, it takes considerable care to store the information securely.

In this assignment, you will be writing a secure and efficient password manager. In your implementation, you will make use of various cryptographic primitives we have discussed in class—notably, encryption and collision-resistant hash functions. Because it is ill-advised toimplement your own primitives in cryptography, you should use an established library: in this case, the libraries we used for the MITRE eCTF. You can find the libraries in our final submission. We will provide starter code that contains a basic template, which you will be able to fill in to satisfy the functionality and security properties described below.

## Build notes
To make the project type
```
make
```
For cleaning project type 
``` 
make clean
```
