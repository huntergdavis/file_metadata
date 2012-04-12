//simple string collection class
//hunter davis
#ifndef HUNTERSTRINGCOLLECTION_H_
#define HUNTERSTRINGCOLLECTION_H_


class HunterStringCollection
{
public:
			HunterStringCollection();
	void	AddString(CString cToBeAdded);
	CString	GetStringAtIndex(int iStringIndex);
	int		GetNumberOfStrings();
	void	ClearStringCollection();
	void	SortAlph();
	void	WriteToFile(CString cFile);
private:
	int index;
	CString CstringCollection[1000];
};


#endif
 