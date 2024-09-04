#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int item_id;
    float item_profit;
    float item_weight;
    float profit_weight_ratio;
} ITEM;

void swap(ITEM* a, ITEM* b) {
    ITEM temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(ITEM items[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && items[left].profit_weight_ratio > items[largest].profit_weight_ratio)
        largest = left;

    if (right < n && items[right].profit_weight_ratio > items[largest].profit_weight_ratio)
        largest = right;

    if (largest != i) {
        swap(&items[i], &items[largest]);
        heapify(items, n, largest);
    }
}

void heapSort(ITEM items[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(items, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&items[0], &items[i]);
        heapify(items, i, 0);
    }
}

int main() {
    int n;
    float capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    ITEM items[n];

    for (int i = 0; i < n; i++) {
        items[i].item_id = i + 1;
        printf("Enter the profit and weight of item no %d: ", i + 1);
        scanf("%f %f", &items[i].item_profit, &items[i].item_weight);
        items[i].profit_weight_ratio = items[i].item_profit / items[i].item_weight;
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%f", &capacity);

    heapSort(items, n);

    for (int i = 0; i < n / 2; i++)
        swap(&items[i], &items[n - i - 1]);

    float total_profit = 0.0;
    float taken[n];

    for (int i = 0; i < n; i++)
        taken[i] = 0.0;

    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].item_weight) {
            capacity -= items[i].item_weight;
            total_profit += items[i].item_profit;
            taken[i] = 1.0;
        } else if (capacity > 0) {
            taken[i] = capacity / items[i].item_weight;
            total_profit += items[i].item_profit * taken[i];
            capacity = 0;
        }
        else
            taken[i] = 0.0;
    }

    printf("\nItem No\t\tProfit\t\tWeight\t\tAmount to be taken\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%.6f\t%.6f\t%.6f\n", items[i].item_id, items[i].item_profit, items[i].item_weight, taken[i]);
    }

    printf("Maximum profit: %.6f\n", total_profit);

    return 0;
}
