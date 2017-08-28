#include "standardlib.h"

class spreadSheetCell
{
public:
	spreadSheetCell();
	spreadSheetCell(double value);
	spreadSheetCell(const string &mStr);
	spreadSheetCell(const spreadSheetCell &src);
	double getValue();
	void setValue(double value);
	void setString(const string &inString);
	string getString();
	void printCell(spreadSheetCell* icell);

protected:
	string doubleToString(double value);
	double stringToDouble(const string &str);
	double mValue;
	string mString;

};