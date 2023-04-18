// // merging two array

// // preprocessor

// #include <stdio.h>
// #define size1 5
// #define size2 5

// int idx1, idx2;

// // create the array
// int arr1[size1];
// int arr2[size2];

// // int size1 =
// int size3 = size1 + size2;

// //  function declration
// int isEmpty();
// int isFull();
// void insertAtEnd1(int data);
// // void insertAtEnd2(int data);

// // main methids start  here
// int main()
// {
//     idx1 = -1, idx2 = -1;
//     // int arr3[size3];

//     insertAtEnd1(1);

//     return 0;
// }

// // function initialisation
// //  for array 2

// int isEmpty1()
// {
//     if (idx1 == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// // isFull
// int isFull1()
// {
//     if (idx1 = size1 - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// //  for array2

// // int isEmpty2(){
// //     if (idx2 == -1)
// //     {
// //         return 1;
// //     }else{
// //         return 0;
// //     }

// // }

// // int isFull2(){
// //     if (idx2 = size2-1)
// //     {
// //        return  1;
// //     } else{
// //         return 0;
// //     }
// // }

// // inserted at end of the array
// void insertAtEnd1(int data ){
//     // check the  array  is full or not 
//     // if full then  return a message simple 
//     if (isFull1() == 1)
//     {
//         printf("array is full \n");
//     }
    
//     // increment the idx and set the vlaue of the data at  the postion of the idx 
//     //in the array 🙂🙂🙂🙂
//     idx1 ++; // postfix increment by 1 
//     arr1[idx1]= data;
//     printf(" %d data is inserted at index of %d \n", data , idx1);

// }

// // // void insertAtEnd2(int data){
// //     // check for the full case
// //     if (isFull2()== size2-1)
// //     {
// //         printf("array is full ");
// //         return;
// //     }

// //     // check for empty case
// //     if (isEmpty2()==-1)
// //     {
// //         arr2[idx2]= data;
// //     }
// //     // normal case
// //     idx2++;
// //     arr2[idx2]=data;

// //     printf(" %d data is inserted  at index of  %d ",data , idx2);

// // }

// // merging two array in third array