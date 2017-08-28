#include "spreadSheetCell.h"

spreadSheetCell::spreadSheetCell():mValue(0.0),mString("")
{
}

spreadSheetCell::spreadSheetCell(double value)
{
	setValue(value);
}

spreadSheetCell::spreadSheetCell(const spreadSheetCell & src):mValue(src.mValue),mString(src.mString)
{
}

spreadSheetCell::spreadSheetCell(const string &mStr)
{
	setString(mStr);	
}

double spreadSheetCell::getValue()
{
	return mValue;
}

void spreadSheetCell::setValue(double value)
{
	mValue = value;
	mString = doubleToString(value);
}

string spreadSheetCell::doubleToString(double value)
{
	ostringstream ostr;
	ostr << value;
	return ostr.str();
}

double spreadSheetCell::stringToDouble(const string &str)
{
	double temp;

	istringstream istr(str);

	istr>>temp;
	if(istr.fail() || !istr.eof())
	{return 0;}
	else
		return temp;

}

string spreadSheetCell::getString()
{
	return mString;
}

void spreadSheetCell::setString(const string &str)
{
	mString = str;
	mValue = stringToDouble(str);
}

void spreadSheetCell::printCell(spreadSheetCell* icell)
{
	cout<<icell->getString()<<endl;
}