#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include "iProduct.h"

namespace w6 {


	class Product : public iProduct {

	private:
		int m_id;
		double m_price;

	public:
		Product(int id, double price);
		virtual double getCharge() const;
		virtual void display(std::ostream&) const;

	};

	std::ostream& operator<<(std::ostream&, const iProduct&);
	iProduct* readProduct(std::ifstream&);
}
#endif 