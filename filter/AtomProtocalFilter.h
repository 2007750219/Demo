#ifndef __AtomProtocalFilter_H__
#define __AtomProtocalFilter_H__

#include "AtomPrerequisites.h"
#include "base/AtomFilter.h"

namespace Atom
{

	class ProtocalFilter : public Filter
	{
		
	public:

		ProtocalFilter();

		virtual ~ProtocalFilter();

		virtual FilterResult processReceviedData(const DataBlock& data);

		virtual FilterResult processSentData(const DataBlock& data);

	};

}


#endif


