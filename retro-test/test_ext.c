
int abc(int a){
	return a*a;
}

int (*func)(int) = abc;

int def(int b){
	return func(b);
}


