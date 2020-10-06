/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Autodesk Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++-Header file in order to allow an easy
 use of S7Net Communication Protocol

Interface version: 3.1.3

*/

#ifndef __LIBS7COM_DYNAMICHEADER_CPPTYPES
#define __LIBS7COM_DYNAMICHEADER_CPPTYPES

#include "libs7com_types.hpp"

#include "libs7net_types.hpp"


/*************************************************************************************************************************
 Class definition for Base
**************************************************************************************************************************/

/*************************************************************************************************************************
 Class definition for PLCCommunication
**************************************************************************************************************************/

/**
* Configures the protocol
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] pProtocolConfiguration - Configuration XML as string.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_SetProtocolConfigurationPtr) (LibS7Com_PLCCommunication pPLCCommunication, const char * pProtocolConfiguration);

/**
* Starts communication with the S7 PLC Instance
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] pPLC - PLC Instance
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_StartCommunicationPtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Net_PLC pPLC);

/**
* Stops communication with the S7 PLC Instance
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_StopCommunicationPtr) (LibS7Com_PLCCommunication pPLCCommunication);

/**
* Returns the status of the PLC
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetStatusPtr) (LibS7Com_PLCCommunication pPLCCommunication);

/**
* Loads a GCode Program on the PLC
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] pProgram - GCode Program to send.
* @param[in] nIdentifierBufferSize - size of the buffer (including trailing 0)
* @param[out] pIdentifierNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pIdentifierBuffer -  buffer of Program identifier., may be NULL
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_LoadProgramPtr) (LibS7Com_PLCCommunication pPLCCommunication, const char * pProgram, const LibS7Com_uint32 nIdentifierBufferSize, LibS7Com_uint32* pIdentifierNeededChars, char * pIdentifierBuffer);

/**
* Executes a GCode Program on the PLC
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] pIdentifier - Program identifier.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_ExecuteProgramPtr) (LibS7Com_PLCCommunication pPLCCommunication, const char * pIdentifier);

/**
* Clears loaded programs
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_ClearProgramsPtr) (LibS7Com_PLCCommunication pPLCCommunication);

/**
* Returns number of reported variables.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[out] pCount - Number of variables.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableCountPtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 * pCount);

/**
* Returns name of variable.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] nIndex - Index of variable (0-based).
* @param[in] nNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pNameBuffer -  buffer of Name of variable., may be NULL
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableNamePtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 nIndex, const LibS7Com_uint32 nNameBufferSize, LibS7Com_uint32* pNameNeededChars, char * pNameBuffer);

/**
* Returns type of variable.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] nIndex - Index of variable (0-based).
* @param[out] pVariableType - Type of variable.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableTypePtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 nIndex, LibS7Com::eVariableType * pVariableType);

/**
* Returns value of string variable.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] nIndex - Index of variable (0-based).
* @param[in] nValueBufferSize - size of the buffer (including trailing 0)
* @param[out] pValueNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pValueBuffer -  buffer of Value of variable., may be NULL
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableStringPtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 nIndex, const LibS7Com_uint32 nValueBufferSize, LibS7Com_uint32* pValueNeededChars, char * pValueBuffer);

/**
* Returns value of bool variable.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] nIndex - Index of variable (0-based).
* @param[out] pValue - Value of variable.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableBoolPtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 nIndex, bool * pValue);

/**
* Returns value of bool variable.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] nIndex - Index of variable (0-based).
* @param[out] pValue - Value of variable.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableIntegerPtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 nIndex, LibS7Com_int64 * pValue);

/**
* Returns value of double variable.
*
* @param[in] pPLCCommunication - PLCCommunication instance.
* @param[in] nIndex - Index of variable (0-based).
* @param[out] pValue - Value of variable.
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComPLCCommunication_GetVariableDoublePtr) (LibS7Com_PLCCommunication pPLCCommunication, LibS7Com_uint32 nIndex, LibS7Com_double * pValue);

/*************************************************************************************************************************
 Global functions
**************************************************************************************************************************/

