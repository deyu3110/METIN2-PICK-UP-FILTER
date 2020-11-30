#Find
		self.RefreshShowSalesText()
		
#Add
		if app.__BL_PICK_FILTER__:
			self.RefreshPickupFilter()
			
#Find
		self.showsalesTextButtonList = []
		
#Add
		if app.__BL_PICK_FILTER__:
			self.PickUpFilterList = []
			
#Find
			self.showsalesTextButtonList.append(GetObject("salestext_off_button"))
			
#Add
			if app.__BL_PICK_FILTER__:
				for button_index in range(systemSetting.PICKUP_FILTER_MAX):
					self.PickUpFilterList.append(GetObject("Pick_Up_Filter_{}".format(button_index)))
					
#Find
		self.showsalesTextButtonList[1].SAFE_SetEvent(self.__OnClickSalesTextOffButton)	
		
#Add
		if app.__BL_PICK_FILTER__:
			for (Index, Button) in enumerate(self.PickUpFilterList):
				Button.SetToggleDownEvent(lambda arg=Index: self.__OnClickPickUpFilterButton(arg))
				Button.SetToggleUpEvent(lambda arg=Index: self.__OnClickPickUpFilterButton(arg))
				
#Find
	def OnChangePKMode(self):
		self.__RefreshPVPButtonList()
		
#Add
	if app.__BL_PICK_FILTER__:
		def __OnClickPickUpFilterButton(self, Index):
			systemSetting.SetPickUpFilter(Index)
			self.RefreshPickupFilter()
		
		def RefreshPickupFilter(self):
			for (Index, Button) in enumerate(self.PickUpFilterList):
				if systemSetting.GetPickUpFilter(Index):
					Button.Down()
				else:
					Button.SetUp()