int binary_search(int A[], int key, int len) {
  
  int low = 0;
  int high = len -1;

  while (low <= high) {
    int mid = low + ((high - low) / 2);

    if (A[mid] == key) {
      return mid;
    }

    if (key < A[mid]) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 10, 20, 47, 59, 63, 75, 88, 99, 107, 120, 133, 155, 162, 176, 188, 199, 200, 210, 222};
  int size = sizeof(arr) / sizeof(arr[0]);
  int inputs[5] = {10, 49, 99, 110, 176};

  for (int i = 0; i < 5; i++) { 
    cout << "bin_search(arr, " << inputs[i] << ") = " << binary_search(arr, inputs[i], size) << endl;
  }
  return 0;
}