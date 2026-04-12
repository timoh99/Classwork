

	
#include <iostream>
#include <string>

using namespace std;


class RestaurantOrder {
public:

   
    void placeOrder(string itemName) {
        cout << "You have placed an order for: " << itemName << endl;
    }

 
    void placeOrder(string itemName, int quantity) {
        cout << "You have ordered " << quantity << " of " << itemName << endl;
    }

    
    void placeOrder(string itemName, int quantity, bool takeout) {
        cout << "You have ordered " << quantity << " of " << itemName;

        if (takeout) {
            cout << " for takeout." << endl;
        } else {
            cout << " for dine-in." << endl;
        }
    }
};

int main() {
    RestaurantOrder order;

    order.placeOrder("Burger");
    order.placeOrder("Pizza", 3);
    order.placeOrder("Chicken", 2, true);

    return 0;
}