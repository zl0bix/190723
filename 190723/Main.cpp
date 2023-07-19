#include<iostream>
#include<vector>
#include<list>
#include<random>

#include<algorithm>// for vector and list
#include<functional>// for vector and list

bool isMore(int a, int b) {
	return a > b;
}




int main() {
	//Ex1
	std::cout << '\n';
	std::cout << '\n';
	//std::cout << "\t\tEx1\n";
	std::list<int> coll1;
	std::vector<int> coll2;

	std::random_device rd; //generator entropii
	std::mt19937 generator(rd()); //generator psevdo sluchainih 
	std::uniform_int_distribution<int> provider(10, 99);

	for (size_t i = 0; i < 25; i++)
	{
		coll1.push_back(provider(generator));
		coll2.push_back(provider(generator));
	}
	int count = 0;
	/*for (const auto&node:coll1)	{
		for (const auto& el : coll2) {
			if (el == node) {
				std::cout << el << " == " << node << '\n';
				count++;
				break;
			}
		}
	}*/

	//for (const auto& node : coll1) {
	//	count += std::count(coll2.begin(), coll2.end(), node);
	//}

	//std::cout << '\n';

	//std::cout  << count << " - dublicated elements in collections\n";
	//for (const auto& node : coll1)
	//	std::cout << node << ' ';

	//std::cout << '\n';

	//for (const auto& el : coll2)
	//	std::cout << el << ' ';

	////Ex2
	//std::cout << '\n';
	//std::cout << '\n';
	//std::cout << "\t\tEx2\n";
	///*if (count > 0) {
	//	for (const auto& node : coll1) {
	//		auto it = std::find(coll2.begin(), coll2.end(), node);
	//		if (it != coll2.end())
	//			coll2.erase(it);
	//	}
	//}*/
	//std::cout << '\n';

	//for (const auto& node : coll1)
	//	std::cout << node << ' ';

	//std::cout << '\n';

	//for (const auto& el : coll2)
	//	std::cout << el << ' ';

	////min_max,sort,shuffle,split
	//auto lamb = [](int a, int b)->bool { //lambda
	//	return a > b;
	//};
	//// primeri lambda
	//std::sort(coll2.begin(), coll2.end(), isMore);
	//std::sort(coll2.begin(), coll2.end(), lamb);
	//std::sort(coll2.begin(), coll2.end(), [](int a, int b)->bool { return a > b; });

	//std::cout << '\n';

	//for (const auto& el : coll2)
	//	std::cout << el << ' ';

	//std::cout << '\n';

	//std::sort(coll2.begin(), coll2.end());

	//std::cout << '\n';

	//for (const auto& el : coll2)
	//	std::cout << el << ' ';
	/*auto search = std::find(coll2.begin(), coll2.end(), [](int a, int b)->bool { return a > 30; });
	std::cout << *search;*/
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "\t\tEx3\n";
	//Ex3
	//int count = 0;

	std::sort(coll2.begin(), coll2.end());
	//std::sort(coll1.begin(), coll1.end());

	for (const auto& node : coll1)
		std::cout << node << ' ';

	std::cout << '\n';

	for (const auto& el : coll2)
		std::cout << el << ' ';
	std::cout << '\n';

	for (const auto& node : coll1) {
		for (const auto& el : coll2) {
			if (el == node) {
				std::cout << el << " == " << node << '\n';
				count++;
				break;
			}
		}
	}
	

	std::cout << count << " - dublicated elements in collections\n";
	for (const auto& node : coll1) {
		auto it = std::find(coll2.begin(), coll2.end(), node);
		if (it != coll2.end()) {
			coll2.erase(it);
			coll1.push_back(node);
		}
	}
	for (const auto& node : coll1)
		std::cout << node << ' ';

	std::cout << '\n';

	for (const auto& el : coll2)
		std::cout << el << ' ';
	
	for (const auto& node : coll1) {
		auto it = std::find(coll2.begin(), coll2.end(), node>25 && node<75);
		if (it != coll2.end()) {
			coll2.erase(it);
			coll2.insert(node ,0); 
			
		}
	}

	return {};
}