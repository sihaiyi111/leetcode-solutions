int peakIndexInMountainArray(int* arr, int arrSize) {
    int r=1,l=arrSize-2;
    int n=0;
    while(1){
    
      n=(r+l)/2;
      if((arr[n-1]<arr[n])&&(arr[n]<arr[n+1])){
          r=n;
      }
      if((arr[n-1]>arr[n])&&(arr[n]>arr[n+1])){
          l=n;
      }
      if((arr[n-1]<arr[n])&&(arr[n]>arr[n+1])){
          break;
      }
    }
    return n;
}
