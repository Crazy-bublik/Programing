#include <iostream>
struct mobilephone{
	double weight;
	bool is_broken;
	double price;
};

int main(){
	int num;
	std::cin >> num;
	mobilephone phone[num];
	for (int i=0; i<num;++i){
		std::cin >> phone[i].weight >> phone[i].is_broken >> phone[i].price;
	}
	std::cout << "<MobilePhone>" << std::endl;
	for (int i = 0; i<num; ++i){
		std::cout << "\t" << "<MobilePhone " << "id=\"" << i << "\"" << " weight=" << "\"" << phone[i].weight << "\"" << " is_broken=" << "\"" << ((phone[i].is_broken) ? "true":"false") << "\"" << " price=" << "\"" << phone[i].price << "\"" << "/>" << std::endl;
		
	}
	std::cout << "</MobilePhones>\n";
	return 0;
}