/**
* retrieves the binary version of this library.
*
* @param[out] pMajor - returns the major version of this library
* @param[out] pMinor - returns the minor version of this library
* @param[out] pMicro - returns the micro version of this library
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComGetVersionPtr) (LibS7Com_uint32 * pMajor, LibS7Com_uint32 * pMinor, LibS7Com_uint32 * pMicro);

/**
* Returns the last error recorded on this object
*
* @param[in] pInstance - Instance Handle
* @param[in] nErrorMessageBufferSize - size of the buffer (including trailing 0)
* @param[out] pErrorMessageNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pErrorMessageBuffer -  buffer of Message of the last error, may be NULL
* @param[out] pHasError - Is there a last error to query
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComGetLastErrorPtr) (LibS7Com_Base pInstance, const LibS7Com_uint32 nErrorMessageBufferSize, LibS7Com_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Acquire shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComAcquireInstancePtr) (LibS7Com_Base pInstance);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComReleaseInstancePtr) (LibS7Com_Base pInstance);

/**
* Injects an imported component for usage within this component
*
* @param[in] pNameSpace - NameSpace of the injected component
* @param[in] pSymbolAddressMethod - Address of the SymbolAddressMethod of the injected component
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComInjectComponentPtr) (const char * pNameSpace, LibS7Com_pvoid pSymbolAddressMethod);

/**
* Returns the address of the SymbolLookupMethod
*
* @param[out] pSymbolLookupMethod - Address of the SymbolAddressMethod
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComGetSymbolLookupMethodPtr) (LibS7Com_pvoid * pSymbolLookupMethod);

/**
* Returns a PLC Communication instance
*
* @param[out] pPLCCommunication - PLC Communication Instance
* @return error code or 0 (success)
*/
typedef LibS7ComResult (*PLibS7ComCreatePLCCommunicationPtr) (LibS7Com_PLCCommunication * pPLCCommunication);

/*************************************************************************************************************************
 Function Table Structure
**************************************************************************************************************************/

typedef struct {
	void * m_LibraryHandle;
	PLibS7ComPLCCommunication_SetProtocolConfigurationPtr m_PLCCommunication_SetProtocolConfiguration;
	PLibS7ComPLCCommunication_StartCommunicationPtr m_PLCCommunication_StartCommunication;
	PLibS7ComPLCCommunication_StopCommunicationPtr m_PLCCommunication_StopCommunication;
	PLibS7ComPLCCommunication_GetStatusPtr m_PLCCommunication_GetStatus;
	PLibS7ComPLCCommunication_LoadProgramPtr m_PLCCommunication_LoadProgram;
	PLibS7ComPLCCommunication_ExecuteProgramPtr m_PLCCommunication_ExecuteProgram;
	PLibS7ComPLCCommunication_ClearProgramsPtr m_PLCCommunication_ClearPrograms;
	PLibS7ComPLCCommunication_GetVariableCountPtr m_PLCCommunication_GetVariableCount;
	PLibS7ComPLCCommunication_GetVariableNamePtr m_PLCCommunication_GetVariableName;
	PLibS7ComPLCCommunication_GetVariableTypePtr m_PLCCommunication_GetVariableType;
	PLibS7ComPLCCommunication_GetVariableStringPtr m_PLCCommunication_GetVariableString;
	PLibS7ComPLCCommunication_GetVariableBoolPtr m_PLCCommunication_GetVariableBool;
	PLibS7ComPLCCommunication_GetVariableIntegerPtr m_PLCCommunication_GetVariableInteger;
	PLibS7ComPLCCommunication_GetVariableDoublePtr m_PLCCommunication_GetVariableDouble;
	PLibS7ComGetVersionPtr m_GetVersion;
	PLibS7ComGetLastErrorPtr m_GetLastError;
	PLibS7ComAcquireInstancePtr m_AcquireInstance;
	PLibS7ComReleaseInstancePtr m_ReleaseInstance;
	PLibS7ComInjectComponentPtr m_InjectComponent;
	PLibS7ComGetSymbolLookupMethodPtr m_GetSymbolLookupMethod;
	PLibS7ComCreatePLCCommunicationPtr m_CreatePLCCommunication;
} sLibS7ComDynamicWrapperTable;

#endif // __LIBS7COM_DYNAMICHEADER_CPPTYPES

