#ifndef INC_1_CUSTOMER_H
#define INC_1_CUSTOMER_H

#define MAX_NO_OF_ORDERS 42

/* Internal representation of an order. */
typedef struct {
    int idOrder;
    float price;
} Order;

/* Internal representation of a customer. */
typedef struct {
    const char* name;
    int nOfOrders;
    Order orders[MAX_NO_OF_ORDERS];
} Customer;

/* First action: initialize a Customer */
void initCustomer(Customer * p_customer, const char* name);

// create an order
Order createOrder(int id, float price);

// add an order
//void placeOrder(Customer* p_customer, const Order* p_order);
void placeOrder(Customer* p_customer, Order anOrder);
// show orders

void showOrders(Customer* p_customer);

#endif //INC_1_CUSTOMER_H
