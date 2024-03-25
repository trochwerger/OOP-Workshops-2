// Name: Tomas Rochwerger
// Student Number: 159432210
// Seneca Email: trochwerger@myseneca.ca
// Date of Completion: 03/24/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <memory>
#include "list.h"
#include "element.h"
#include "utilities.h"

using namespace std;

namespace seneca {
	List<Product> mergeRaw(const List<Description>& desc, const List<Price>& price) {
		List<Product> priceList;
        for (size_t i = 0; i < desc.size(); i++) {
            for (size_t j = 0; j < price.size(); j++) {
                if (desc[i].code == price[j].code) {
                    auto* p = new Product(desc[i].desc, price[j].price);
                    try {
                        p->validate();
                        priceList += p;
                        delete p;
                    }
                    catch (const string& msg) {
                        // First delete the object pointed to by p, if not then it may cause memory leak
                        delete p;
                        throw msg;
                    }
                }
            }
        }
		return priceList;
	}

	List<Product> mergeSmart(const List<Description>& desc, const List<Price>& price) {
		List<Product> priceList;
        for (size_t i = 0; i < desc.size(); i++) {
            for (size_t j = 0; j < price.size(); j++) {
                if (desc[i].code == price[j].code) {
                    std::unique_ptr<Product> p(new Product(desc[i].desc, price[j].price));
                    p->validate();
                    priceList += p;
                }
            }
        }
		return priceList;
	}
}