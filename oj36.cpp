#include <stdio.h>
#include <stdlib.h>

// 用于快速排序的分区函数
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] > pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}
// 快速排序的辅助函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    int m;
    scanf("%d", &m);

    int matrix[m][m];
    int rowSum[m], colSum[m], mainDiagSum, subDiagSum;

    // 读取方阵元素
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 计算行和
    for (int i = 0; i < m; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < m; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // 计算列和
    for (int j = 0; j < m; j++) {
        colSum[j] = 0;
        for (int i = 0; i < m; i++) {
            colSum[j] += matrix[i][j];
        }
    }

    // 计算主对角线和
    mainDiagSum = 0;
    for (int i = 0; i < m; i++) {
        mainDiagSum += matrix[i][i];
    }

    // 计算辅对角线和
    subDiagSum = 0;
    for (int i = 0; i < m; i++) {
        subDiagSum += matrix[i][m - 1 - i];
    }

    // 合并所有和
    int sums[2 * m + 2];
    int index = 0;
    for (int i = 0; i < m; i++) {
        sums[index++] = rowSum[i];
        sums[index++] = colSum[i];
    }
    sums[index++] = mainDiagSum;
    sums[index++] = subDiagSum;

    // 对所有和进行排序
    quickSort(sums, 0, index - 1);

    // 输出排序后的和
    for (int i = 0; i < index; i++) {
        printf("%d ", sums[i]);
    }
    printf("\n");

    return 0;
}
