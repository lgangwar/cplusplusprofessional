#include "standardlib.h"

class spreadSheetCell
{
public:
	spreadSheetCell();
	spreadSheetCell(double value);
	spreadSheetCell(string mStr);
	double getValue();
	void setValue(double value);
	void setString(string inString);
	string getString();
	void printCell(spreadSheetCell* icell);

protected:
	string doubleToString(double value);
	double stringToDouble(string str);
	double mValue;
	string mString;

};