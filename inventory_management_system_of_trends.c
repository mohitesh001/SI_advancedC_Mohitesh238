// generate an invoice of different outlets and which include entities/product ID, product quantity , discount , price ,  size, and other feature
// this online E-invoice system provide the feature to represent the whole stock also provide the functioality to add  a single or more items 
// once the requirement is done user  can generate the E-reciept by own itself....
/*
hints 
1. each items and their other prop store in array of same size
2. with the help of loop  we can take  

*/
#include<stdio.h>
int main(){
    int Product_ID[10] = {101,102,103,104,105,106,107,108,109,110};
    char Brand_Name[10][20] = {
        "Levis","Nike","Adidas","Puma","Zara","H&M","AllenSolly","USPolo","Wrangler","LouisPhilippe" };
    char Product_Name[10][20] = {
        "Jeans","TShirt",  "Shoes","TrackPant", "Jacket","Hoodie","Shirt","PoloTee""Denim", "Blazer" };
    float price[10] = {
        2499, 1499, 3999, 1999, 2999,  1799, 2299, 1899, 2799, 4999 };
    int offer[10] = {
        10, 15, 20, 5, 25, 10, 30, 15, 20, 35  };
     char size[10][5] = { "32", "L", "9", "M", "XL", "L", "40", "M", "34", "42" };

     int stock[10] = { 50, 40, 25, 35, 20,30, 45, 50, 28, 15  };

    int id, qty, i, found = 0;
    float total, discount, finalBill;

    printf("\n================ TRENDS STORE =================\n");
    printf("ID\tBrand\t\tProduct\t\tPrice\tOffer\tSize\tStock\n");
    printf("-----------------------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        printf("%d\t%-15s %-15s %.2f\t%d%%\t%s\t%d\n",
               Product_ID[i],Brand_Name[i],Product_Name[i],price[i],offer[i],size[i],stock[i]);
    };
    printf("\nEnter Product ID to Buy: ");
    scanf("%d", &id);
for(i = 0; i < 10; i++) {

  if(id == Product_ID[i]) {       
   found = 1;
   printf("Enter Quantity: ");
    scanf("%d", &qty);
    if(qty <= stock[i]) {
     total = qty * price[i];
     discount = (total * offer[i]) / 100;
     finalBill = total - discount;
     stock[i] = stock[i] - qty;

    printf("\n=============== INVOICE ===============\n");
    
    printf("Product ID   : %d\n", Product_ID[i]);
    printf("Brand Name   : %s\n", Brand_Name[i]);
    printf("Product Name : %s\n", Product_Name[i]);
    printf("Size         : %s\n", size[i]);
    printf("Price        : %.2f\n", price[i]);
    printf("Quantity     : %d\n", qty);
    printf("Offer        : %d%%\n", offer[i]);
    printf("---------------------------------------\n");
    printf("Total Amount : %.2f\n", total);
    printf("Discount     : %.2f\n", discount);
    printf("Final Bill   : %.2f\n", finalBill);
    printf("---------------------------------------\n");
    printf("Stock Left   : %d\n", stock[i]);
   }
    else {
       printf("\nSorry! Only %d items left in stock.\n",
         stock[i]);
      }
   break;
        }
    }

    if(found == 0) {
        printf("\nProduct ID not found in store.\n");
    }
   return 0;
}






