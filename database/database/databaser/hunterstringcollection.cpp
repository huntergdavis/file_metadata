//simple string collection class
//hunter davis
#include "stdafx.h"
#include "hunterstringcollection.h"


HunterStringCollection::HunterStringCollection()
{
	index = 0;
	for(int i = 0;i < 1000;i++)
	{
		CstringCollection[i] = "";
	}
};

void HunterStringCollection::AddString(CString cToBeAdded)
{
	cToBeAdded.MakeLower();
	CstringCollection[index] = cToBeAdded;
	index++;
};

int	HunterStringCollection::GetNumberOfStrings()
{
	return index;
};

CString	HunterStringCollection::GetStringAtIndex(int iStringIndex)
{
	if (index < iStringIndex)
	{
		CString cReturn = "No String At This index";
		return cReturn;
	}
	return CstringCollection[iStringIndex];
};
void HunterStringCollection::ClearStringCollection()
{
	for(int counter = 0;counter < index;counter++)
	{
		CstringCollection[counter] = "";
	}
	index = 0;
};
void	HunterStringCollection::WriteToFile(CString cFile)
{
	CString cEverything;
	for(int counter = 0;counter < index;counter++)
	{
		cEverything += CstringCollection[counter];
		cEverything += "\n";
	}

	int iSize = cEverything.GetLength();
	FILE *stream;
	if( (stream = fopen( cFile, "w+t" )) != NULL )
	 {
		  int numwritten = fwrite( cEverything, iSize, 1, stream );
		  fclose( stream );
	  }

};
void	HunterStringCollection::SortAlph()
{
	int iStringChanged = 1;
	
	while(iStringChanged == 1)
	{
		iStringChanged = 0;
		for(int counter = 0;counter < index - 1;counter++)
		{
			if(CstringCollection[counter] > CstringCollection[counter + 1])
			{
				CString cTemp;
				cTemp = CstringCollection[counter+1];
				CstringCollection[counter+1] = CstringCollection[counter];
				CstringCollection[counter] = cTemp;
				iStringChanged = 1;
			}
		}
	}
		
}; //strcomp

//private:
//	int index;
//	CString CstringCollection[];


//end file
