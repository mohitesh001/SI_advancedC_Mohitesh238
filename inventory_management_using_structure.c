#include <stdio.h>

struct Product {
    int Product_ID;
    char Brand_Name[20];
    char Product_Name[20];
    float price;
    int offer;
    char size[5];
    int stock;
};

int main() {

    struct Product p[10] = {
        {101,"Levis","Jeans",2499,10,"32",50},
        {102,"Nike","TShirt",1499,15,"L",40},
        {103,"Adidas","Shoes",3999,20,"9",25},
        {104,"Puma","TrackPant",1999,5,"M",35},
        {105,"Zara","Jacket",2999,25,"XL",20},
        {106,"H&M","Hoodie",1799,10,"L",30},
        {107,"AllenSolly","Shirt",2299,30,"40",45},
        {108,"USPolo","PoloTee",1899,15,"M",50},
        {109,"Wrangler","Denim",2799,20,"34",28},
        {110,"LouisPhilippe","Blazer",4999,35,"42",15}
    };

    int id, qty, i, found = 0;
    float total, discount, finalBill;

    printf("\n================ TRENDS STORE ================\n");
    printf("ID\tBrand\t\tProduct\t\tPrice\tOffer\tSize\tStock\n");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        printf("%d\t%-15s %-15s %.2f\t%d%%\t%s\t%d\n",
     p[i].Product_ID,
     p[i].Brand_Name,
    p[i].Product_Name,
    p[i].price,
     p[i].offer,
    p[i].size,
    p[i].stock);
    }

    printf("\nEnter Product ID to Buy: ");
    scanf("%d", &id);

    for(i = 0; i < 10; i++) {

    if(id == p[i].Product_ID) {

      found = 1;

    printf("Enter Quantity: ");
     scanf("%d", &qty);

        if(qty <= p[i].stock) {

      total = qty * p[i].price;
      discount = (total * p[i].offer) / 100;
       finalBill = total - discount;

      p[i].stock = p[i].stock - qty;
     printf("\n=============== INVOICE ===============\n");
        printf("Product ID   : %d\n", p[i].Product_ID);
        printf("Brand Name   : %s\n", p[i].Brand_Name);
        printf("Product Name : %s\n", p[i].Product_Name);
        printf("Size         : %s\n", p[i].size);
        printf("Price        : %.2f\n", p[i].price);
        printf("Quantity     : %d\n", qty);
        printf("Offer        : %d%%\n", p[i].offer);
        printf("---------------------------------------\n");
        printf("Total Amount : %.2f\n", total);
        printf("Discount     : %.2f\n", discount);
        printf("Final Bill   : %.2f\n", finalBill);
        printf("---------------------------------------\n");
        printf("Stock Left   : %d\n", p[i].stock);
            }
            else {
                printf("\nSorry! Only %d items left in stock.\n", p[i].stock);
            }

            break;
        }
    }

    if(found == 0) {
        printf("\nProduct ID not found in store.\n");
    }

    return 0;
}