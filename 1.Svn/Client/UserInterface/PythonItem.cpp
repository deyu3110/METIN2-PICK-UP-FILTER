///Add
#if defined(__BL_PICK_FILTER__)
#include "PythonPlayer.h"
std::vector<DWORD> CPythonItem::GetCloseItemVector(const std::string& myName, const TPixelPosition& c_rPixelPosition) const
{
	std::vector<DWORD> itemVidList;

	static const float dwCloseItemDistance = std::powf(1000.0f, 2);

	for (const auto& v : m_GroundItemInstanceMap) {
		TGroundItemInstance* pInstance = v.second;
		if (!pInstance)
			continue;

		if (!pInstance->stOwnership.empty() && pInstance->stOwnership.compare(myName) 
			&& !CPythonPlayer::Instance().IsPartyMemberByName(pInstance->stOwnership.c_str()))
			continue;

		float dwxDistance = c_rPixelPosition.x - pInstance->v3EndPosition.x;
		float dwyDistance = c_rPixelPosition.y + pInstance->v3EndPosition.y;
		float dwDistance = std::powf(dwxDistance, 2) + std::powf(dwyDistance, 2);

		if (dwDistance >= dwCloseItemDistance)
			continue;

		itemVidList.emplace_back(v.first);
	}

	return itemVidList;
}
#endif