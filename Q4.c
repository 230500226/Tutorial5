#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char username[20] = "";
  char password[20] = "";
  int passwordSize = 0;

  printf("Welcome to Facebook\nTo create an account please enter a username and password to sign in with\n");

  printf("User Name : ");
    scanf("%s", username);

  while(1){  
    int specialCharacter = 0;
    printf("Password (must contain atleast one special character): ");
        scanf("%s", password);

    passwordSize = strlen(password);
    for (int i = 0; i < passwordSize; i++) {
        char passwordCharacter = password[i];
        if (!isalnum(passwordCharacter)) {
        specialCharacter++;
        }
    }

    if (specialCharacter > 0) {
        break;
    } else {
        printf("You have no special characters in your password. Please include at least one.\n");
    }
  }

  printf("Congratulations! You have successfully created a Facebook account.\n");
  printf("Your username is: %s\nYour password is: %s\n", username, password);  

int failedAttempts = 0;
char loginUsername[20] = "";
char loginPassword[20] = "";

while (1) {
    printf("Welcome to Facebook\nTo login please enter your username and password\n");
    printf("Enter your username: ");
    scanf("%s", loginUsername);

    printf("Enter your password: ");
    scanf("%s", loginPassword);

    if (strcmp(loginUsername, username) == 0 && strcmp(loginPassword, password) == 0) {
        printf("Login successful!\n");
        break;
    } else {
        failedAttempts++;
        printf("Login failed. Please try again.\n");

        FILE *LogFile = fopen("./FailedLoginAttempts.txt", "a");
        if (LogFile == NULL) {
            printf("Failed to open log file.\n");
            return 0;
        }
        fprintf(LogFile, "Attempt %d: Username: %s, Password: %s\n", failedAttempts, loginUsername, loginPassword);
        fclose(LogFile);

        if (failedAttempts == 3) {
            printf("You have exceeded the maximum number of failed attempts. Your account has been blocked.\n");
            return 0;
        }
    }
}


  return 0;
}
