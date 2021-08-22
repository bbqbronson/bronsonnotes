int binary_search_rec(int A[], int key, int low, int high) {
  if (low > high) {
    return -1;
  }

  int mid = low + ((high - low) / 2);
  if (A[mid] == key) {
    return mid;
  }

  if (key < A[mid]) {
    return binary_search_rec(A, key, low, mid - 1);
  }

  return binary_search_rec(A, key, mid + 1, high);
}

int binary_search(int A[], int key, int len) {
  return binary_search_rec(A, key, 0, len - 1);
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