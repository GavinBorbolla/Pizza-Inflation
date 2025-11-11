#include <stdio.h>
#include <stdlib.h>

float pizzaValue(float size, float price){

    float radius = size / 2;
    float pizzaArea = 3.14159265 * (radius * radius);
    float PPSI = price / pizzaArea;
    
    return PPSI;
}

float pricePerSlice(float price, int slices){
    return price / slices;
}

int main(){

    
    int compareOrNot;

    printf("Hello! This is a program designed to calculate the value at which you are buying pizza for.\n");
    printf("Would you like to compare the prices of pizza from different places or just find the price of one pizza? (1 = Compare, 0 = One Pizza): ");
    scanf("%d", &compareOrNot);

    if (compareOrNot == 0){

        float pizzaSizeIn;
        int numSlices;
        float pizzaPrice;

        printf("Please enter the size (inches) of your pizza: ");
        scanf("%f", &pizzaSizeIn);

        printf("Please enter the number of slices that your pizza has: ");
        scanf("%d", &numSlices);

        printf("Please enter the price of your pizza: ");
        scanf("%f", &pizzaPrice);

        printf("The price per slice of your pizza is: $%.2f\n", pricePerSlice(pizzaPrice, numSlices));
        printf("The value of your pizza is: $%.2f per square inch\n", pizzaValue(pizzaSizeIn, pizzaPrice));  

    }
    else if (compareOrNot == 1){

        float size1, price1, slices1, size2, price2, slices2;;

        //Values for pizza 1
        printf("Please enter the size (inches) of the first pizza: ");
        scanf("%f", &size1);

        printf("Please enter the price of the first pizza: ");
        scanf("%f", &price1);

        printf("Please enter the number of slices in the first pizza: ");
        scanf("%f", &slices1);

        printf("\n");

        //Values for pizza 2
        printf("Please enter the size (inches) of the second pizza: ");
        scanf("%f", &size2);

        printf("Please enter the price of the second pizza: ");
        scanf("%f", &price2);

        printf("Please enter the number of slices in the second pizza: ");
        scanf("%f", &slices2);
        

        float firstPizzaVal = pizzaValue(size1, price1);
        float secondPizzaVal = pizzaValue(size2, price2);

        printf("\n");

        printf("The value of the first pizza is: $%.2f per square inch\n", firstPizzaVal);
        printf("The value of the second pizza is: $%.2f per square inch\n", secondPizzaVal);
        printf("The price per slice of the first pizza is: $%.2f\n", pricePerSlice(price1, slices1));
        printf("The price per slice of the second pizza is: $%.2f\n", pricePerSlice(price2, slices2));

        printf("\n");

        if (firstPizzaVal < secondPizzaVal){

            int percentFirstBetter = (int)(((secondPizzaVal - firstPizzaVal) / secondPizzaVal) * 100);
            
            printf("The first pizza is a better deal!\n");
            printf("The first pizza is %d%% cheaper!\n", percentFirstBetter);

        }
        else if (secondPizzaVal < firstPizzaVal){

            int percentSecondBetter = (int)(((firstPizzaVal - secondPizzaVal) / firstPizzaVal) * 100);

            printf("The second pizza is a better deal!\n");
            printf("The second pizza is %d%% cheaper!\n", percentSecondBetter);

        }
        else{

            printf("Both pizzas have the same value!\n");

        }

    }
    else{

        printf("Invalid input. Please restart the program and enter either 0 or 1.\n");

    }

    return 0;
}