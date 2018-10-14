#ifndef _SALE_H_
#define _SALE_H_

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include "iProduct.h"
#include "Product.h"
#include "TaxableProduct.h"

namespace w6 {
	class Sale
	{

	private:
		
		std::vector<iProduct*> prod;


	public:

		Sale(const char* filename);
		void display(std::ostream& out) const;

	};

	iProduct* readProduct(std::ifstream& file);

}	
#endif 