#include <iostream>

double Normalizer(double V, double Max) {
	return V / Max;
}
double DeNormalizer(double V, double Max) {
	return V * Max;
}

int main() {

	std::size_t Max = 70;
	double V = 0;
	while (std::cin >> V) {
		double T = Normalizer(V, Max);
		std::cout <<V<<':'<< T << std::endl;
		T = DeNormalizer(T, Max);
		std::cout <<V<<':'<< T << std::endl;
	}

}