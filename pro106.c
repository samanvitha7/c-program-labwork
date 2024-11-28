/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,PRICE AND
AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND PRICE AS
INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/
#include <stdio.h>
#include <string.h>

//structure declaration
struct Item{	
	int quantity;
	float price,amount;
	char itemName[50];
};

//function to calculate total amount of item
void calAmount(struct Item *item,char *name, int qty, float price){
	strcpy(item->itemName,name);
	item->quantity=qty;
	item->price=price;
	item->amount=(float)qty*item->price;
}

int main(){
	//declaration temporary variables
	char name[50];
	int qty;
	float price;
	
	//declare structure variable
	struct Item ITEM;
	
	//read values
	printf("Enter Item name: ");
	scanf("%s",name);
	printf("Enter price: ");
	scanf("%f",&price);
	printf("Enter quantity: ");
	scanf("%d",&qty);
	
	//fill structure and calculate total amount
	calAmount(&ITEM,name,qty,price);
	
	//print structure values
	printf("Item name: %s, Price: %.02f, Quantity: %d\n",ITEM.itemName,ITEM.price,ITEM.quantity);
	printf("Total Amount: %.02f\n",ITEM.amount);
	
	return 0;	
}
