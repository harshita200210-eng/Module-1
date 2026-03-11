#include <stdio.h>
int main()

{
    int choice, quantity;
    char more;
    float price = 0, total = 0;


    do
    {
        
        printf("\n------ FOOD MENU ------\n");
        printf("1. Pizza      - Rs 200\n");
        printf("2. Burger     - Rs 100\n");
        printf("3. Sandwich   - Rs 120\n");
        printf("4. Pasta      - Rs 150\n");
        printf("5. Cold Drink - Rs 50\n");
        printf("-----------------------\n");

        
        printf("Enter the item you want to order: ");
        scanf("%d", &choice);

        
        printf("Enter quantity: ");
        scanf("%d", &quantity);

    
        if(choice == 1)
        {
            price = 200 * quantity;
        }
        else if(choice == 2)
        {
            price = 100 * quantity;
        }
        else if(choice == 3)
        {
            price = 120 * quantity;
        }
        else if(choice == 4)
        {
            price = 150 * quantity;
        }
        else if(choice == 5)
        {
            price = 50 * quantity;
        }
        else
        {
            printf("Invalid item code!\n");
            price = 0;
        }

        
        total = total + price;

        printf("Current Total Bill = Rs %.2f\n", total);


        printf("Do you want to order more items? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y'); 

    
    printf("\n------ FINAL BILL ------\n");
    printf("Total Amount to Pay: Rs %.2f\n", total);
    printf("Thank you for ordering!\n");

    return 0;
}