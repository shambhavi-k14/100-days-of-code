//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    scanf("%f %f", &costPrice, &sellingPrice);
    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercent = (profit / costPrice) * 100;
        printf("Profit: %.2f%%\n", profitPercent);
    } else if (costPrice > sellingPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercent = (loss / costPrice) * 100;
        printf("Loss: %.2f%%\n", lossPercent);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
