///Add
#if defined(__BL_PICK_FILTER__)
#include <unordered_set>
#endif

//Find
			FREQUENCY_MAX_NUM  = 30,
			
///Add
#if defined(__BL_PICK_FILTER__)
			PICKUP_FILTER_MAX	= 9,
#endif

//Find
		int								GetDistance();
		
///Add
#if defined(__BL_PICK_FILTER__)
		void							SetPickUpFilter(BYTE flag);
		BYTE							GetPickUpFilterID(BYTE flag) const;
		bool							CheckPickUpFilter(BYTE flag) const;
#endif

//Find
		int								m_ResolutionCount;
	
///Add
#if defined(__BL_PICK_FILTER__)
		std::unordered_set<BYTE>		usPickUpFilter;
#endif