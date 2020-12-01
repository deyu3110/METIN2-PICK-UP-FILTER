///Add
#if defined(__BL_PICK_FILTER__)
BYTE CPythonSystem::GetPickUpFilterID(BYTE flag) const
{
	switch (flag)
	{
		case CItemData::ITEM_TYPE_WEAPON: return 0;
		case CItemData::ITEM_TYPE_ARMOR: return 1;
		case CItemData::ITEM_TYPE_METIN: return 2;
		case CItemData::ITEM_TYPE_ELK: return 3;
		case CItemData::ITEM_TYPE_SKILLBOOK: return 4;
		case CItemData::ITEM_TYPE_BELT: return 5;
		case CItemData::ITEM_TYPE_HAIR: return 6;
		case CItemData::ITEM_TYPE_COSTUME: return 7;
		case CItemData::ITEM_TYPE_BLEND: return 8;
	}
	return -1;
}

void CPythonSystem::SetPickUpFilter(BYTE flag)
{
	if (flag >= 0 && flag < PICKUP_FILTER_MAX)
		bsPickUpFilter[flag] = !bsPickUpFilter[flag];
}

bool CPythonSystem::CheckPickUpFilter(BYTE flag) const
{
	return (flag >= 0 && flag < PICKUP_FILTER_MAX) ? bsPickUpFilter[flag] : false;
}
#endif

//Find
		else if (!stricmp(command, "SHOW_SALESTEXT"))
			m_Config.bShowSalesText = atoi(value) == 1 ? true : false;
			
///Add
#if defined(__BL_PICK_FILTER__)
		else if (!strncmp(command, "PICK_UP_", 8) && !stricmp(value, "1")) {
			auto pickid = std::string(1, command[strlen(command) - 1]);
			try {
				SetPickUpFilter(std::stoi(pickid));
			}
			catch(...) {}
		}
#endif

//Find
	fprintf(fp, "USE_DEFAULT_IME		%d\n", m_Config.bUseDefaultIME);
	
///Add
#if defined(__BL_PICK_FILTER__)
	for (BYTE i = 0; i < PICKUP_FILTER_MAX; i++) {
		std::string PickUpText("PICK_UP_" + std::to_string(i) + "\t\t" + std::to_string(CheckPickUpFilter(i)) + "\n");
		fprintf(fp, PickUpText.c_str());
	}
#endif