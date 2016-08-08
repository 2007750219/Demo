#include "AtomProtocalFilter.h"
#include "utils/io.h"
#include "base/AtomDataBlock.h"

namespace Atom
{

	ProtocalFilter::ProtocalFilter()
	{

	}

	ProtocalFilter::~ProtocalFilter()
	{

	}

	FilterResult ProtocalFilter::processReceviedData(const DataBlock& data)
	{
		int size = data->size();

		if (size == 0)
		{
			return FR_WAITE;
		}

		char* begin = data->base();

		int length = io::read_uint8(begin);

		if (length < 255)
		{
			if (size >= length + 1)
			{
				data->forward(1);

				return FR_WAITE;
			}
		}
		else// The flag byte is 255
		{

		}

	}


	FilterResult ProtocalFilter::processSentData(const DataBlock& data)
	{

	}

}

#endif


