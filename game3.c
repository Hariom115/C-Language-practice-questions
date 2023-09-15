#include <stdio.h>

int main() {
    int choice;
    int gold = 0;
    int health = 100;
    int keys = 0;
    int gameOver = 0;

    printf("Welcome to the Adventure Game!\n");
    printf("You are in a castle and must find the treasure and escape.\n");
    printf("You start with 100 health and no gold or keys.\n");

    while (!gameOver) {
        printf("\nYou are in a room. What do you want to do?\n");
        printf("1. Search for treasure\n");
        printf("2. Open a door\n");
        printf("3. Rest to regain health\n");
        printf("4. Check inventory\n");
        printf("5. Quit game\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You search the room and find 10 gold.\n");
                gold += 10;
                break;
            case 2:
                if (keys > 0) {
                    printf("You use a key to open the door and find another room.\n");
                    keys--;
                } else {
                    printf("You do not have a key to open the door.\n");
                }
                break;
            case 3:
                printf("You rest and regain 20 health.\n");
                health = (health + 20 > 100) ? 100 : health + 20;
                break;
            case 4:
                printf("Inventory: Gold: %d, Health: %d, Keys: %d\n", gold, health, keys);
                break;
            case 5:
                printf("You quit the game.\n");
                gameOver = 1;
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}
