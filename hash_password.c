#include <stdio.h>
#include <string.h>
#include <bcrypt.h>

#define HASH_LEN 60 ;

void hash_password(const char *password, char *hashed){
    bcrypt_hashpw(password, bcrypt_gensalt(12), hashed);
}s


int verify_password(const char *password, const char *hashed) {
    return bcrypt_checkpw(password, hashed) == 0;
}

int main() {
    const char *password = "my_secure_password";
    char hashed_password[HASH_LEN];

    // Hash the password
    hash_password(password, hashed_password);
    printf("Hashed Password: %s\n", hashed_password);

    // Verify the password
    if (verify_password(password, hashed_password)) {
        printf("Password is correct!\n");
    } else {
        printf("Password is incorrect.\n");
    }

    return 0;
}
