#include<stdio.h>
int main(){
    int Product_ID[10] = { 101, 102, 103, 104, 105, 106, 107,108,109,110};
    char Products[10][15] = { "grocries" , "clothes" , "electronics" , "softdrink" , "milk" ,"footwear",
         "dhai" ,"paneer","stationary","shoes"};
    int price[10] = { 100 , 120 , 130, 500 , 101, 140, 188, 122,199,190 };
    int offer[10] = {10,20,15,12,14,16,18,19,22,17};
    int stock[10] = {50 ,60,70,80,44,99,66,89,100,69};

    int id, qty, i, found = 0;
    float total, discount, finalBill;

    printf("\n================ DMART =================\n");
    printf("ID\tProducts\tPrice\toffer\tstock\n");
    printf("-----------------------------------------------------------------\n");

     for(i = 0; i < 10; i++) {
        printf("%d\t%-15s\t%d\t%d%%\t%d\n",
               Product_ID[i],Products[i],price[i],offer[i],stock[i]);
    };
    printf("\nEnter Product ID to Buy: ");
    scanf("%d", &id);
    


for(i=0; i<10; i++)
{
    if(id == Product_ID[i])
    {
        found = 1;

 printf("Enter Quantity: ");
scanf("%d",&qty);

 if(qty <= stock[i])
    {
     total = qty * price[i];
    discount = (total * offer[i]) / 100;
      finalBill = total - discount;
     stock[i] = stock[i] - qty;

    printf("\n=============== INVOICE ===============\n");
    printf("Product ID   : %d\n", Product_ID[i]);
    printf("Product Name : %s\n", Products[i]);
    printf("Price        : %d\n", price[i]);
    printf("Offer        : %d%%\n", offer[i]);
    printf("Stock        : %d\n", stock[i]);
    printf("Quantity     : %d\n", qty);
    printf("---------------------------------------\n");
    printf("Total Amount : %.2f\n", total);
    printf("Discount     : %.2f\n", discount);
    printf("Final Bill   : %.2f\n", finalBill);
    printf("---------------------------------------\n");
    printf("Stock Left   : %d\n", stock[i]);
        }
        else
        {
            printf("\nSorry! Only %d items left in stock.\n", stock[i]);
        }

        break;
    }
}
}