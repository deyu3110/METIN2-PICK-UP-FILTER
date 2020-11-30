#Add end of file
import app
if app.__BL_PICK_FILTER__:
	FILTER_HEIGHT = 25
	FILTER_START_Y = 240 # Change here
	window["height"] += FILTER_HEIGHT * 3
	window["children"][0]["height"] += FILTER_HEIGHT * 3
	window["children"][0]["children"] += (
		{
			"name" : "PickUpFilter",
			"type" : "text",
			
			"x" : LINE_LABEL_X,
			"y" : FILTER_START_Y + FILTER_HEIGHT + 2,

			"text" : uiScriptLocale.PICKUP_FILTER_TITLE,
		},
		{
			"name" : "Pick_Up_Filter_0",
			"type" : "toggle_button",

			"x" : LINE_DATA_X,
			"y" : FILTER_START_Y + FILTER_HEIGHT,

			"text" : uiScriptLocale.PICKUP_FILTER_0,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_1",
			"type" : "toggle_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH,
			"y" : FILTER_START_Y + FILTER_HEIGHT,

			"text" : uiScriptLocale.PICKUP_FILTER_1,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_2",
			"type" : "toggle_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH*2,
			"y" : FILTER_START_Y + FILTER_HEIGHT,

			"text" : uiScriptLocale.PICKUP_FILTER_2,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_3",
			"type" : "toggle_button",

			"x" : LINE_DATA_X,
			"y" : FILTER_START_Y + FILTER_HEIGHT * 2,

			"text" : uiScriptLocale.PICKUP_FILTER_3,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_4",
			"type" : "toggle_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH,
			"y" : FILTER_START_Y + FILTER_HEIGHT * 2,

			"text" : uiScriptLocale.PICKUP_FILTER_4,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_5",
			"type" : "toggle_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH * 2,
			"y" : FILTER_START_Y + FILTER_HEIGHT * 2,

			"text" : uiScriptLocale.PICKUP_FILTER_5,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_6",
			"type" : "toggle_button",

			"x" : LINE_DATA_X,
			"y" : FILTER_START_Y + FILTER_HEIGHT * 3,

			"text" : uiScriptLocale.PICKUP_FILTER_6,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_7",
			"type" : "toggle_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH,
			"y" : FILTER_START_Y + FILTER_HEIGHT * 3,

			"text" : uiScriptLocale.PICKUP_FILTER_7,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "Pick_Up_Filter_8",
			"type" : "toggle_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH * 2,
			"y" : FILTER_START_Y + FILTER_HEIGHT * 3,

			"text" : uiScriptLocale.PICKUP_FILTER_8,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},)