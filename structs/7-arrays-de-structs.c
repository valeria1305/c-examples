#include <stdio.h>

#define MAXPRODUCTS 5

struct product {
    char name[50];
    int id;
    float price;
    int stock;
};

int main() {
    struct product inventory[MAXPRODUCTS] = {
        {"Laptop", 101, 999.99, 20},
        {"Smartphone", 102, 499.99, 50},
        {"Tablet", 103, 299.99, 30},
        {"Headphones", 104, 49.99, 100},
        {"Charger", 105, 19.99, 200}
    };

    for (int i = 0; i < MAXPRODUCTS; i++) {
        printf("Product %d:\n", i + 1);
        printf("  Name: %s\n", inventory[i].name);
        printf("  ID: %d\n", inventory[i].id);
        printf("  Price: %.2f\n", inventory[i].price);
        printf("  Stock: %d\n", inventory[i].stock);
    }

    return 0;
}
