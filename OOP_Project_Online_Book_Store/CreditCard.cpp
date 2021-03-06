#include "CreditCard.h"


/*!
	Constructor function for the CreditCard class.
*/
CreditCard::CreditCard()
{
}

/*!
	Destructor function for the CreditCard class.
*/
CreditCard::~CreditCard()
{
}
/*!
\return Number of credit card
*/
long long CreditCard::getNumber() const
{
	return number;
}
/*!
\param number Number of credit card will be set to this
*/
void CreditCard::setNumber(long long number)
{
	this->number = number;
}
/*!
\return Type of credit card
*/
string CreditCard::getType() const
{
	return type;
}
/*!
\param type Type of credit will be set to this
*/
void CreditCard::setType(const string & type)
{
	this->type = type;
}
/*!
\return Expire date of credit card
*/
string CreditCard::getExpDate() const
{
	return expDate;
}
/*!
\param expDate Expire date of credit card will be set to this
*/
void CreditCard::setExpDate(const string & expDate)
{
	this->expDate = expDate;
}

void CreditCard::performPayment()
{
	cout << getAmount() << " is paid with credit card." << endl;
	cout << "The card number is: " << getNumber() << endl;
	cout << "The card type is: " << getType() << endl;
	cout << "The card's expiration date is: " << getExpDate() << endl;
}
