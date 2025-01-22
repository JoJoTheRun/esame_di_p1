void split_time(long tot_sec, int *hr, int *min, int *sec){
	*sec= tot_sec%60;
	*hr= (int)(tot_sec/60)/60;
	*min= (tot_sec/60)%60;
}

int main (){
	long tot_sec;
	
	printf("Inserisci il tempo totale in secondi dalla mezzanotte: ");
	scanf("%ld",&tot_sec);
	
	int hr, min, sec;
	
	split_time(tot_sec,&hr,&min,&sec);
	
	printf("Orario: %d ore, %d minuti, %d secondi",hr,min,sec);
	return 0;
}
