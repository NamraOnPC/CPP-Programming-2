#include "Product.h"

namespace w6 {

Product::Product(int id, double price)
{
	m_id = id;
	m_price = price;
}


double Product::getCharge() const
{

	return m_price;

}
void Product::display(std::ostream& out) const
{
	out.setf(std::ios::right);
	out.width(10);
	out << m_id;

	out.setf(std::ios::left);
	out.width(10);
	out << m_price;
}

}