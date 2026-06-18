#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
};

void displayProducts(struct Product products[], int n);

int main() {
    struct Product products[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter Product ID: ");
        scanf("%d", &products[i].id);

        printf("Enter Product Name: ");
        scanf("%s", products[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &products[i].quantity);
    }


    printf("\nInventory:\n");
    displayProducts(products, 3);

    return 0;
}

void displayProducts(struct Product products[], int n) {
    int i;

    printf("\nID\tName\tQuantity\n");
    printf("-------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n",
               products[i].id,
               products[i].name,
               products[i].quantity);
    }
}
