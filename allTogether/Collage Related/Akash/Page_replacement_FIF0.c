#include<stdio.h>

int poo(int cap, int * list, int curr){
	int z;
	for(z=0;z<cap;z++){
		if(list[z] == curr)
			return 1;
	}
	return 0;
}

int nearinn(int cap, int locNear, int * list,  int curr, int towards){
	int z=locNear;
	if(towards==-1){
		for(z--;z>=0;z--){
			if(list[z] == curr)
				return z;
		}
		return z;
	}
	else{
		for(z++;z<cap;z++){
    		if(list[z]==curr){
                return z;
            }
		}
		return z;
	}
}

int outerMost(int cap, int * list, int type){
	int outerMost = 0;
	if(type==1){
		int z=0;
		int max=list[0];
		for(z++;z<cap;z++){
			if(list[z] > max){
				max = list[z];
				outerMost = z;
			}
		}
		return outerMost;
	}
	else{
		int z=0;
		int min=list[0];
		for(z++;z<cap;z++){
			if(list[z] < min){
				min = list[z];
				outerMost = z;
			}
		}
		return outerMost;
	}
}
void printArray(int cap, int * list){
    int z=0;
    for(;z<cap;z++){
        printf("%d ", list[z]);
    }
    printf("\n");
}
int main(){
	int n;
	printf("page requests: ");
	scanf("%d", &n);
	int m;
	printf("Give the input for number of pages: ");
	scanf("%d", &m);
	int currPages[m];
	int req_pg[n];
	printf("Please provide the page request seperated by some blank space (eg. Req1 Req2 ..) \n");
	int z;
	for(z=0;z<n;z++) scanf("%d", &req_pg[z]);
	int error_1=0;
	int index=-1;
    for(z=0;z<m;z++) currPages[z] = -1;
	for(z=0;z<n;z++){
		if(poo(m, currPages, req_pg[z])) continue;
		else{
			currPages[(++index)%m] = req_pg[z];
			error_1++;
		}
	}
	int fault_in_page=error_1;
    int total_hits=n - error_1;
    int ratio_hit_1;

    printf("\tFaults in the page  : %d\n", fault_in_page);
    printf("\t       Total no of hits  %d\n", total_hits);
    printf("\t  Ratio of hit(HIT RATIO) : %.2f%%\n", (n-error_1)*100.0/n);

	
}