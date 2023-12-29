#include <stdio.h>

int main() {
    int miles, gas_price, miles_per_gallon, parking, tolls;

    printf("Please enter your miles per day, gas price in your country, miles you can drive per gallon, daily parking and toll fees: \n");
    scanf("%d %d %d %d %d" , &miles, &gas_price, &miles_per_gallon, &parking, &tolls);
//Assuming the user can save 50 percents by car pooling
    int gas_cost= (miles/miles_per_gallon)*gas_price;
    int total_cost= gas_cost+parking+tolls;
    int savings= total_cost/2;
    printf("Daily, you are spending a total of:%d NTD\n",total_cost);
    printf("By car pooling you can save up to 50 percents on your car expenses, possible savings:%d",savings);

    return 0;

}
