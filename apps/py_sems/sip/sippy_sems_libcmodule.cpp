/*
 * Module code.
 *
 * Generated by SIP 4.1.1 (4.1.1-255) on Mon Feb 19 14:57:35 2007
 */

#include "sipAPIpy_sems_lib.h"

#include "sippy_sems_libPySemsDialog.h"
#include "sippy_sems_libAmAudioFile.h"
#include "sippy_sems_libAmAudioEvent.h"
#include "sippy_sems_libAmEvent.h"
#include "sippy_sems_libAmSipDialog.h"
#include "sippy_sems_libAmSipReply.h"
#include "sippy_sems_libAmSipRequest.h"
#include "sippy_sems_libstring.h"



/* Define the strings used by this module. */
char sipNm_py_sems_lib_get_header_param[] = "get_header_param";
char sipNm_py_sems_lib_process[] = "process";
char sipNm_py_sems_lib_setInOut[] = "setInOut";
char sipNm_py_sems_lib_setOutput[] = "setOutput";
char sipNm_py_sems_lib_setInput[] = "setInput";
char sipNm_py_sems_lib_onDtmf[] = "onDtmf";
char sipNm_py_sems_lib_onBye[] = "onBye";
char sipNm_py_sems_lib_onCancel[] = "onCancel";
char sipNm_py_sems_lib_onSessionStart[] = "onSessionStart";
char sipNm_py_sems_lib_onInvite[] = "onInvite";
char sipNm_py_sems_lib_setStopped[] = "setStopped";
char sipNm_py_sems_lib_acceptAudio[] = "acceptAudio";
char sipNm_py_sems_lib_dlg[] = "dlg";
char sipNm_py_sems_lib_PySemsDialog[] = "PySemsDialog";
char sipNm_py_sems_lib_getDataSize[] = "getDataSize";
char sipNm_py_sems_lib_close[] = "close";
char sipNm_py_sems_lib_rewind[] = "rewind";
char sipNm_py_sems_lib_open[] = "open";
char sipNm_py_sems_lib_setLoop[] = "setLoop";
char sipNm_py_sems_lib_getLoop[] = "getLoop";
char sipNm_py_sems_lib_Write[] = "Write";
char sipNm_py_sems_lib_Read[] = "Read";
char sipNm_py_sems_lib_AmAudioFile[] = "AmAudioFile";
char sipNm_py_sems_lib_cleared[] = "cleared";
char sipNm_py_sems_lib_noAudio[] = "noAudio";
char sipNm_py_sems_lib_AmAudioEvent[] = "AmAudioEvent";
char sipNm_py_sems_lib_processed[] = "processed";
char sipNm_py_sems_lib_event_id[] = "event_id";
char sipNm_py_sems_lib_AmEvent[] = "AmEvent";
char sipNm_py_sems_lib_reinvite[] = "reinvite";
char sipNm_py_sems_lib_update[] = "update";
char sipNm_py_sems_lib_cancel[] = "cancel";
char sipNm_py_sems_lib_bye[] = "bye";
char sipNm_py_sems_lib_sendRequest[] = "sendRequest";
char sipNm_py_sems_lib_reply[] = "reply";
char sipNm_py_sems_lib_updateStatus[] = "updateStatus";
char sipNm_py_sems_lib_getContactHdr[] = "getContactHdr";
char sipNm_py_sems_lib_getStatus[] = "getStatus";
char sipNm_py_sems_lib_getUACTransPending[] = "getUACTransPending";
char sipNm_py_sems_lib_setRoute[] = "setRoute";
char sipNm_py_sems_lib_getRoute[] = "getRoute";
char sipNm_py_sems_lib_local_party[] = "local_party";
char sipNm_py_sems_lib_remote_party[] = "remote_party";
char sipNm_py_sems_lib_contact_uri[] = "contact_uri";
char sipNm_py_sems_lib_remote_uri[] = "remote_uri";
char sipNm_py_sems_lib_local_uri[] = "local_uri";
char sipNm_py_sems_lib_sip_port[] = "sip_port";
char sipNm_py_sems_lib_sip_ip[] = "sip_ip";
char sipNm_py_sems_lib_Disconnecting[] = "Disconnecting";
char sipNm_py_sems_lib_Connected[] = "Connected";
char sipNm_py_sems_lib_Pending[] = "Pending";
char sipNm_py_sems_lib_Disconnected[] = "Disconnected";
char sipNm_py_sems_lib_AmSipDialog[] = "AmSipDialog";
char sipNm_py_sems_lib_local_tag[] = "local_tag";
char sipNm_py_sems_lib_remote_tag[] = "remote_tag";
char sipNm_py_sems_lib_next_request_uri[] = "next_request_uri";
char sipNm_py_sems_lib_reason[] = "reason";
char sipNm_py_sems_lib_code[] = "code";
char sipNm_py_sems_lib_AmSipReply[] = "AmSipReply";
char sipNm_py_sems_lib_getHeader[] = "getHeader";
char sipNm_py_sems_lib_key[] = "key";
char sipNm_py_sems_lib_next_hop[] = "next_hop";
char sipNm_py_sems_lib_route[] = "route";
char sipNm_py_sems_lib_body[] = "body";
char sipNm_py_sems_lib_hdrs[] = "hdrs";
char sipNm_py_sems_lib_cseq[] = "cseq";
char sipNm_py_sems_lib_to_tag[] = "to_tag";
char sipNm_py_sems_lib_from_tag[] = "from_tag";
char sipNm_py_sems_lib_callid[] = "callid";
char sipNm_py_sems_lib_to[] = "to";
char sipNm_py_sems_lib_from[] = "from";
char sipNm_py_sems_lib_from_uri[] = "from_uri";
char sipNm_py_sems_lib_r_uri[] = "r_uri";
char sipNm_py_sems_lib_port[] = "port";
char sipNm_py_sems_lib_dstip[] = "dstip";
char sipNm_py_sems_lib_domain[] = "domain";
char sipNm_py_sems_lib_user[] = "user";
char sipNm_py_sems_lib_method[] = "method";
char sipNm_py_sems_lib_cmd[] = "cmd";
char sipNm_py_sems_lib_AmSipRequest[] = "AmSipRequest";
char sipNm_py_sems_lib_string[] = "string";

