//Write a program to print the bill of a sweet shop.

#include <stdio.h>

struct item {
    char name[50];
    float price;
    float weight;
    float total_price;
};

typedef struct item Item;

Item read_item()
{
    Item product;

    printf("Enter sweet name, price per kg and weight in kg: ");
    scanf("%49s%f%f", product.name, &product.price, &product.weight);

    return product;
}

void read_all_items(int count, Item items[count])
{
    for (int index = 0; index < count; index++) {
        items[index] = read_item();
    }
}

void calculate_item_price(Item *product)
{
    product->total_price = product->price * product->weight;
}

float calculate_bill_total(int count, Item items[])
{
    float bill_total = 0;

    for (int index = 0; index < count; index++) {
        calculate_item_price(&items[index]);
        bill_total += items[index].total_price;
    }

    return bill_total;
}

void display_item(Item product)
{
    printf("%s %.2f %.2f %.2f\n",
           product.name, product.price,
           product.weight, product.total_price);
}

void display_bill(int count, Item items[count], float bill_total)
{
    printf("\n--- SWEET SHOP BILL ---\n");
    printf("Sweet  Price/kg  Weight(kg)  Amount\n");

    for (int index = 0; index < count; index++) {
        display_item(items[index]);
    }

    printf("Grand Total = %.2f\n", bill_total);
}

int main()
{
    int count;

    printf("Enter the number of sweets: ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Please enter a valid number of items.\n");
        return 1;
    }

    Item items[count];

    read_all_items(count, items);

    float bill_total = calculate_bill_total(count, items);

    display_bill(count, items, bill_total);

    return 0;
}
