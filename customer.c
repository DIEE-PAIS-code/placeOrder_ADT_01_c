#include "customer.h"
#include <stdio.h>


void initCustomer(Customer * p_customer, const char* name){
    p_customer->nOfOrders=0;
    p_customer->name=name;
};

Order createOrder(int id, float price){
    Order newOrder;
    newOrder.idOrder=id;
    newOrder.price=price;
    return newOrder;
}


void placeOrder(Customer *p_customer,  Order anOrder){
	//add an _order_ to the _list of orders_ contained in a Customer.
    int idx_actualOrder=p_customer->nOfOrders;
    p_customer->orders[idx_actualOrder]=anOrder;
    (p_customer->nOfOrders)++;

};


void showOrders(Customer *p_customer){
    int nOfOrders=p_customer->nOfOrders;
    char *name=p_customer->name;
    int idOrder;
    float price;

    printf("Customer %s - number of orders %d \n",name, nOfOrders );
    for (int i=0; i<nOfOrders; i++){
        idOrder=p_customer->orders[i].idOrder;
        price= p_customer->orders[i].price;
        printf("Order n. %d:  ID %d, PRICE %.2f\n",i,idOrder, price );

    }

};
