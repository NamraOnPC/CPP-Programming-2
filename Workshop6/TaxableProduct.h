#ifndef _TAXABLEPRODUCT_H_
#define _TAXABLEPRODUCT_H_

#include "Product.h"
#include <sstream>
#include <memory>
#include <map>


namespace w6 {

	class TaxableProduct : public Product {

	private:
		std::string m_tax;

	public:
		TaxableProduct(int id, double price, std::string msg);
		virtual double getCharge() const;
		virtual void display(std::ostream&) const;

	};


} 
#endif 