void sipVH_py_sems_lib_0(sip_gilstate_t sipGILState,PyObject *sipMethod,AmEvent *a0)
{
	PyObject *sipResObj = sipCallMethod(0,sipMethod,"M",a0,sipClass_AmEvent);

	if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
		PyErr_Print();

	Py_XDECREF(sipResObj);
	Py_DECREF(sipMethod);

	SIP_RELEASE_GIL(sipGILState)
}

void sipVH_py_sems_lib_1(sip_gilstate_t sipGILState,PyObject *sipMethod,int a0,int a1)
{
	PyObject *sipResObj = sipCallMethod(0,sipMethod,"ii",a0,a1);

	if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
		PyErr_Print();

	Py_XDECREF(sipResObj);
	Py_DECREF(sipMethod);

	SIP_RELEASE_GIL(sipGILState)
}

void sipVH_py_sems_lib_2(sip_gilstate_t sipGILState,PyObject *sipMethod,const AmSipRequest& a0)
{
	PyObject *sipResObj = sipCallMethod(0,sipMethod,"O",const_cast<AmSipRequest *>(&a0),sipClass_AmSipRequest);

	if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
		PyErr_Print();

	Py_XDECREF(sipResObj);
	Py_DECREF(sipMethod);

	SIP_RELEASE_GIL(sipGILState)
}

void sipVH_py_sems_lib_3(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
	PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

	if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
		PyErr_Print();

	Py_XDECREF(sipResObj);
	Py_DECREF(sipMethod);

	SIP_RELEASE_GIL(sipGILState)
}


static PyObject *func_get_header_param(PyObject *,PyObject *sipArgs)
{
	int sipArgsParsed = 0;

	{
		const string * a0;
		int a0IsTemp = 0;
		const string * a1;
		int a1IsTemp = 0;

		if (sipParseArgs(&sipArgsParsed,sipArgs,"M1M1",sipConvertTo_string,&a0,&a0IsTemp,sipConvertTo_string,&a1,&a1IsTemp))
		{
			string *sipRes;

			sipRes = new string(get_header_param(*a0,*a1));

			if (a0IsTemp)
				delete const_cast<string *>(a0);

			if (a1IsTemp)
				delete const_cast<string *>(a1);

			PyObject *sipResObj = sipConvertFrom_string(sipRes);
			delete sipRes;

			return sipResObj;
		}
	}

	/* Raise an exception if the arguments couldn't be parsed. */
	sipNoFunction(sipArgsParsed,sipNm_py_sems_lib_get_header_param);

	return NULL;
}


