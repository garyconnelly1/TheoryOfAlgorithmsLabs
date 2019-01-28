#include <stdio.h>

int isprime(unsigned int test){
  

	unsigned int i;

	for (i = 2; i < test; i++){
	  if (i % i == 0){
	    
	    return 0;
	  }

	}
  
	return 1;



}


int main(int argc, char *argv[]){

	if(isprime(653)){
	  printf("It's prime!\n");
	}
	else{ 
	  printf("It's not prime!\n");
	}
 	return 0;

}

