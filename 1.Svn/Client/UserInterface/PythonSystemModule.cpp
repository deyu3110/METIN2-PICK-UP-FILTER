///Add
#if defined(__BL_PICK_FILTER__)
PyObject* systemGetPickUpFilter(PyObject* poSelf, PyObject* poArgs)
{
	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 0, &iFlag))
		return Py_BuildException();

	return Py_BuildValue("i", CPythonSystem::Instance().CheckPickUpFilter(CPythonSystem::Instance().GetPickUpFilterID(iFlag)));
}
PyObject* systemSetPickUpFilter(PyObject* poSelf, PyObject* poArgs)
{
	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 0, &iFlag))
		return Py_BuildException();

	CPythonSystem::Instance().SetPickUpFilter(CPythonSystem::Instance().GetPickUpFilterID(iFlag));
	return Py_BuildNone();
}
#endif

//Find
		{ "IsAlwaysShowName",			systemIsAlwaysShowName,			METH_VARARGS },
		
///Add
#if defined(__BL_PICK_FILTER__)
		{ "GetPickUpFilter",			systemGetPickUpFilter,			METH_VARARGS },
		{ "SetPickUpFilter",			systemSetPickUpFilter,			METH_VARARGS },
#endif

//Find
	PyModule_AddIntConstant(poModule, "WINDOW_COMMAND",		CPythonSystem::WINDOW_COMMAND);
	
///Add
#if defined(__BL_PICK_FILTER__)
	PyModule_AddIntConstant(poModule, "PICKUP_FILTER_MAX", CPythonSystem::PICKUP_FILTER_MAX);
#endif