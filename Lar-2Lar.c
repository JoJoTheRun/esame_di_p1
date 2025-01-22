void find_lar(const int *a, int *n, int *largest, int *sec_largest){
	int temp;
	*largest = *a; //*a[0]
	*sec_largest = a[1];
	
	if(*sec_largest>*largest){
		temp=*largest;
		*largest=*sec_largest;
		*sec_largest=temp;
	}
	
	
	for (int i = 2; i < *n; i++){
		if(a[i] >*largest ){
			*sec_largest = *largest;
			*largest = a[i];
		}
		else if (a[i] >*sec_largest){
			*sec_largest = a[i];
		}
	}
}

int main (){
	int array[]={56565, 666762, -21, 3, 7, 1, 9, 4, 6};
	int size = sizeof(array)/sizeof(array[0]);
	int largest, sec_largest;
	
	find_lar(array, &size, &largest, &sec_largest);
	
	printf("Il primo piu grande: %d\n", largest);
	printf("Il secondo piu grande: %d", sec_largest);
	
	return 0;
}
