//Find
		s_dwNextTCPTime = dwCurTime + 500;
		
///Change
#if !defined(__BL_PICK_FILTER__)
		s_dwNextTCPTime = dwCurTime + 500;
#endif

//Find
		CPythonNetworkStream& rkNetStream = CPythonNetworkStream::Instance();
		rkNetStream.SendItemPickUpPacket(dwIID);

///Add Above
#if defined(__BL_PICK_FILTER__)
		CItemData* pItemData;
		if (!CItemManager::Instance().GetItemDataPointer(CPythonItem::Instance().GetVirtualNumberOfGroundItem(dwIID), &pItemData))
		{
			Tracenf("CPythonPlayer::SendClickItemPacket(dwIID=%d) : Non-exist item.", dwIID);
			return;
		}
		if (CPythonSystem::Instance().CheckPickUpFilter(CPythonSystem::Instance().GetPickUpFilterID(pItemData->GetType())))
			return;
#endif