//Find
		void	PlayUseSound(DWORD dwItemID);
		
///Add
#if defined(__BL_PICK_FILTER__)
		std::vector<DWORD> GetCloseItemVector(const std::string& myName, const TPixelPosition& c_rPixelPosition) const;
#endif