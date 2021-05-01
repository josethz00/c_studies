void run(int arr[], int arr_length) {

    int swap;

    for (int i = 0; i < arr_length; i++) {
        printf("\n[%d] ", i+1);
        for (int j = 0; j < arr_length; j++) {
            if (arr[j] > arr[j+1]) {    
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }

        print_array(arr, arr_length);
    }

    printf("\n");
}

void print_array(int arr[], int arr_length) {
    for (int k = 0; k < arr_length; k++) {
        printf("%d, ", arr[k]);
    }
}