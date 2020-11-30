///Add
#if defined(__BL_PICK_FILTER__)
BYTE CPythonSystem::GetPickUpFilterID(BYTE flag) const
{
	switch (flag)
	{
		case 0: return CItemData::ITEM_TYPE_WEAPON;
		case 1: return CItemData::ITEM_TYPE_ARMOR;
		case 2: return CItemData::ITEM_TYPE_METIN;
		case 3: return CItemData::ITEM_TYPE_ELK;
		case 4: return CItemData::ITEM_TYPE_SKILLBOOK;
		case 5: return CItemData::ITEM_TYPE_BELT;
		case 6: return CItemData::ITEM_TYPE_HAIR;
		case 7: return CItemData::ITEM_TYPE_COSTUME;
		case 8: return CItemData::ITEM_TYPE_BLEND;
	}
	return -1;
}

void CPythonSystem::SetPickUpFilter(BYTE flag)
{
	if (flag == -1)
		return;

	auto it = std::find(usPickUpFilter.begin(), usPickUpFilter.end(), flag);
	
	if (it == usPickUpFilter.end())
		usPickUpFilter.emplace(flag);
	else
		usPickUpFilter.erase(it);
}

bool CPythonSystem::CheckPickUpFilter(BYTE flag) const
{
	return std::find(usPickUpFilter.begin(), usPickUpFilter.end(), flag) == usPickUpFilter.end();
}
#endif

//Find
		else if (!stricmp(command, "SHOW_SALESTEXT"))
			m_Config.bShowSalesText = atoi(value) == 1 ? true : false;
			
///Add
#if defined(__BL_PICK_FILTER__)
		else if (!strncmp(command, "PICK_UP_", 8) && !stricmp(value, "0")) {
			for (BYTE i = 0; i < PICKUP_FILTER_MAX; i++) {
				std::string PickUpText = "PICK_UP_" + std::to_string(i);
				if (!PickUpText.compare(command)) {
					SetPickUpFilter(GetPickUpFilterID(i));
					break;
				}
			}
		}
#endif

//Find
	fprintf(fp, "USE_DEFAULT_IME		%d\n", m_Config.bUseDefaultIME);
	
///Add
#if defined(__BL_PICK_FILTER__)
	for (BYTE i = 0; i < PICKUP_FILTER_MAX; i++) {
		std::string PickUpText("PICK_UP_" + std::to_string(i) + "\t\t" + std::to_string(CheckPickUpFilter(GetPickUpFilterID(i))) + "\n");
		fprintf(fp, PickUpText.c_str());
	}
#endif