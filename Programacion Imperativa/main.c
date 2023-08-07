#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //Este for es para ir comparando un numero en general
    int i,j;
    int *resultado = malloc(2*sizeof(int));//Reservamos memoria de manera dinamica para guardar el resultado
    *returnSize = 2;
    for(i=0; i<numsSize-1; i++){
        for(j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j]==target){
                resultado[0] = i;
                resultado[1] = j;
                return resultado;
            }
        }
    }
    return resultado;
}

int main(){
    #ifdef sumar_numeros
        int nums[] = {2, 7, 11, 15};
        int target = 9;
        int numsSize = sizeof(nums) / sizeof(nums[0]);
        int returnSize;

        int* resultado = twoSum(nums, numsSize, target, &returnSize);

        if (resultado != NULL) {
            printf("Resultado: [%d, %d]\n", resultado[0], resultado[1]);
            free(resultado);
        } else {
            printf("No se encontró una solución.\n");
        }
    #endif
    return 0;
}