#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w, int *x, int *y, int *z){
	int r1 = rand()%4+1;
	if(r1 == 1) *w = 50;
	if(r1 == 2) *w = 100;
	if(r1 == 3) *w = 500;
	if(r1 == 4) *w = 1000;
	int r2 = rand()%4+1;
	while(r2 == r1){
		r2 = rand()%4+1;
	}
	if(r2 == 1) *x = 50;
	if(r2 == 2) *x = 100;
	if(r2 == 3) *x = 500;
	if(r2 == 4) *x = 1000;
	int r3 = rand()%4+1;
	while(r3 == r2 or r3 == r1){
		r3 = rand()%4+1;
	}
	if(r3 == 1) *y = 50;
	if(r3 == 2) *y = 100;
	if(r3 == 3) *y = 500;
	if(r3 == 4) *y = 1000;
	int r4 = rand()%4+1;
	while(r4 == r3 or r4 == r2 or r4 == r1){
		r4 = rand()%4+1;
	}
	if(r4 == 1) *z = 50;
	if(r4 == 2) *z = 100;
	if(r4 == 3) *z = 500;
	if(r4 == 4) *z = 1000;



	return;
}
