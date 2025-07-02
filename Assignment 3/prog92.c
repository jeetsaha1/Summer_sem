// //Count common subsequence in two strings. 

// #include<stdio.h>
// #include<string.h>
// #include<math.h>

// int main(){
//     char str1[50];
//     printf("Enter the string: ");
//     scanf("%s",str1);

//     int len_str1  = strlen(str1);
//     int total_str1 = pow(2,len_str1);
//     int count =0;

//     char str2[50];
//     printf("Enter the string: ");
//     scanf("%s",str2);

//     int len_str2  = strlen(str2);
//     int total_str2 = pow(2,len_str2);

//     for (int i = 0,k=0; i < total_str1 , k < total_str2; i++,k++)
//     {
//         for (int j = 0,l=0; j < len_str1,l<len_str2; j++,l++)
//         {
//             if((i&(1<<j))&&(k&(1<<l))){
//                 if( strcmp(str1[j],str2[l]) == 0){
//                     count++;
//                 }
//             }
//         }
        
//     }
//     printf("The number of common subsequence is: %d",count);
//     return 0;
// }