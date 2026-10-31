#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_MOVIES 10
#define MAX_NAME_LEN 50

typedef struct {
  char username[50];
  char password[50];
} User;

typedef struct {
  char title[MAX_NAME_LEN];
} Movie;

// Function prototypes
void signUp();
int signIn(char *username);
void displayMovies();
void watchMovie(char *username);

// File paths
const char *usersFile = "users.txt";
const char *moviesFile = "movies.txt";

int main() {
  int choice;
  char username[50];
  int keepRunning = 1; // Variable to control the loop

  while (keepRunning) {
    printf("\nWelcome to the Movie Streaming System!\n");
    printf("1. Sign In\n");
    printf("2. Sign Up\n");
    printf("3. Exit\n");
    printf("Choose an option: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      if (signIn(username) != -1) {
        int logOut = 0;
        while (!logOut) {
          displayMovies();
          watchMovie(username);
          printf("Do you want to log out? (1 for Yes, 0 for No): ");
          scanf("%d", &logOut);
        }
      } else {
        printf("Invalid credentials. Please try again.\n");
      }
      break;
    case 2:
      signUp();
      break;
    case 3:
      keepRunning = 0; // Exit the loop
      printf("Exiting the system. Goodbye!\n");
      break;
    default:
      printf("Invalid option. Please choose again.\n");
    }
  }

  return 0;
}

// Sign-up function: stores new user credentials in the users file
void signUp() {
  FILE *file = fopen(usersFile, "a");
  User user;

  if (file == NULL) {
    printf("Error opening file!\n");
    return;
  }

  printf("Enter a username: ");
  scanf("%s", user.username);
  printf("Enter a password: ");
  scanf("%s", user.password);

  fprintf(file, "%s %s\n", user.username, user.password);
  fclose(file);

  printf("Sign-up successful! You can now sign in.\n");
}

// Sign-in function: checks credentials from the users file and returns the
// username
int signIn(char *username) {
  FILE *file = fopen(usersFile, "r");
  User user;
  char inputUsername[50], inputPassword[50];

  if (file == NULL) {
    printf("Error opening file!\n");
    return -1;
  }

  printf("Enter your username: ");
  scanf("%s", inputUsername);
  printf("Enter your password: ");
  scanf("%s", inputPassword);

  while (fscanf(file, "%s %s", user.username, user.password) != EOF) {
    if (strcmp(inputUsername, user.username) == 0 &&
        strcmp(inputPassword, user.password) == 0) {
      strcpy(username,
             user.username); // Copy the username to the provided variable
      fclose(file);
      return 0; // Return 0 if credentials match
    }
  }

  fclose(file);
  return -1; // Return -1 if credentials are invalid
}

// Display list of movies from the movies file
void displayMovies() {
  FILE *file = fopen(moviesFile, "r");
  Movie movie;
  int index = 1;

  if (file == NULL) {
    printf("Error opening file!\n");
    return;
  }

  printf("Available movies:\n");
  while (fgets(movie.title, MAX_NAME_LEN, file) != NULL) {
    printf("%d. %s", index++, movie.title); // Print movie title
  }

  fclose(file);
}

// Simulate watching a movie (selection from the list)
void watchMovie(char *username) {
  FILE *file = fopen(moviesFile, "r");
  Movie movie;
  int choice;
  int index = 1;

  int stopWatching = 0; // Variable to control the loop

  if (file == NULL) {
    printf("Error opening file!\n");
    return;
  }

  printf("\nEnter the number of the movie you want to watch: ");
  scanf("%d", &choice);

  // Find the selected movie
  while (fgets(movie.title, MAX_NAME_LEN, file) != NULL) {
    movie.title[strcspn(movie.title, "\n")] = '\0';
    if (index == choice) {
      while (!stopWatching) {
        printf("%s is watching '%s'. Enjoy your show!\n", username,
               movie.title);
        printf("Enter 'q' to stop watching: ");
        char input[2];
        scanf("%s", input);
        if (strcmp(input, "q") == 0) {
          stopWatching = 1;
        }
      }
      if (stopWatching) {
        stopWatching = 0;
        break;
      }
    }
    index++;
  }

  fclose(file);
}
