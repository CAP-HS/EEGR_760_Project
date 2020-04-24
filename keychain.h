#include <string.h>
struct key{
    char *hashed_name;
    char *enc_pwd;
};
int keychain_init();
int keychain_load();
int keychain_add();
int keychain_get();
int keychain_delete();