static PyObject *func_getHeader(PyObject *,PyObject *sipArgs)
{
	int sipArgsParsed = 0;

	{
		const string * a0;
		int a0IsTemp = 0;
		const string * a1;
		int a1IsTemp = 0;

		if (sipParseArgs(&sipArgsParsed,sipArgs,"M1M1",sipConvertTo_string,&a0,&a0IsTemp,sipConvertTo_string,&a1,&a1IsTemp))
		{
			string *sipRes;

			sipRes = new string(getHeader(*a0,*a1));

			if (a0IsTemp)
				delete const_cast<string *>(a0);

			if (a1IsTemp)
				delete const_cast<string *>(a1);

			PyObject *sipResObj = sipConvertFrom_string(sipRes);
			delete sipRes;

			return sipResObj;
		}
	}

	{
		const string * a0;
		int a0IsTemp = 0;
		const string * a1;
		int a1IsTemp = 0;
		const string * a2;
		int a2IsTemp = 0;

		if (sipParseArgs(&sipArgsParsed,sipArgs,"M1M1M1",sipConvertTo_string,&a0,&a0IsTemp,sipConvertTo_string,&a1,&a1IsTemp,sipConvertTo_string,&a2,&a2IsTemp))
		{
			string *sipRes;

			sipRes = new string(getHeader(*a0,*a1,*a2));

			if (a0IsTemp)
				delete const_cast<string *>(a0);

			if (a1IsTemp)
				delete const_cast<string *>(a1);

			if (a2IsTemp)
				delete const_cast<string *>(a2);

			PyObject *sipResObj = sipConvertFrom_string(sipRes);
			delete sipRes;

			return sipResObj;
		}
	}

	/* Raise an exception if the arguments couldn't be parsed. */
	sipNoFunction(sipArgsParsed,sipNm_py_sems_lib_getHeader);

	return NULL;
}


/* Convert to a sub-class if possible. */
static sipWrapperType *sipSubClass_AmEvent(void *sipCppV)
{
	AmEvent *sipCpp = reinterpret_cast<AmEvent *>(sipCppV);
	sipWrapperType *sipClass;

#line 15 "AmAudio.sip"
	if(dynamic_cast<AmAudioEvent*>(sipCpp)){
		sipClass = sipClass_AmAudioEvent;
	}
	else {
		sipClass = sipClass_AmEvent;
	}
#line 272 "sippy_sems_libcmodule.cpp"

	return sipClass;
}


/*
 * This defines each class in this module.  The values are replaced by the
 * proper Python types during the export process.
 */
static sipWrapperType *typesTable[] = {
	(sipWrapperType *)&sipType_PySemsDialog,
	(sipWrapperType *)&sipType_AmAudioFile,
	(sipWrapperType *)&sipType_AmEvent,
	(sipWrapperType *)&sipType_AmAudioEvent,
	(sipWrapperType *)&sipType_AmSipDialog,
	(sipWrapperType *)&sipType_AmSipReply,
	(sipWrapperType *)&sipType_AmSipRequest,
	0
};


/* This defines each mapped type in this module. */
static sipMappedTypeDef *mappedTypesTable[] = {
	&sipMappedType_string,
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
	(sipVirtHandlerFunc)sipVH_py_sems_lib_0,
	(sipVirtHandlerFunc)sipVH_py_sems_lib_1,
	(sipVirtHandlerFunc)sipVH_py_sems_lib_2,
	(sipVirtHandlerFunc)sipVH_py_sems_lib_3,
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
	{sipSubClass_AmEvent, {2, 255, 0}, NULL},
	{NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_py_sems_lib = {
	NULL,
	"py_sems_lib",
	0,
	NULL,
	-1,
	typesTable,
	mappedTypesTable,
	virtHandlersTable,
	convertorsTable,
	{NULL, NULL, NULL, NULL, NULL, NULL},
	NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_py_sems_lib;


/* The Python module initialisation function. */
PyMODINIT_FUNC initpy_sems_lib()
{
	static PyMethodDef methods[] = {
		{sipNm_py_sems_lib_get_header_param, func_get_header_param, METH_VARARGS, NULL},
		{sipNm_py_sems_lib_getHeader, func_getHeader, METH_VARARGS, NULL},
		{0, 0, 0, 0}
	};

	/* Initialise the module. */
	PyObject *mod = Py_InitModule(sipModuleAPI_py_sems_lib.em_name,methods);
	PyObject *mdict = PyModule_GetDict(mod);

	/* Import the SIP module and get it's API. */
	PyObject *sipmod = PyImport_ImportModule("sip");

	if (sipmod == NULL)
		return;

	PyObject *capiobj = PyDict_GetItemString(PyModule_GetDict(sipmod),"_C_API");

	if (capiobj == NULL || !PyCObject_Check(capiobj))
		return;

	sipAPI_py_sems_lib = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(capiobj));

	/* Export the module and publish it's API. */
	if (sipAPI_py_sems_lib -> api_export_module(&sipModuleAPI_py_sems_lib,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,mdict) < 0)
		return;
}
