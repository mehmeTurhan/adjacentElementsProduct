// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
int solution(arr_integer inputArray) {
    int max = inputArray.arr[0]*inputArray.arr[1];
    int prod=0;
    for(int i=1; i<inputArray.size-1;i++){
        prod = inputArray.arr[i]*inputArray.arr[i+1];
        if(prod>max){
            max=prod;
        }
    }
    return max;
}
