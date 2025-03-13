void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[nextZero] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
		}
	}
}