#include <stdio.h>

/*
 * COMPLEXITY ANALYSIS:
 *  Time complexity : O(N + M)  // we trasverse both the array simultaneously
 *  Space complexity: O(N + M)  // we are creating an output array 
 */

/* function declerations */
void merge_sorted_arrays(int[], int[], int [], int, int);

int main() {
    int a1[] = {0, 3, 4, 31, 300};
    int a2[] = {4, 6, 30};
    
    int l1 = sizeof(a1) / sizeof(a1[0]);
    int l2 = sizeof(a2) / sizeof(a2[0]);
    
    /* declaring output array based on size of both the inputs */
    int out[l1 + l2];
    
    merge_sorted_arrays(a1, a2, out, l1, l2);
    
    /* printing the output */
    for (int i = 0; i < (l1+l2); i++)
        printf("%d ", out[i]);
    
    printf("\n");
    return 0;
}


void merge_sorted_arrays(int a1[], int a2[], int out[], int al1, int al2) {
    /**
     * STEPS:
     *  - go through both the arrays
     *  - check if the current element is larger/smaller wiht the other array element
     *  - update the output array
     *  - update the index of the current array
     *  - continue the loop
     *  - finally after loop finishes
     *      - check for any extra elements and append it to the output array
     **/
    int i = 0, j = 0, k = 0;
    
    while (i < al1 && j < al2) {
        if (a1[i] <= a2[j])
            out[k++] = a1[i++];
        else
            out[k++] = a2[j++];
    }
    
    /* if we are left with any elements, then fill that up in the output array */
    if (al1 > al2) {
        while(i < al1)
            out[k++] = a1[i++];
    }
    
    if (al2 > al1) {
        while(j < al2)
            out[k++] = a2[j++];        
    }
}
