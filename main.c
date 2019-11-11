#include <stdio.h>
#include "customer.h"

int main(){
    Customer aCustomer_1, aCustomer_2;
    Order anOrder_1, anOrder_2, anOrder_3, anOrder_4;

    initCustomer(&aCustomer_1,"Luca");

    // attenzione: avrei potuto scrivere anche
    // aCustomer_1.name="Luca";
    // aCustomer_1.nOfOrders=0;
    // accedendo direttamente ai campi della struttura
    // i dati NON sono incapsulati


    initCustomer(&aCustomer_2,"Franco");
    printf("\n\n");

    showOrders(&aCustomer_1);
    showOrders(&aCustomer_2);



    anOrder_1=createOrder(1,100);
    anOrder_2=createOrder(2,200);
    anOrder_3=createOrder(3,300);
    anOrder_4=createOrder(4,400);

    placeOrder(&aCustomer_1, anOrder_1);
    placeOrder(&aCustomer_1, anOrder_2);
    placeOrder(&aCustomer_2, anOrder_3);
    placeOrder(&aCustomer_2, anOrder_4);


    printf("\n\n");
    showOrders(&aCustomer_1);
    showOrders(&aCustomer_2);

    getchar();
    return 0;
}