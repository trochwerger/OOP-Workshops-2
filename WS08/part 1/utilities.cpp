#include <memory>
#include "list.h"
#include "element.h"
#include "utilities.h"


using namespace std;

namespace seneca {
    List<Product> mergeRaw(const List<Description>& desc, const List<Price>& price) {
        List<Product> products;

        for (size_t i = 0; i < desc.size(); ++i) {
            for (size_t j = 0; j < price.size(); ++j) {
                if (desc[i].code == price[j].code) {
                    auto* product = new Product(desc[i].desc, price[j].price);
                    try {
                        product->validate();
                        products += product;
                        delete product;
                    } catch (std::invalid_argument& e) {
                        delete product;
                        throw;
                    }
                }
            }
        }

        return products;
    }
}