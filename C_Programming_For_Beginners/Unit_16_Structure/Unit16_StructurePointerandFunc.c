/*
*
*   Written by: Aaron Hale
*   06/28/23
*
*   Challenge to practice using Structures within Pointers and Functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
  char *itemName;
  int quantity;
  float price;  
  float amount;
};

void readItem(struct item *newItem);
void printItem(struct item *storedItem);

//Main should declare and item and a pointer to the item
    //Will need to allocate memory for the itemName pointer
    //The item pointer should be passed into both the read and print item functions
int main(){

    //create structure, and pointer that will point to structure
    struct item itm1 = { NULL, 0, 0.0, 0.0 };
    struct item *pItm1 = NULL;
    pItm1 = &itm1;
    
    //Initialize struct with variables
    int strLen = 50;
    pItm1->itemName = (char *) malloc(strLen * sizeof(char));
    pItm1->quantity = 0;
    pItm1->price = 0.0;
    pItm1->amount = (float)(pItm1->quantity)*(pItm1->price);


    //Read new item into structure pointer
    readItem(pItm1);

    //Print structure pointer
    printItem(pItm1);

    //Free memory
    free(pItm1->itemName);
    pItm1->itemName = NULL;
    
}


//readItem should: read in from user a product name price and quantity
//The contents read in should be stored in the passed in structure to the function
void  readItem(struct item *newItem){
    //Get Item name
    printf("Enter item name: ");
    scanf("%s",newItem->itemName);

    printf("Enter item quantity: ");
    scanf("%d",&newItem->quantity);

    printf("Enter item price ($): ");
    scanf("%f",&newItem->price);

    newItem->amount = (float)(newItem->quantity)*(newItem->price);
    printf("Total cost ($): %.2f\n",newItem->amount);    

}


//Create a function named print item that takes as a parameter a structure pointer 
//prints the contents of the parameter
void printItem(struct item *savedItem){
    printf("Item Name: %s\n",savedItem->itemName);
    printf("Item Quantity: %d\n",savedItem->quantity);
    printf("Item Price ($): %.2f\n",savedItem->price);
    printf("Total Cost ($): %.2f\n",savedItem->amount);

}
