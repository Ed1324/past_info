
void merge(int array[], int leftIndex, int midIndex, int rightIndex) {
	int rightArraySize = rightIndex - midIndex;
	int leftArraySize = midIndex - leftIndex + 1;
	int i {0};
	int j {0};
	int index = leftIndex;
	int rightArray[rightArraySize];
	int leftArray[leftArraySize];
	
	for(int i {0}; i < leftArraySize; i++){
	    leftArray[i] = array[leftIndex + i];
	}
	for(int j {0}; j < rightArraySize; j++){
	    rightArray[j] = array[midIndex+j+1];
	}
	
	while(i < leftArraySize && j < rightArraySize){
        if(leftArray[i] <= rightArray[j]){
            array[index] = leftArray[i];
            i++;
            index++;
        } else{
            array[index] = rightArray[j];
            j++;
            index++;
        }
	}
	while(i < leftArraySize){
	    array[index] = leftArray[i];
	    i++;
	    index++;
	}
	while(j < rightArraySize){
	    array[index] = rightArray[j];
	    j++;
	    index++;
	}
}