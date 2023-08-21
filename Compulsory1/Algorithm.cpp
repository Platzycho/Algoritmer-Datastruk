#include <iostream>
#include "Algorithm.h"


int main()
{
   print();


}
void print()
{
	int x;
	int y;

	std::cout<<"How much eat?";
	std::cin >> x;
	std::cout << "Many as this:" << recur(x);

	std::cout<<"\nFiberNachos";
	std::cin >> y;
	std::cout<<"Nacholissous" << fiberNachos(y);

}

int recur(int n)
{
	int sol;
		if(n==1 || n==0){
			sol = 1;
		} else {
			sol = recur(n-1);
		} 
		sol = n*sol;
		return sol;	
}

int fiberNachos(int n)
{
	int t1 = 0;
	int t2 = 1;
	int nextTerm = 0;

	for (int i = 1; i<= n; ++i) {
		if (i == 1) {
			std::cout << t1 << ", ";
			continue;
		} 
		if(i == 2) {
			std::cout << t2 << ", ";
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		std::cout << nextTerm << ", ";
	}
	return 0;
}
