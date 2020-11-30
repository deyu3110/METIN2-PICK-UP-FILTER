//Find
void CPythonPlayer::PickCloseItem()
{
	...
}

///Change
void CPythonPlayer::PickCloseItem()
{
	CInstanceBase * pkInstMain = NEW_GetMainActorPtr();
	if (!pkInstMain)
		return;

	TPixelPosition kPPosMain;
	pkInstMain->NEW_GetPixelPosition(&kPPosMain);

#if defined(__BL_PICK_FILTER__)
	for (DWORD x : CPythonItem::Instance().GetCloseItemVector(pkInstMain->GetNameString(), kPPosMain))
		SendClickItemPacket(x);
#else
	DWORD dwItemID;
	CPythonItem& rkItem = CPythonItem::Instance();
	if (!rkItem.GetCloseItem(kPPosMain, &dwItemID, __GetPickableDistance()))
		return;

	SendClickItemPacket(dwItemID);
#endif
}